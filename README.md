
# ECS 189G, Spring 2023: 

# A Course on (Social) Fairness of Machine Learning Algorithms

lecture: 1:40-3 pm TR; 
discussion: 4:10-5 pm R; 
4 units <br>
Norm Matloff, Dept. of Computer Science ([my bio)](http://heather.cs.ucdavis.edu/matloff.html)

## Overview

Are machine learning (ML) algorithms biased against minorities and women?

* A 2016
[**Pro Publica** article](https://www.propublica.org/article/machine-bias-risk-assessments-in-criminal-sentencing) investigated COMPAS, an ML algorithm designed to predict recidivism by
those convicted of crimes.  The article found the tool to be racially biased,
of major concern since it was being used by judges as an aid in
sentencing convicts. 

* Actually, racial, gender and other biases in ML are commonplace. 

* What tools have been developed to detect and remedy bias?

## Prerequisites

* Students both from *within* and from *outside* computer science are
encouraged to enroll.

* Since students will work in groups, strengths of some group members
  may complement those of others in the group.

* However, everyone is assumed to have some minimal background in:

    - Coding:  Loops, functions, if-else.  We will use R; see [my quick
      tutorial](https://github.com/matloff/fasteR).
    
    - Statistics:  Bayes Rule for probabilities; confidence intervals.  Some
      exposure to linear regression models would be helpful.

* `A firm prereq is a common sense`understanding of proportions, e.g. difference between
  proportion of x among y vs. proportion of y among x.  Amazingly, many
  lack this; E.g. many
  [serious conceptual errors](https://twitter.com/jsm2334/status/1462573183970824201) have been made regarding Covid-19.

* Previous background in ML is not required. An [overview](https://github.com/matloff/qeML/blob/master/vignettes/mloverview.md) will be covered for those not having this background. If you have had an ML course, that is fine, but I guarantee that you will learn a lot of new things concerning its practical application.

<h2>Topics/Readings</h2>

We will begin with the *Pro Publica* investigation:

* [article](https://www.propublica.org/article/machine-bias-risk-assessments-in-criminal-sentencing)

* [technical supplement](https://www.propublica.org/article/how-we-analyzed-the-compas-recidivism-algorithm)

* [response by researchers](https://www.propublica.org/article/bias-in-criminal-risk-scores-is-mathematically-inevitable-researchers-say)

These articles will contain various technical methods and concepts, such as *logistic
model* and *predictive parity*.  We will explain these terms as we reach
them, but also treat all the above COMPAS sources as motivating examples
for the more general material that follows.  That will be taken from
sources such as the [online book](https://fairmlbook.org/) by Barocas
*et al*, the [notes by Fraenkel](https://afraenkel.github.io/fairness-book/intro.html), and misc. papers.

## Grading 

Tentative breakdown:

* Quizzes (6-7) (individual): 30%

* Written and data analysis assignments (group): 30%

* Presentation on a special topic (group): 20%

* Term project (group): 20%

So, most graded work will be done on a group basis.  Choose your own
group if you know people in the class, but otherwise the TA will assign.

