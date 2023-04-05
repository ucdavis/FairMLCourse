
# Homework 1

## Due Wednesday, April 12, 11:59 pm

## Problem 1

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

In this problem, you will develop an exploratory tool
