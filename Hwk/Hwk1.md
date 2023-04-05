
# Homework 1

## Due Wednesday, April 12, 11:59 pm

## Problem 1

### Overview

Say we wish to predict Y from a feature vector X, where X includes a
senstive variable S such as race or gender.  We wish to eliminate the
effect of S on our predictions.

One might naively think that we can achieve this goal by simply removing
S from X.  However, this typically does not work, since there may be
other variables in X that are highly correlated with S. In such a
situation, S still will have an effect on our predictions.

For example, say S is age, and one of the other variables in X is number
of children.  Though of course we cannot predict S perfectly from this
variable, the correlation between the two will be substantial, so that S
will affect our prediction of Y to some degree after all.

In this problem, you will develop an exploratory tool to assess the
problem.  Which variables are good predictors of Y but are highly
correlated with S?

### Problem statement

You will write a function with call form

takeALookAround(data,yName,sName,maxFeatureSetSize)

where **yName** and **sName** are the names of columns in the data frame
**data**.

So our feature set is given by the column names of **data**, minus
**yName** and **sName**.  The tool were investigate the impact of
using various subsets of the feature set on 

* (a) prediction accuracy for Y of this feature set 

* (b) prediction accuracy for Y of this feature set plus S (how much are 
we giving up by NOT using S?)

* (c) prediction accuracy for S of this feature set (the better the
  accuracy, the less fairness value there is in omitting S from 
  prediction model)

The return value will be a data frame with 3 columns.  The first will be
a character string consisting of the names of the given feature set.
The second will be the prediction accuracy for (a), then the ones for
(b) and (c).  

There will be one row in the d.f. for each feature set.  All possible
feature sets of size up to **maxFeatureSetSize** will be investigated.

### Details

* You are required to use [qeML](https://github.com/matloff/qeML). Stick
  to the default values.

* Use **qeLin()** for numeric Y or S, **qeLogit()** for the categorical
  case.  Have your sense this by using **is.numeric()** or **is.factor()**.
  Use the test accuracy values they return.

