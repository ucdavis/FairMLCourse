
# Homework 2

## Due 

## Problem 1

### Goal: 

In recent years, there has been much criticism from politically-liberal
educators of the use of standardized tests as school admissions criteria.
Much of the discussion has involved the SAT (university), GRE (graduate
school) and the LSAT (law school), especially the SAT.

Critics of the SAT cite
[research](https://budgetmodel.wharton.upenn.edu/issues/2021/9/28/is-income-implicit-in-measures-of-student-ability) showing a correlation between a
student's SAT scores and her family's income.  The test measures family
wealth, not academic readiness, they say.

Defenders of the SAT cite
other research and the stellar performance of many East Asian or East
European children of 
[working-class
immigrants](https://www.refinery29.com/en-us/2019/03/228192/stuyvesant-high-school-black-asian-students).

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
assignment, our role will be rather different.  We will ask, can we make
use of the SAT etc. in a way that is fair, in spite of possible
connections to family income?

The central idea will be to ask, e.g. how well did this student do on
the SAT, *relative to his family income group*?   We want to convert a
raw SAT of say, 1250, which might be on the 80th percentile overall but
is in the 92nd percentile at his income level.

### Details

You will write a function with call form 

```,r
    relativeProxy(data,proxyName,catName,nQuantls,nCut=NULL)
```

where:

* **data** is a data frame or equivalent

* **proxyName** is, e.g. SAT score in the above example (proxy
for wealth)

* **catName** is, e.g. family cinome in the above example; presumed to
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
**cut()**-like function, if any.  See below.

You will then write a **predict()** function for that class.  (See
below for a review.)  The call form will be

``` r
predict(relProxObj,newXs,proxyName,catName)
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

If the original **catName** data had been categorical, then **newXs**
would be a two-column data frame

### **cut()**-like function

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

