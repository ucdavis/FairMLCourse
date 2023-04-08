
# The Two Central Ideas in Statistical Inference

[Prof. Norm Matloff](http://heather.cs.ucdavis.edu/matloff.html )

Contrary to the impression many students in high school AP Statistics
courses may have, statistics is a very rich. intellectually stimulating
field.  Yet, in a sense the core issues boil down to just two concepts,
bias and variance 

(**Note:  bias here is not what you may be thinking!**).

Appreciation of these ideas is important for any course, but especially
for statistics/data science courses serving as "general education."
Statistics is important to one's status as an informed consumer/citizen,
and the"graduate" of such a course should be equipped to recognize these
two central ideas whenever he/she views data.

## Intended audience 

Students of statistics, at all levels, and their instructors.

## Bias

### Not about s<sup>2</sup>

Here I am NOt referring to the first thing taught in any statistical
methods class:  To estimate a population variance &sigma;<sup>2</sup>,
we use

s<sup>2</sup> = (1/(n-1)) &Sigma;<sub>i</sub><sup>n</sup>
(X<sub>i</sub> - X<sub>bar</sub>)<sup>2</sup>

with the rather unnatural denominator n-1 rather than n. This makes
s<sup>2</sup> *unbiased*, i.e. its average over all possible samples is
exactly &sigma;<sup>2</sup>, E(s<sup>2</sup>) = &sigma;<sup>2</sup>.

### Bias in the sense of failure to use important covariates

Long ago, early in my career, I served as a consultant for a major
medical chain.  There were four hospitals of interest, and the question
was, Do they all give the same quality of care to heart attack patients?
Let's denote the quality of care by Q.

A major issue was the age A of the patients.  One of the hospitals was
located in a district that consisted disproportionately of the elderly.
Thus it would be unfair to that particular hospital to gauge quality of
care by the criterion of mean Q, say estimating E(Q) by the sample mean
Q<sub>bar</sub> at each of the four hospitals.  This kind of comparison
would be unfair, i.e.  "biased" in the casual sense of the word.

The fair criterion--i.e. "unbiased" in the casual sense--would be to
estimate say E(Q | A = 80), mean Q for 80-year-olds, and compare *these*
four values.  

This casual terminology can be reconciled with a formal statistical
formulation, though we will not pursue this here.  We simply define bias
as "not using relevant covariates."

## Variance

## The "how" part
