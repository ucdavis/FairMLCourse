
# Homework 2

## Due 

# Problem 1

## Goal: 

In recent years, there has been much criticism from politically-liberal
educators of the use of standardized tests as school admissions criteria.
Much of the discussion has involved the SAT (university), GRE (graduate
school) and the LSAT (law school), especially the SAT.

Critics of the SAT cite
[research](https://budgetmodel.wharton.upenn.edu/issues/2021/9/28/is-income-implicit-in-measures-of-student-ability) showing a correlation between a
student's SAT scores and her family's income.  The test measures family
wealth, not academic readiness, they say.

On the other hand, defenders of the SAT cite other research and the
stellar performance of many East Asian or East European children of
[working-class
immigrants](https://www.refinery29.com/en-us/2019/03/228192/stuyvesant-high-school-black-asian-students),
despite poverty.

Warning: the findings of various social science research studies are
often contradictory.  For instance, in the area of immigration, with
which I have familiarity, I can usually tell whether a paper is
supportive or critical of a more expansive immigration policy simply by
seeing who the author is.

Why is that?  Typically authors on both sides of a controversial issue
make the error of, in essence, investigating unconditional correlations
instead of conditional ones.  They omit important variables from their
analyses (usually unwittingly rather than intentionally). Often even the
way they frame the research question itself is badly flawed, with
unconscious assumptions and missing key aspects.

These points will often arise in our course, but in the case of this
assignment, our role will be rather different.  We will consider a
compromise: Can we make use of the SAT etc. in a way that is fair, in
spite of possible connections to family income?

The central idea will be to ask, e.g. how well did this student do on
the SAT, *relative to his family income group*?   We want to convert a
raw SAT of say, 1250, which might be on the 80th percentile overall but
is in the 92nd percentile at his income level.  The thinking is, "This
applicant was handicapped by growing up in a low-income family, but did
quite well for that group.  Seems to be a bright person, worth
admitting.''

In an ML context, we have our training data, including an SAT column.
After replacing the SAT column by the corresponding relative SAT column,
we then do ML analysis as usual, predicting the outcome variable of
interest using the training data and kNN, RFs, SVM, NNs or whatever.

## Details

### Functions to be developed

You will write two functions, one to learn the quantiles of the training
data, and the second to determine the quantile of a new case.

The first function will have call form 

```,r
    relativeProxy(data,proxyName,catName,nQuantls,nCut=NULL)
```

where:

* **data** is a data frame or equivalent

* **proxyName** is, e.g. SAT score in the above example (proxy
for wealth)

* **catName** is, e.g. family income in the above example; presumed to
  be a categorical variable, i.e. an R factor

* **nQuantls** is the number of percentiles we'll use

* **nCut** applies to the case in which **catName** is originally a
  continuous variable; it will be tranformed to an R factor by
converting it to this many intervals, as in the R **cut()** function 

The return value will be an object of class 'relProx', an R list
**quantls** with one component for each level in the **catName** column
(after **cut()**-like operatin, if any).  Said component will consist of
the **nQuantls** of the **proxyName** column within the rows of **data**
*for that category*.

The return value will also need to record the intervals made by the
**cut()**-like function, if any (see below).  Do this by attaching an R
'attribute' to the return value.

You will then write a **predict()** function for that class.  (See
below for a review.)  The call form will be

``` r
predict(relProxObj,newCases,proxyName,catName)
```

Here, **relProxObj** is the output of **relativeProxy()**. And **newCases**
is a set of new cases, in the same format as in the original data,
to be transformed to quantiles, *for their
respective categories*, as follows:

For each row in **newCases**, its category will be used (after applying
the **cut()**-like function, if needed) to determine which element of
**relativeProxy$quantls** to inspect.  The **proxyName** element of the
new row will then be compared to these quantiles, and the quantile for
the new row will be computed and returned.

*Example:*

Again consider the SAT example.  Here we would like to predict success
in college, say college GPA.  If an applicant is predicted to do well,
we might decide to accept him/her, otherwise not admit.  Due to the
controversy over the use of the SAT, we don't use it directly.  Instead,
we replace the SAT column of our training data by *relative* quantile,
meaning where this student's SAT score stands, *relative* to his/her
income group.

Say we choose **nQuantls** to be 5, meaning that we will partition SAT
scores into 5 intervals, delineated by the 20th, 40th, 60th and 80th
percentiles (in quantile terms, 0.2, 0.4, 0.6, 0.8).

Say we also decide to partition family income into five groups.  We use a
**cut()**like function, so now everyone belongs to one of five income
groups.

So we first convert all our training data as above.  The SAT column will
be replaced by a column of relative quantiles; the value in row i will
then be this student's relative quantile of SAT for his/her income
group.  Let's name the output **z**.

We then run kNN or whatever on the new training data (only the SAT
column has changed).

Whenever we have a new case to convert, we first convert his/her SAT,
score, say **newSAT**, to its corresponding income class.  We then go to
the list component in z for that class, and caclulate the proportion of
quantiles in that class that are less than or equal to **newSAT**.  This
will be the relative value for the new case.  This and the new person's 
other data, e.g. high school GPA, will be used to predict this new
person's college GPA, using the fit returned by**qeKNN()** etc.

### **cut()**-like function

It would seem that R's **cut()** function is just what we need, but
actually there is a pesky problem here.  In finding the relative
quantile of a new case, we need to find its category, e.g. income class.
But we can't do that, because the output of **relativeProxy()** did not
contain a record containing the cut points.  But actually there could be
no such record, because **cut()** does not provide such a record; it
cuts the original data *but does not record the cut points*.

So you will need to write your own **cut()**-like function.

### predict() functions in R

Recall that in R we have the notion of a *generic* function, such as
**print()**, **plot()** and **summary()**.  Take the latter, for
example.

Say I am unfamiliar with a package, but try out an example, assigning the
result to say **z**.  Suppose the latter is of class 'abc'.  Then
I can then call **summary(z)**, and as long as the author of the package
has written a summary function for objects of that class, a nice summary
will be printed out.

But that work won't actually be done by the **summary()** function
itself.  Instead, the call **summary(z)** will be *dispatched* to
**summary.abc(z)**.

Most R functions that fit some kind of model have paired **predict()**
functions.  For instance, the return value of the basic linear model
function **lm()** has a companion function, **predict.lm()**.

Here is an example with the built-in dataset **mtcars**:

``` r
 head(mtcars)
                   mpg cyl disp  hp drat    wt  qsec vs am gear carb
Mazda RX4         21.0   6  160 110 3.90 2.620 16.46  0  1    4    4
Mazda RX4 Wag     21.0   6  160 110 3.90 2.875 17.02  0  1    4    4
Datsun 710        22.8   4  108  93 3.85 2.320 18.61  1  1    4    1
Hornet 4 Drive    21.4   6  258 110 3.08 3.215 19.44  1  0    3    1
Hornet Sportabout 18.7   8  360 175 3.15 3.440 17.02  0  0    3    2
Valiant           18.1   6  225 105 2.76 3.460 20.22  1  0    3    1
> z <- lm(mpg ~ .,data=mtcars)  # fit model to predict mpg from the rest
> class(z)
[1] "lm"
> newx <- mtcars[1,-1]  # example: car like Mazda RX4 but with hp = 135
> newx$hp <- 135
> predict(z,newx)  # predict mpg for such a car
Mazda RX4 
 22.06245 
```

Note again that **predict.lm()** is what is actually called.

### Empirical study

You will try this method (at least) on the **law.school.admissions**
dataset in our collection.  Use **qeKNN()** as the ML method, with the
default arguments.  Use only the variables **fam_inc**, **lsat**,
**ugpa**, **cluster** and **bar**, with that last one being the outcome
("Y") variable.  

You will explore whether the relative-quantile concept is worthwhile,
computing:

* utility and fairness if the LSAT is used

* utility and fairness if relative-LSAT is used, with income as the "cat"
  variable

* utility and fairness if neither is used

Note that you will never use income directly, i.e. the income column
will not be fed into **qeKNN()**.

Criteria:

* Measure utility by "testAcc".

* Measure fairness by the Kendall correlation between income and predicted Y.

Of course, use **replicMeans()**.

### BEFORE YOU START

Before starting work on this assignment, make absolutely sure you fully
understand the fairness goals and how the relative-quantiles notion fits
into them, as well as how the design of the empirical study fits into
them. 

The better you understand these things beforehand, the easier your
actual coding will be.  In terms of coding, it's not difficult. 

# Problem 2

Say we are predicting some variable of interest Y, from a vector X that
includes both a sensitive variable S and a correlate C of S.  (So C is a
proxy for S.)

Say we exclude S but still would like to include C.  There are various
ways to do the latter, some of which we will explore later in our
class.  Of course, any such method is a compromise, in between excluding
C, thus foregoing its possible predictive power, and fully including C,
thus causing a fairness issue.

In this problem, you will investigate a very simple approach:  Directly
reduce the weight of C in our prediction algorithm.  The **qeKNN**
function can do this via its **expandVars** and **expandVals** optional
arguments.  Here are the details:

* **expandVars** is an R character vector, consisting of names of the
  columns we wish to deweight

* **expandVals** is a numeric vector of deweighting values

Say our data 'd' has columns named 'y', 'u', 'v' and 'w'.  The call

```,r
qeKNN(d,'y',expandVars=c('u','w'),expandVals=c(0.7,0.2)
```

would change the distance computation of near neighbors.  The 'u' column
would be shrunken to 0.7 its original size, with a 0.2 factor applied to
'w'.  This should be used with **scaleX = TRUE** (the shrinking is done
after the scaling).

Try ths on the **pef** dataset that is included with **qeML**.  Take Y,
S and C to be **wageinc**, **sex** and **occ**, respectively.  So, you
will exclude S altogether, but use C in a limited manner.

Try many values of the deweighting factor D, and plot the resulting
values of fairness and utility against D.  Use the same criteria for
fairness and utility as in Problem 1.

# General Note

I like to tell my research students, "All chemistry experiments work,"
meaning that one might set up an experiment to investigate some theory,
only to find the theory is unsupported.  Such negative results might be
disappointing, but they do advance science; every finding is worthy.

In the problems in this assignment, don't count on dramatic outcomes.
Whatever comes out in the end is of interest.

