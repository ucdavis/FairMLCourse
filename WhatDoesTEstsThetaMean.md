
# What Does "T Estimates &theta;" Mean?, and Relation to the Unbalanced Data Issue

We all understand that a sample mean--the average value of X in our
sample--estimates E(X), the mean value of X in the sampled population.
But in general this is less clear.  What does "T estimates &theta;" mean?

## Notation

Say we have a sample of size n, meaning that we have n datapoints.  To
emphasize the dependence on n, write T as T<sub>n</sub>.

## Bias

Consider the case of T and &theta; being the sample mean and population
mean.  One can show that T is an *unbiased* estimate of &theta; here,
i.e.

E(T<sub>n</sub>) = &theta;

The expected value here is over all possible samples of size n from the
population.  Sometmes T<sub>n</sub> is too large, sometimes too small,
but on average is is the right value.

Or, say we have a linear model of human weight vs. height,

mean(weight | height) = &beta;<sub>0</sub> + &beta;<sub>1</sub> height

Denote our sample estimates of the &beta;<sub>i</sub>, from the usual
least-squares method, by b<sub>i</sub>.  The latter also turn out to be
unbiased,

E(b<sub>i</sub>) = &beta;<sub>i</sub>

If in addition to being unbiased, Var(T<sub>n</sub>) is small, then
T<sub>n</sub> doesn't vary much from one sample to another. Coupling
this with the fact that it is "centered" around &theta;, we have that
T<sub>n</sub> should "usually" be near &theta;--a very desirable
property.

## But unbiasedness is too much to ask for

Actually most estimators are not unbiased.  Say we have a logistic
model 

P(employed | age) = 1 / [1 + exp(-{&beta;<sub>0</sub> + &beta;<sub>1</sub> age})]

Due to nonlinearity etc., here the b<sub>i</sub>) will NOT average out
to &beta;<sub>i</sub> over all possible samples.

## Bring in asymptotics

We do, however, hope that the amount of bias is small.  We have no
usable expression for the bias in the logit case, but one can show that
for this and many other estimators 

E(T<sub>n</sub>) - &theta; = O(1/n) as n -> &infin;.

*We thus have faith that b<sub>i</sub> has reasonably small bias even
for small n.*

In a similar spirit, we say that T<sub>n</sub> is *statistically consisetent*
for &theta; if

lim<sub>n -> &infin;</sub> T<sub>n</sub> = &theta;

and then, again, consider this to signify that T<sub>n</sub> is
probably reasonable for small n too.

## The issue of unbalanced data

Many ML specialists are wary of classification problems, say with 2
classes, in which there is much more data in one class than the other.
Their main concern is:

*Almost all of our predictions of future cases will be to guess Y = the
dominant class.*

That of course is true, but on the other hand, it SHOULD be that way, if
the data is representative of the class proportions in the population.

Moreover, if say we use a logistic model, the b<sub>i</sub> will
estimate the &beta;<sub>i</sub> in the above sense.  Here is why.

### A simple example

Say first we wish to model mean weight as a linear function of height in the
above example.  There are two possibilities:

* *Random-X regression*:  We sample n random people from the population,
  so both the heights and weights in our sample data are random.

* *Fixed-X regression*:  We decide to sample people of specific heights.
  Here only the weights will be random.

Since our model conditions on height anyway, it really doesn't matter
which of above two sampling schemes are used.  *Either way, the
b<sub>i</sub> will estimate the &beta;<sub>i</sub>,* e.g. will be
statistically consistent.  (And as noted, they are even unbiased.  
But the fixed-X setting will better illustrate the issues.

In a fixed-X setting, consider two possibilities:

* We sample mostly at the shorter height levels.

* We sample mostly at the taller height levels.

*Either way, the b<sub>i</sub> will estimate the &beta;<sub>i</sub>*,
in the above sense of consistency.  Actually, we will probably get
smaller standard errors from the second approach, but either way those
standard errors will go to 0 as the sample size grows.

### Unbalanced data

Say we are interested in gender pay gap, and have a model

mean(wage | age, gender) = &beta;<sub>0</sub> + &beta;<sub>1</sub> age
+ &beta;<sub>2</sub> 1<sub>male</sub>, 

where 1<sub>male</sub> is an indicator variable for men.

Now suppose we have many more men than women, say

n<sub>men</sub> = 10 n<sub>women</sub>

and n = n<sub>men</sub> + n<sub>women</sub>.

For the same reason as above, the resulting b<sub>i</sub> will be
statistically consistent estimators of the &beta;, IN SPITE OF THE
IMBALANCE.  The imbalance has nothing to do with it.

