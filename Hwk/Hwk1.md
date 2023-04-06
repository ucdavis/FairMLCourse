
# Homework 1

## Due Wednesday, April 17, 11:59 pm

## Problem 1

### Goal: 

Get acquainted with Fair ML, using a simple example.

### Overview

Say we wish to predict Y from a feature vector X, where X =
(X<sub>1</sub>,...X<sub>p</sub>) includes a
senstive variable S such as race or gender.  We wish to eliminate the
effect of S on our predictions.

One might naively think that we can achieve this goal by simply removing
S from X.  However, this typically does not work, since there may be
other variables in X that are highly correlated with S. In such a
situation, S still will have an effect on our predictions.

For example, say S is age, and one of the other variables in X is number
of children.  Though of course we cannot predict S perfectly from this
variable, the correlation between the two will be substantial, so that S
will affect our prediction of Y to some degree even if we omit it.

In this problem, you will develop an exploratory tool to assess the
problem.  Which variables are good predictors of Y but are highly
correlated with S?

Note that the categorical case is generally viewed as having two
subcases:

* Dichtomous Y:  We code as 1 or 0, representing which of two cases we
  have. E.g. 1 for female, 0 for male.

* Multiclass Y, k classes: Code Y as (Y<sub>1</sub>,...,Y<sub>k</sub>),
  where Y<sub>i</sub> = 1 or 0, depending on whether Y is of class i or
  not.  E.g., for US political party, say we have Democrats, Republicans
  and those labeled as Decline to State. Here k = 3, and (0,1,0) would
  for instance mean Republican.

### Problem statement

You will write a function with call form

``` r
takeALookAround(data,yName,sName,maxFeatureSetSize)
```

where **yName** and **sName** are the names of columns in the data frame
**data**.

So our feature set is given by the column names of **data**, minus
**yName** and **sName**.  The tool will investigate the impact of
using various subsets of the feature set on 

* (a) prediction accuracy for Y of this feature set 

* (b) prediction accuracy for Y of this feature set plus S (how much are 
we giving up by NOT using S?)

* (c) prediction accuracy for S of this feature set (the better the
  accuracy, the less fairness value there is in omitting S from 
  prediction model)

The return value will be a data frame with 4 columns.  The first will be
a character string consisting of the names of the given feature set.
The second will be the prediction accuracy for (a), then the ones for
(b) and (c).  There will be one row in the d.f. for each feature set.
All possible feature sets of size up to **maxFeatureSetSize** will be
investigated.

### Details

* You are required to use [qeML](https://github.com/matloff/qeML). Stick
  to the default values.

* Use **qeLin()** for numeric Y or S, **qeLogit()** for the categorical
  case.  Have your code sense this by using **is.numeric()** or **is.factor()**.
  Use the test accuracy values they return.

### The qeLin() and qeLogit() functions

We'll be discussing these a few lectures from now, but for now here is
what you need to know:

* For numeric Y, **qeLin()** assumes a linear form for the mean Y given
  X, 

    E(Y | X) = &beta;<sub>0</sub> + &beta;<sub>0</sub> + X<sub>1</sub> + ... + &beta;<sub>p</sub> X<sub>p</sub>

   and estimates the coefficients in that linear form from the available
   (X,Y) data. 

* For dichotomous Y, **qeLogit()** assumes the probability of Y = 1 has
   a *logistic* form,

    P(Y = 1 | X) = 1 / [1 + exp{-{&beta;<sub>0</sub> + &beta;<sub>0</sub> + X<sub>1</sub> + ... + &beta;<sub>p</sub> X<sub>p</sub>}]

   Since the function l(t) = 1 / [1 + exp(-t)] is in (0,1), it's good for
   modeling a probability, and then we plug a linear form into that.
   Since l(t) is increasing in t, the larger the value of the linear
   form, the higher the resulting probability.

   (Some say the "log-odds ratio is linear"; true, but I believe it
   obscures the fact that we are working with a probability.

   Note:  Dichotomous Y could be coded with any 2 numbers, but the codes
   will be converted to 1 and 0.

* For multiclass Y, **qeLogit()** does k separate dichotomous runs.
  Then to predict a new case, it finds the estimated P(Y = class i | X),
  i = 1,...,k then does arg max.

Example:

``` r
> data(pef)
> head(pef)
       age     educ occ sex wageinc wkswrkd
1 50.30082 zzzOther 102   2   75000      52
2 41.10139 zzzOther 101   1   12300      20
3 24.67374 zzzOther 102   2   15400      52
4 50.19951 zzzOther 100   1       0      52
5 51.18112 zzzOther 100   2     160       1
6 57.70413 zzzOther 100   1       0       0
> qeLin(pef,'wageinc')$testAcc
holdout set has  1000 rows
[1] 24584.78
> qeLogit(pef,'sex')$testAcc
holdout set has  1000 rows
[1] 0.231
> qeLogit(pef,'occ')$testAcc
holdout set has  1000 rows
[1] 0.649
```

We first predicted wage income from all the other variables.  Our mean
absolute prediction error was more than $24,000.

We then predicted gender from all other variables.  We were incorrect
about 23% of the time.

Finally, we predict occupation, which has 6 different kinds of jobs.
Here we were wrong about 65% of the time.

To prevent overfitting, the qeML functions choose a random holdout set.
They fit the model to the nonholdout data, then use the fitted model to
predict the holdout.

### Example of output

For the **pef** data above, say Y is wage income and S is gender.  One
of the lines in the returned data frame will be

``` r
'age,occ' 31358.21 30381.26 0.217
```

Your numbers will be somewhat different, due to randomness arising from
the random holdout set.  But it seems using gender in addition to age
and occupation did improve prediction somewhat, but that those two
variables do have substantial correlation with S.

