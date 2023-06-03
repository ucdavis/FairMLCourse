
# 10,000-Foot Level View of the Scutari Paper

The [fair ML paper by Scutari *et
al*](ihttps://arxiv.org/pdf/2105.13817.pdf) is extremely heavy in
abstruse linear algebra.  Here we distill it (and the previous work by
Komiyama *et al*) down to a few main points.

Notation:

Y:  outcome data, what we want to predict

X:  matrix of feature data

S:  matrix of sensitive data

First, they fit a linear model to predict X from S

X = B'S + U

U is the matrix of prediction errors, the *residuals*.  

Here B is like the &beta; vector in a usual linear model, but now is a
matrix, one column for each feature in X.

Here are the main points:

* This may seem odd--aren't we trying to use X to predict something,
  rather than now having X itself predicted by something else?

* However, the point is to decompose X into a sum of a sensitive
  component B'S and a nonsensitive one U.  

* One can show that these two components are uncorrelated, a very
  desirable property for a decomposition.  It is not quite the same as
saying the two components are independent, but close.

* We will still use S, but in a way in which we can limit its impact.

B is a population quantity, and its estimate after fitting to the data
is denoted B<sub>hat</sub>; the resulting residuals matrix is then 
denoted by U<sub>hat</sub>.

We then fit a linear model for predicting Y from U<sub>hat</sub> and S,

Y = S &alpha; + U<sub>hat</sub> &beta; + &epsilon;

but with a ridge regression-like constraint on the size of &alpha;.
This gives us our desired Fairness-Utility Tradeoff:

* Smaller &alpha; gives us more Fairness.

* Large &alpha; gives us more Utility.


