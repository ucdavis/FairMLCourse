
# ECS 189G Blog

**Spring 2023**

**June 6, 0940:**

On course grades:

* As noted in a previous blog post, I will delete the lowest letter grade among your Hwk 1, 2 and 3 results.
* I had three regrade requests for Hwk 1. Of those, two resulted in a substantially higher grade, while the third resulted in no change. I can still do regrades for Hwk 1 if anyone wishes to do so, though as I said last night here, most people had much better grades on Hwk 2/3 than on Hwk 1.
* The Term Project counts as "Hwk 4." Thus your course grade will be based on your higher two Hwk 1/2/3 grades and the Term Project, weighted equally.
* As noted many times, a good Term Project can have far more impact on your course grade than the above formula yields. I gave a typical Term Project bonus scheme in [our course Procedural Information document](https://github.com/matloff/nmGeneralCourseInfo/blob/master/RulesAndProcedures.md#term-project) at the beginning of the quarter. As you can see, a good Project can have a MAJOR impact on your course grade.
* In an advanced upper-division course like this, my course grade distribution is typically something like half A's and half B's.

**June 5, 2310:**

You may be exhausted at the end of the quarter/year, and can hardly think of the future, but...

If you are not graduating and don't have a summer internship etc., I have a project you may be interested in. This would be development of an R package, **dsld**, Data Science Looks at Discrimination. I'm thinking maybe 1-3 189G (or other) students would work on it, with Author status, which I will also have. We'll put it on CRAN, and publicize it and probably submit a paper to a journal. I do think it will attract a considerable amount of attention.

Some main points:

* The package will cover both general discrimination aspects and fair ML aspects. E.g. a gender pay gap analysis, which as I've said is NOT in the realm of our course, could be analyzed with **dsld** tools.

* The package will consist of wrappers to some related packages, e.g. **fairml** and [my **cdparcoord** package](https://arxiv.org/pdf/1709.00665.pdf).

* The package will contain new methods, such as the ones you've developed in Homework in our course.

**June 5, 2300:**

Very sorry I've not gotten you your Homework 2 grades back yet. Actually, I have both Hwk 2 and Hwk 3 grades done, just need to record them electronically then run my script to send them out. The grades in Hwk 2 and 3 were much better than those in Hwk 1.

**June 5, 2120:**

I've decided to push back the due dates for the Term Projects in both my classes to June 13.  I shouldn't extend it any further, so as to not affect your final exams much, and of course I need to read and grade all those Project papers before the campus grading deadline. 

**June 3, 0815:**

I've distilled the Scutari paper that we covered this Thursday into
[a few main points](https://github.com/ucdavis/FairMLCourse/blob/main/Scutari.md).

**June 1, 2145:**

I did some tweaking of the presentation in the document on statistical consistency and unbalanced data.

**June 1, 2025:**

I was asked today whether regrades will be offered for Hwks 2 and 3.  Here is what I decided:

* Regrades will be held for Hwk 1 only, on the grounds that the entire idea of interactive grading was new to you at the time.

* In determining course grades, I will discard the lowest of your three grades.

BTW, the Term Project will be treated as "Hwk 4," but with weight at least that of the two (remaining) Hwk assignments, as you should be putting at least that much effort into the Project.  I say "at least," because as I've said very good Projects will have an outsized impact on your course grade, much beyond what the formula would give you.


**June 1, 1015:**

I wrote up a [detailed explanation](https://github.com/ucdavis/FairMLCourse/blob/main/WhatDoesTEstsThetaMean.md) of the unbalanced data issue.

**May 30, 2015:**

To expand on what I said today about the suitability of datasets for our Term Project, I distinguished between a "fair ML" dataset and a "statistics" one. Here is a side-by-side comparison:

<table border="1">

   <tr>
   <th>statistics</th>
   <th>fair ML</th>
   </tr>

   <tr>
   <td>estimate an effect</td>
   <td>predict an outcome</td>
   </tr>

   <tr>
   <td>harm comes from society</td>
   <td>harm comes from an algorithm</td>
   </tr>

   <tr>
   <td>adjust for covariates</td>
   <td>use proxies but limit their impact</td>
   </tr>

</table>

In our pef dataset, for instance, it would be interesting to investigate the nature of a gender pay gap--but that is a statistics problem, not one in fair ML.

A quick test:  Does the method you developed in Problem 2, Homework 2, have any relevance to the dataset under consideration?  If not, then the dataset probably isn't suitable for our Term Project.

I also mentioned that you can probably force an unsuitable dataset to be suitable, by conjuring up some scenario.  In the pef data, say, you might think of a scenario in which we want to give some prize to random people based on their occupation.  If our prediction includes gender as a feature, that probably would be unfair, as women in the pef dataset are more concentrated in some occupations.  OK, now you have fair ML setting, but whatever paper you cite that uses the pef data, it almost certainly won't use that scenario.  You could still make a comparison, but it would not be as interesting.  

So, again, if you wish to use a "statistics dataset," I will accept it, but you will be handicapping yourself as to what you can accomplish with it.

Finally, note that often fair ML papers will use "statistics" datasets. It's very common, because it's convenient. But really, they shouldn't do so.


**May 30, 1520:**

Please make sure to sign up with an [interactive grading slot](https://docs.google.com/spreadsheets/d/10npR9_39i4MXnbUHZ9bDmNFmh9NBV9omfIWsyT9QZyk/edit?usp=sharing) soon.

**May 29, 0950:**

Very sorry for the delay in getting you your homework grades.  Our switching from quizzes to increased emphasis on homework early in the quarter was a good decision, but it does have its costs.  I should be getting you your Homework 1 grades sometime today.  

Please do NOT ask me the basis for the grade I've assigned you.  As we discussed in making the decision to switch away from quizzes, one consequence is that the grading becomes much more subjective.  This cannot be "relitigated."

However, as I wrote in my blog post of April 28, 0930, if you believe your grade was inaccurate, I will be happy to do a regrade with you.  This will consist of asking you questions about our coursework, as in our interactive grading.

Our course material is cumulative, and thus so would be the content of the regrade questions, but of course the main emphasis would be on more recent material.

If your regrade answers are poor, I will NOT reduce your original grade.  Thus "there is no harm in trying."  However, if you did poorly in the original grading, it was likely due to a basic lack of knowledge of the course material.  For example, a few students could not give even a basic response to my open-ended question, "Tell me about SVM," and unfortunately it is likely that they would do equally poorly in questions I put to them in a regrade.

The course material has been difficult, but very important, I believe.  You've learned at least some things that you will carry with you after the course ends, concerning the basic issues of machine learning and how the fairness issue interacts with them.  That's as much as any course instructor can hope for, and I hope your course grades will reflect that.  As I've mentioned, a good term project can greatly compensate for lower homework grades.


**May 22, 2145:**

In order to get something out of the class (and get a good grade), it's absolutely imperative to understand the big picture, not just coding.  Here is the sequence of thought you should go through in Hwk 3.

* In formulating a sentence, a judge is dealing with probabilities, e.g.
probability that the defendant will recidivate.

* The COMPAS analysis article states that age is a big factor in that
probability.  (Younger defendants are especially risky.)

* So, the question is, how does the probability of recidivism depend on
a covariate, say age?

* But is exactly what ML is for, in the case of dichotomous Y: Estimate
the probability of something, as a function of something else.  An ML function finds mean Y for given X, and in the dichotomous case, that reduces to P(Y = 1 | X).

* So, our code will run the user's specified qeML function to find a
probability for some dichotomous Y (e.g. recidivism) against some covariate (e.g. age), and plot the relation. 



**May 22, 2110:**

The function **evalr()** should be in **qeML**. Yuyi lectured on it (and on **sprintf()**) on April 6.

Example:

```,r
> sqrt(10)
[1] 3.162278
> 'sqrt(10)'
[1] "sqrt(10)"
> evalr('sqrt(10)')
[1] 3.162278
```

The function "magically" allowed us to execute an expression that is contained in a character string.  See Yuyi's lecture for an example in which this is useful.

**May 22, 1925:**

I've pushed back the due date for Hwk 3 to Thursday. Please note, though, that you should already be starting on your Term Project.

Note again that in the Term Project **interpretation will be of the utmost importance**. You will definitely will be doing coding, but that is not the main focus.

**May 19, 1415:**

Our [Term Project](https://github.com/ucdavis/FairMLCourse/blob/main/Hwk/TermProject.md) is now ready!

**May 19, 0955:**

You may find the following code useful for saving a currently-displayed R graphic image to disk:

``` r
# image type is implied by the file name suffix, e.g. '.jpg'; other choices are '.pdf' and '.png'
pr2file <- function (filename)
{
    origdev <- dev.cur()
    parts <- strsplit(filename,".",fixed=TRUE)
    nparts <- length(parts[[1]])
    suff <- parts[[1]][nparts]
    if (suff == "pdf") {
        pdf(filename)
    }
    else if (suff == "png") {
        png(filename,bg='white')
    }
    else jpeg(filename)
    devnum <- dev.cur()
    dev.set(origdev)
    dev.copy(which = devnum)
    dev.set(devnum)
    dev.off()
    dev.set(origdev)
}
```

**May 16, 1810:**

I forgot upload the image file for the Hwk 3 specs.  It's there now.

**May 17, 0900:**

Either today or tomorrow, I will be posting the specs for your Term
Project.  Note the following:

* Due June 11.  (Think of it as "Problem 2" of Hwk 3.)
* You will be analyzing a dataset of your choice (pre-approved by me),
    using tools and perspectives from our course.
* A professional-quality written report, prepared in LaTeX, will be required.
* Though you'll write some supporting code, this is not a coding
    project.  It is *analysis*, with an emphasis on interpretation.
* Every lecture from here onward will have as one of its goal preparing
    you for the Project--what to focus on, things to watch out for, etc.

**May 14, 2135:**

As I make your grades for Hwk 1, I will need **a frank self-assessment**
of the degree to which you participated in that work.

**I WILL NEED THIS FROM YOU BY WEDNESDAY, MAY 17 BY 11:59 PM.**

Please notify Yuyi that you have sent me your self-assessment, so that 
she can keep track of who is missing.  You can do so by Cc-ing her on 
the message you send to me if you feel comfortable doing so; otherwise, 
just send her a brief separate note that you've submitted your 
self-assessment to me.

**May 13, 1505:**

Some news items:

* I will get Hwk 3 posted later today.
* Hwk 3 will be the last. After that, you'll have the term project, likely due date June 12.
* The term project will be quite open-ended, in terms of dataset, analysis and code. Re the latter,
    you may have to do some digging.
* For the latter and other reasons, consider the following code to find the correlation between S and Yhat:

```,r
# prep data
load('law.school.admissions.rda')
lsa <- law.school.admissions
names(lsa)
lsa <- lsa[c(4,5,6,11)]

# e.g. logit model
logitOut <- qeLogit(lsa,'bar',yesYVal='TRUE')
# what's in that object?
str(logitOut)  
# ah, holdoutPreds is one component; what's in THAT?
str(logitOut$holdoutPreds)
# those are the actual predictions for the holdout; let's take a look
table(logitOut$holdoutPreds$predClasses)  # 20 and 980; random, could come out 0 and 1000
# better to use the probabilities of bar passage anyway
cor(lsa$lsat[logitOut$holdIdxs],logitOut$holdoutPreds$probs)  # about 0.84
```

Coments:

* R's **str()** function is a key utility. (I think I mentioned this in class, not sure.) You can tell at a glance what's inside an object. This is major, especially for packages with skimpy documentation. (Yes, that includes **qeML**; I'm still putting the finishing touches on it.)
* Due to the all-or-nothing nature of predicted classes, it's more informative to look at the probabiliities of "Yes." This is especially true in apps where "No" is rare, such as here, but also true in general.

**May 12, 1615:**

BTW, the longer I ramble on about some topic in class, the more likely it is that I'll ask you about it during
interactive grading. :-) I've put a smiley sign here, because it *is* funny, but it's also true.

**May 12, 1610:**

Every **qeML** function returns an R list, with many components, one of 
which is **holdIdxs**.  This is a vector giving the row numbers in the full
data set of the holdout cases.  You can get Yhat and S values from this.

**May 12, 0010:**

Now done with interactive grading for Hwk 1.  I have to look at Yuyi's numerical scores on running your code, and her notes on the interactive sessions, before setting the Hwk 1 grades, but I have some comments now.

* With a couple of exceptions, most of you did well on the questions 
about your code.

* There were a number of students who did quite poorly on the questions 
on the general course material, though.  I think the questions were straightforward, e.g. "Tell me about SVM" and "What is the learning rate?"  In a number of cases, the student had either no answer or offered an irrelevant comment.

This is a very serious issue.  In deciding not to have quizzes, the interactive grading was supposed to take on this aspect of grading.  The questions were very basic, and not deep.

If you end up with a low grade (C, D or F) on your answers on the general course material, I urge you to do a regrade.  As mentioned before, it will consist of more questions of the same type.  I am 100% sure you can do well. 

I also saw a number of unfamiliar faces today. :-)  I skipped some classes back when I was a student myself, but really, it's important to come to class. :-)




**May 11, 1925:**

A correlation-based measure of fairness should be based on how much our
"forbidden" variable S affects our prediction Yhat.  We hope the impact
is small.

In Problem 2, Yhat should be our predicted wage income, and S should be
gender.

Problem 1 is unusual, and more subtle, because instead of outright
eliminating S, we try to use it in a fairer way.  Yhat is our prediction
regarding passing the bar, and S is family income.

**May 10, 1820:**

One of my goals in Hwk 2 is to familiarize you with R class structures.
There is the basic class structure S3, then S4, reference clases and so
on.  R is both a functional and an OOP language, and this illustrates
the latter point.  Yesterday I gave a link to my R tutorial on this, but
here is a little more:

S3 is the basic structure, used in most of the R functions, both in R
itself and in contributed R packages.  It couldn't be simpler:  It
consists of an R list, then "annointed" with a class name.

As mentioned, a cool feature of all this is the notion of *generic*
functions:  **predict()**, **print()**, **plot()**, **summary()** etc.
Say I try load some new package, knowing very little about it, then try
one of their examples, and the call, say, **plot()** on the result.  As
long as the authors wrote an implementation, this will give me a plot,
again without my knowing much.

Recall that the term used is *dispatch*.  We say that for example 
**plot()**, applied to an object of class 'q' say, will be "dispatched" to
**plot.q()**.
                                                                   
Usually the components of an S3 object have names, but they need not.
For instance:   

```,r
> x <- list(5,12,13,'hyp')
> x
[[1]]
[1] 5

[[2]]
[1] 12

[[3]]
[1] 13

[[4]]
[1] "hyp"

> class(x) <- 'weird'
> summary.weird <- function(weirdObject) weirdObject[[1]]
> summary(x)
```
Of course, it's nicer to have component names, as it is clearer, and facilitates adding
other components later. 

Note the user him/herself can add them to any S3 object! 

```,r
> x$newThing <- 168
> x
[[1]]
[1] 5

[[2]]
[1] 12

[[3]]
[1] 13

[[4]]
[1] "hyp"

$newThing
[1] 168

attr(,"class")
[1] "weird"
```

Some may feel that this is "unsafe," and for them there are the "safer" S4 and so on.

**May 9, 2250:**

Concerning Problem 2:  Recall that originally I had specified the **occ** variable for deweighting. 
That would have been a single number.  But then I remembered that **qeKNN()** does not handle 
deweighting for R factors, so I said you'll have to preprocess the data, replacing the **occ** column 
by 5 dummy-variable columns.  Let's refer to the new data frame as *pef1*.

But, still use the same deweighting factor for each of the dummies.

So, your code will do

```
for (d in your chosen set of d values)
   call qeKNN() on pef1 for that d
   record the utility for that fit
   record the fairness for that fit

graph utility against d
graph fairness against d
```

Concerning Problem 1:

[S3 classes in R](https://github.com/matloff/fasteR#s3) are quite
simple:  Create an R list, then call **class()** to set the class type.

E.g.

``` r
w <- list(a = 3, b = 8, u = 'xyz')
class(w) <- 'q'
```

This creates an object of class 'u', and assigns it to **w**.


**May 8, 1955:**

I've now added an outline to Problem 1. I believe that will clear things up for you. Also, I've expanded 
the paragraph in the Goal section that begins with "The central idea is..."

I've pushed back the due date by one day. I don't think more is needed, with the outline added.
The code itself is not hard.

Please note that you are always welcome to ask me questions in e-mail.

**May 8, 1900:**

In Problem 2 of the Homework, it says to take C to be **occ**.  But the
**expand()** arguments in **qeKNN()** are only for numeric arguments.
Thus you will need to use the dataset **pef1** instead of **pef**, where
the former is identical to the latter except that the **occ** column in
the latter has been replaced by 5 columns of dummy variables.  Then use
will apply the **expand()** arguments to the 5 dummies.

Use **regtools::factorsToDummies()** to create the dummies, as **qeML()** 
does.  To familiarize yourself with that function, I suggest that you
first try it on the first two rows of **pef**.

Make absolutely sure that you understand 

* why we have only 5 dummies, not 6, and

* why simply call **as.numeric()** the **occ** column would be nonsense

**May 3, 2330:**

In Hwk 1, some groups did the Extra Credit problem involving finding a dataset that exhibits Simpson's Paradox with a continuous variable, **but did not give me a URL** for obtaining the data. If you had such an omission, please let me know the URL.

**May 3, 2155:**

The second (and last) problem in Hwk 2 is now ready.
>>>>>>> e74a319b9e62b01da52e1c3114c4f6ee71c8ed9f

**May 2, 1745:**

Since we will now be holding some interactive grading sessions Thursday 3-4, I am changing the venue:  Now all sesions, even those during the discussion section, will be held in my office, Kemper 3053.

By the way, if any group scheduled for this Thursday wishes to postpone until next week, please let me know.

**May 1, 2045:**

Problem 1 of Hwk 2 is now on our GitHub repo.

**PLEASE, IF AT ALL POSSIBLE, READ IT BEFORE CLASS TOMORROW.**  

We will discuss it in class tomorrow, and it's best if you are prepared
to understand my comments.

The specs are very long, and though in the end you'll see that it was
actually simple, at first you'll find it challenging just to understand
the goals.

**May 1, 2045:**

In interactive grading, each group will be asked different questions, but
there may be some overlap.  Do not divulge to other groups the questions
asked of you.

**April 28, 0930:**

Directions for interactive grading. 

* You will come in to the grading session as a group. 

* Each person will be asked two to four questions. 

* Some questions will be about your homework submission, such as "What
  does this line of code do?" and "What would change if the prompt had
been such and such?"

*  Other questions will be about the course itself, such as
"Explain how Random Forests work" and "Discuss overfitting in the
context of k-Nearest Neighbors."

* Some questions may be of a followup nature, say of the form,
  "Following up on what your teammate X said just now, what about such
and such?"

* Sessions scheduled during the discussion section will be held in the
  classroom.  While you are waiting your turn, please sit quietly at the
back of the room, so as not to distract the group being graded.

* All other sessions will be done in my office, 3053 Kemper. Please stay
  in the hallway while you're waiting for your group to be graded. 

* You are welcome to bring in any materials you want, including your
homework, our readings and so on.

* Regrades:  If you feel that your grade was inaccurate, you are
  welcome to request a regrade.  Note that the regrade will not consist
of re-evaluating the quality of your submitted work and performance in
interactive grading.  Instead, it will consist of my asking you further
questions of the type described above; questions about the course
material will predominate here.

**April 27, 1850:**

[Here](https://towardsdatascience.com/lasso-and-ridge-regression-an-intuitive-comparison-3ee415487d18) 

![alt text](https://miro.medium.com/v2/resize:fit:640/format:webp/1*Sxb7OPYTp5FAkQ72YrXrIA.png)

is a better drawing than what I drew on the board today. Here is how I explained it.
* Say we are estimating the population mean of a p-component vector. If the vector is just height, then p = 1; for height and weight, p = 2; for height, weight and age, p = 3, etc.
* *James-Stein theory* says that for p = 1 or 2,the straightforward approach, i.e. using as our estimate the vector of the p sample means, is optimal (min mean squared error in estimating the population mean vector). But if p is 3 or more,the optimal strategy is to multiply that sample mean vector by a number in (0,1), say 0.9. The theory gives a formula for the actual multiplicative constant, but the details are not important for us.
* So, some people thought, "If it's good to shrink our estimate of an unconditional mean, then maybe we should do the same for estimating regression functions, which are conditional means."
* In the linear regression setting, where we are estimating a population coefficients vector &beta;, let b<sub>OLS</sub> denote the Ordinary Least Squares (OLS) estimate of &beta;. 
* By centering Y and all the X features, i.e. subtracting their means, they all have mean 0, which one can show implies that we can assume b<sub>0</sub> = 0. And here we view the case p = 2.
* So the OLS estimate minimizes SS = &Sigma;<sub>i</sub> [Y<sub>i</sub> - (b<sub>1 X<sub>1i</sub></sub> + b<sub>2</sub> X<sub>2i</sub>)]<sup>2</sup>. It's important to note that our b<sub>LASSO</sub> will NOT achieve such a small value of SS; b<sub>OLS</sub> is the unique minimizer.

The idea is then to somehow shrink b<sub>OLS</sub>. There are various ways of doing this, including the *LASSO* and *ridge regression*. Let's consider the LASSO first. Denote the b that we finally obtain via LASSO by b<sub>LASSO</sub>.
* We will achieve shrinking by limiting the size of b.  In the LASSO case, we constrain b so that |b<sub>1</sub>| + |b<sub>2</sub>| + ... + |b<sub>p</sub>| &leq; d. 
* Note that d is a hyperparameter. For a very large d, we have no constraint, and b<sub>LASSO</sub> = b<sub>OLS</sub>. But the smaller the value of d, the more shrinkage we are imposing.
* Now, the picture on the left side shows the case p = 2. It has corners at (d,0), (0,d), (-d,0) and (0,-d). The diamond is the region |b<sub>1</sub>| + |b<sub>2</sub>| &leq; d. (The picture labels the axes &beta; but it should be b.)  
* So we require that b<sub>LASSO</sub> be somewhere within the diamond, including on the edges.
* Now, look at those ellipses.  We have a different ellipse for each potential value of SS.  For a given such value, the ellipse is the locus of points b that produce that value of SS. So the smaller ellipses are preferable.
* As noted, b<sub>OLS</sub> is the unique minimizer of SS, so its "ellipse" has degenerated to a single point.
* Well, where does all that leave us, in choosing b? On the one hand, we want a b that lies on a small ellipse, but on the other hand, we are required to choose a b that lies within the diamond.
* So, we need an ellipse that *just barely touches* the diamond, as in the picture.
* Now, here is the key point.  No matter what the orientation of the ellipses is--pointing upward, downward, rather flat or whatever--**the spot of barely touching will almost certainly be one of the four corners of the diamond**
* And each of the corners has either b<sub>1</sub> = 0 or b<sub>2</sub> = 0. This means we're not using one of
 the features, i.e. we've done *feature selection* and *dimension reduction*. This is appealing, to try to prevent overfitting.

All right, then what about the right-hand picture?

* Here the constraint is b<sub>1</sub><sup>2</sup> + b<sub>2</sub><sup>2</sup> &leq; d. 
* No corners here. The b we choose--again, smallest ellipse subject to being within the circle--will almost certainly have neither b<sub>1</sub> = 0 nor b<sub>2</sub> = 0, thus no dimension reduction.
* We still do attain shrinkage, and ridge is much easier to compute, so it is still popular.

For either LASSO or ridge, how do we choose the hyperparameter? As usual, one way is to do cross-validation. We try various values of d, recording the test set accuracy that each gives us in the holdout set, choosing whatever d gives us the smallest value.

                          


**April 27, 1605:**

Some remarks on IDEs:

An IDE should make one more productive, not less.

In general, I am not a fan of IDEs.  I've tried many, many of them, in
languages C/C++, Python and R, and have always found that I am much more
productive by just using the Vim text editor--WITH my [homegrown Vim macros](https://heather.cs.ucdavis.edu/Vimrcs/).

In R, for instance, if I want to write a 'for' loop, I just type 'frl', and Vim automatically expands it to

```,r
for (i in 1:n) {
}
```
To create a matrix, I type 'nmm', and Vim give me

```,r
matrix(nrow=,ncol=)
```

Small things, yes, but it saves me time, allowing me to focus better on the coding itself, and avoids future arthritis in my fingers. :-)

Of course, Vim automatically supplies me (in base form, i.e. not needing my own macros) with syntax highlighting, code completion etc., which the IDEs do. But the IDEs don't give me the ability to write macros.

Most of my macros are 1- or 2-liners, very easy to devise, but Vim actually allows you to write more elaborate macros in Python. Note, I didn't mean one's usage of Vim to edit Python; instead I'm talking about using Python to extend Vim, for usage in editing files in any language. Indeed,[Vim plugins](https://vimawesome.com/) tend to be written in Python.

So the big advantage of Vim is that it allows me to customize my work environment, whether it be for my work in R, Python or LaTeX.

Obviously this is a matter of keen personal preference. Most professional deelopers do use an IDE, but many use Vim. The latter is not just something thrown into a beginning programming class as a "historical example."

**April 27, 1555:**

Please note that when a homework problem states something like "Use function X, Package Y etc.", then it is a requirement unless it explicitly says it is just a suggestion.

**April 25, 2245:**

(Just for fun.)

A student mentioned in class today that he finds it difficult to code without an IDE, i.e. just using a text editor such as Vim. So I asked ChatGPT, "What are the advantages of using an IDE for coding?" It gave a numbered list, the first of which was,

"Increased productivity: IDEs provide a range of tools and features that make coding faster and easier. For example, code completion and syntax highlighting can speed up coding and reduce errors." That's ALL? Code completion and syntax highlighting? Vim gives me that, AND allows me to write my own macros; e.g. I type 'fnn' and it expands to the skeleton of a function; 'frl' gies me a *for* loop etc.

Reason 3 was very interesting, in light of my comments today: "IDEs often have built-in debugging tools." Yes! But do people use them? Most students don't, thus dooming themselves to longer debugging sessions.

Over the years, I've tried many IDEs, both general-purpose and language-specific, and always find that they just get in my way.

**April 25, 1800(?):**

It was decided in class today to choose the "no quizzes" option.

**April 25, 0925:**

Please submit your Homework according to specs, in a **.tar** package
(in CS, people tend to use that, not **.zip**).

If you have trouble, then of course go ahead with **.zip**.  But keep in
mind that you will be making extra work for Yuyi, who will have to unzip
your submission and then create a **.tar** file for you.  (The grading
script assumes **.tar**.)

Here is a demonstration of the Unix-family (Mac, Linux) **tar** command:

```
matloff@COE-CS-pc22:~$ tar cf test.tar onAttach.R qeCmp.R 
matloff@COE-CS-pc22:~$ tar tf test.tar
onAttach.R
qeCmp.R
matloff@COE-CS-pc22:~$ cd tmp
matloff@COE-CS-pc22:~/tmp$ ls
matloff@COE-CS-pc22:~/tmp$ tar xf ../test.tar
matloff@COE-CS-pc22:~/tmp$ ls
onAttach.R  qeCmp.R
```

The 'cf' stands for "create file," and 'xf' means "extract files."
Somehow 'tf' is for "list files."

The files **onAttach.R** and **qeCmp.R** were in my current directory. I packed them into a new file (could have been existing) **test.tar**. I then checked it via 'tf'. To really test, I then went to a new directory and ran 'xf'; sure enough, the files did indeed then get created in that directory, copies of the original.

Like any Unix command, you can obtain online help for **tar** by typing 'man tar'.


**April 24, 2000:**

Tomorrow we will discuss whether to continue to follow the original
course plan, i.e. continue to have Quizzes, or drop the Quizzes in favor
of expanded weight on the Homework.  During this discussion, I hope that
everyone who has comments will speak up.  I hope you know me well enough
to have the impression that I am very open.

If the students' views are mostly on one particular choice, say not having
Quizzes, we will so decide.  If the feeling is pretty much split, then I
will need to make the decision myself.

Regardless of our decision, we will not have a Quiz this week.  Instead,
Yuyi will lecture on the material in
[the linear algebra tutorial](https://github.com/matloff/fastLinearAlgebra).
For most or all of you, this will be a review, but it will start from
scratch.  Linear algebra will arise in some of the Fair ML methods we
use in our class.

BTW, I anticipate having a total of 3 or 4 Homework assignments,
including the one due today.  Note too the Term Project, which we will
have as planned, independent of what we do regarding Quizzes.  The
Homework assignments will be the same, again regardless of what we
decide on the Quizzes.

Here is a preview of Homework 2 (tentative):

* Problem 1 will address that question of whether racial issues should
affect the use of standardized tests in admission to universities and
professional schools.  Some say no, citing correlation between test
scores and family wealth, the latter being a proxy for race.  But what
if one were to condition on the wealth or race variable?  In other
words, what if the test-related admissions criterion were how high the
applicant scored, *given his/her family income*?  We will analyze this
from a prediction point of view, using variouse qeML functions.

* Problem 2 will concern the issue of *edge bias* discussed in class.
You will dig through one of the random forests functions in qeML, to
determine how to access the leaves of a tree in the output.  (A
"software scavenger hunt.")  You will then modify the qeML function to
fit a linear model at each node, and add the coefficients to the
function's output.  Finally, you will modify the predict() function
paired with that function so that the user has a choice of the original
type of prediction or the edge-modified one.

**April 24, 1235:**

If any of your teammates are unresponsive to your messages, or otherwise
not engaged in your work on the Homework, then **DO NOT INCLUDE THEIR
NAMES IN YOUR SUBMISSION.**

If this effectively leaves you with a Group size of 2, and you wish to
be part of a larger Group, let Yuyi know, and we will work something
out.

**April 23, 2105:**

A sharp student asked me about the form of the return value of the
"superfactor" Extra Credit problem. Even if you do not work on this EC
problem, you may find my answer to be of interest:

"If there are l1 levels in f1 and l2 levels in f2, then technically any
output factor with l1 * l2 levels is OK, but of course it would be nice
to relate the levels to the original ones in f1 and f2.

Just think from the point of view of a potential user of this function.
Given f1 and f2, say factors that they are very familiar with, what
would they like?  What would they find useful?  Pretend you are a
consultant who the client has retained."     

**April 22, 2035:**

To make sure all is clear, here is my proposal:
* No Quizzes. Quiz 0 and Quiz 1 would not count either.
* Yuyi would still run your Homework code to check its accuracy.
* In Interactive Grading, I would be the one to ask you questions, instead of Yuyi.
* Weight of the Homework in your final course grade would be increased to replace the Quizzes.
* You would still have a Term Project, group-based.

**April 22, 1935:**

The solutions to Quiz 1 are in our class repo, in the directory **QuizQsAs**.

BTW, several students had a line in their solution for Question 4,

> corXSY <- edit(corXSY)

This one baffles me. Anyone who did this, please e-mail me to explain.

**April 22, 1540:**

I just finished grading Quiz 1, and have e-mailed you your grade.  Overall
the results were disappointing, and often in surprising ways.

The top score was 75/100.  I decided to set 70 as an A. (This is
different for every quiz; I set letter grade cutoffs according to what I
consider the level of difficulty of the Quiz problems.)

That meant I gave only 2 A grades.  And I also gave only 2 B grades.
This is out of the 26 who took the Quiz.  By contrast, in my ECS 132
class last week, I gave nearly 50% A grades (including A- and A+).

I would offer the following possible reasons for what happened:

* Some students are not reading the Blog.  Question 1 was a giveaway for
  those who did read it.  And even the A students did not heed my post
of April 15, 1630.  Of course, students who don't read the Blog won't
see this Blog post here either. :-)

* Some students have not seen R before this class.  OK, but even those
  students should have been able to do Problem 4, which was **very
similar to the Homework.**

* Some students, even CS majors, are simply poor programmers. This is
  not news; some of my faculty colleagues have said this based on what 
they have seeing recently in upper-division courses.  IMO this is in part due 
to serious problems in the way our lower-division programming courses are taught.

* Some students are simply not putting much time into the course.

Now, what is to be done? It's likely that things would improve somewhat in
fuure Quizzes, but as my use of the word *would* instead of *will*
earlier in this sentence implies, I think pretty drastic change is
called for here.

I propose the following:

* We will cease having Quizzes.

* Instead, I will take over the Interactive Homework Grading, which Yuyi
  would have done.  Recall:  The original plan was that Yuyi would first run a script to check the
accuracy of your code, then give you a second grade based on how you do
in Interactive Grading.  Your overall grade for that assignment wpi;f
then be a combination of the two grades. But now I would be asking the questions in Interactive Grading instead of Yuyi.)  The Homework weight in your course grade would be expanded accordingly.

What do you think of this proposal?  Mind you, **don't jump to the
conclusion that this way will be easier.**  I will ask penetrating
questions, just like Yuyi would have, but more so.  What does this line
of code do?  What would you have done if the Homework prompt had been
different?  Why would using approach XXX have been incorrect?  In what
senses?  What is the interpretation of quantity YYY?  Note that I will
ask followup questions, and also **general questions about the course
material**.  Again, Yuyi would have done all this , but obviously my
questions will be more nuanced.

Still not easy, but I think many of you would at least feel like you
would be better able to prepare.  

We will discuss all this in class on Tuesday, but in the meantime, if
you have comments or questions, please e-mail me.

**April 20, 0000:**

In the example in Problem 2, I used R's **cut()** function to create the intervals.

**April 19, 2255:**

Notes on debugging, both in general and in R:

* Don't use print statements to debug!  Use a debugging tool.

* Any good IDE will have a built-in debugging tool, e.g. VS Code
  (Python, R, whatever) or RStudio (R).  The developers of those IDEs
put them there for a REASON!

* Or use the underlying debugging tool directly, e.g. **gdb**
(C/C++), **pdb** (Python) or **debug()** (R).

* Use my Principle of Confirmation: Step through your code in the
  debugging tool.  Check variables etc. as you go along, **confirming**
that "what you think is true, IS true."  Eventually, one will not
confirm, and you will then have at least found the location of the bug.

**April 19, 1645:**

As I have said, all the Quizzes are open-book, open notes. You can bring in anything on paper you wish, say your Homework solutions, or incorporate them into your big PDF file containing all our readings.

**April 18, 1840:**

Please make SURE you understand OS path issues.  On one of the
questions in Quiz 2, you will write code that reads from one of the
files in our dataset collection.  

**April 18, 1555:**

Please make SURE nothing goes wrong when you take Thursday's Quiz.
Some students had OMSI problems in my ECS 132 Quiz, which was surprising
in that making Quiz 0 take-home was supposed to prevent that.

* Make sure to do a full test of OMSI, where you play the roles of both
  the instructor (you run the server) and the student (you run the
client). Run the server on CSIF and the client in a campus classroom,
for the most realistic test.

* Make sure you have combined the readings into a single PDF file, and
  make sure you can read the file from within OMSI, without invoking a
browser. (Acrobat is fine.)  As you know, this is an anti-cheating
measure in OMSI, e.g. to prevent a student from e-mailing someone during
a Quiz etc.  **Make sure to actually try reading your PDF from within
OMSI.**

**April 17, 1825:**

The lecture and readings coverage for any Quiz is all material covered through the most recent lecture. For us that means all material through the most recent Tuesday prior to the Quiz.

**April 17, 1345:**

Keep in mind that many if not most Quiz questions will refer to something in our reading. It is thus imperative to have copies of the reading materials, either on paper or in a PDF file.

**April 16, 1310:**

We will be using **data/other/englishBrief.Rdata** in Quiz 1. Please place a copy of it in the same directory from which you run OMSI. I strongly recommend that you device a little R code snippet to test that you can indeed access the dataset from within OMSI.

**April 15, 1935:**

A very handy R function is **order()**, which acts as a companion to **sort()**.
Get to know it well, because it will likely be useful in Quizzes, Homework and the Term Project.

Example:

``` rc
> x <- runif(5)
> x
[1] 0.4416110 0.9812922 0.6882194 0.9579802 0.2905208
> sort(x)
[1] 0.2905208 0.4416110 0.6882194 0.9579802 0.9812922
> order(x)
[1] 5 1 3 4 2
```

So, the 5 means that **x[5]** is smallest in **x**, the 1 means that **x[1]** is second-smallest etc.

And note this:

``` rc
> x[order(x)]
[1] 0.2905208 0.4416110 0.6882194 0.9579802 0.9812922
```

It's the same as **sort(x)**! Make sure you see why.


**April 15, 1630:**

An issue that usually arises in data analysis is what to do with missing values. These are coded NA in R. For the **cor()** function, set **use = 'complete.obs'**. This will skip any case in which one of the two arguments is NA.

**April 15, 1555:**

I see now that I hadn't finished creating **englishBrief.RData**. I just pushed the complete version.

**April 15, 1540:**

I just pushed a new dataset, **englishBrief.RData** in the **other** section of our dataset collection. There is also an
accompanying **README**. I think it's likely that we will use this data in Quiz 1.

**April 15, 1500:**

Remember, on Quizzes your OMSI window must fill your laptop screen at all times. If you think you will need a copy of this blog, or your Homework submission etc., you may bring paper hard copies to the Quiz (and for that matter, paper copies of anything else).

**April 15, 1035:**

In Quiz problems designated as "R code answer," you are NOT required to write code that is short, efficient or elegant. Just make it work. And remember, OMSI allows you to test your code, a vitally important feature.

**April 15, 0955:**

For some reason the Registrar's student roster site is down this morning. I noticed in the error messages I got from running 
Lynx that the site uses Adobe Cold Fusion, an early Web development tool that has gone through various new versions.

For today's trivia item, I'll mention that the original inventor of Cold Fusion was JJ Allaire. JJ wrote it as an undergrad and sold it to Microsoft for millions. He then became a "serial entrepreneur," founding a series of successful startups.

A few years ago, JJ decided that the R language needed an IDE, so he developed RStudio, and founded the firm of that name. He's 
an amazing guy (and very nice personally). He still loves coding, and spends a lot of his day in that activity, even though he is the CEO.

In the context of our ECS 189G course, JJ has always been interested in social issues, and recently changed the legal status of 
RStudio to that of a Public Benefit Corporation. I'm not sure of the implications of that, but it reflects the fact that
JJ has always wanted to "Do good, not must do well."


**April 15, 0950:**

My blog post of April 13, 1010 emphasized the need to get a good start on whatever Homework is pending to prepare for a Quiz.
This is worth repeating; the more progress you've made on Hwk 1 before you take Quiz 1, the better you are likely to do on that Quiz.

**April 14, 1530:**

As you know, you can view the "man page" (online help) of an R function
by using a question mark, e.g.

``` r
?ls
```

to obtain information about the **ls()** function.  But you can also
do this via a call to the **help()** function, e.g.

``` r
help(ls)
```

This could come in handy in an OMSI session.  Just temporarily put your
call to **help()** in the Answers box in your OMSI screen, then click
Submit and Run.

**April 14, 1305:**

A student mentioned that he had encountered an "invalid factor level, NA generated" error message. This is OK, but it's important to understand why this occurred.

Remember, the standard approach is to randomly partition one's data into training and test sets. (An alternate name for the latter, used in qeML, is "holdout set.") Now, suppose one of our predictors, say X<sub>3</sub>, is categorical, implemented as an R factor. Say X<sub>3</sub> has 12 levels, i.e. there are 12 categories. As I mentioned yesterday, R packages typically convert this to indicator/dummy variables. Here we would have 11 such variables. (We don't need a 12th; if all 11 are 0, that implies category 12.)

Now consider what could happen if, say, level 5 occurs rarely. Then it may happen that this level occurs in the training set but not in the test set.  Then the R function would be surprised, unable to deal with that level, hence the error message.

How should this be handled? There are several possibilities:

* Just ignore it, and use the **testAcc** value computed from the other holdout cases.
* Run the analysis again. You'll get training and test sets different from before, and maybe the problem won't occur this time.
* Use the function **qeML::factorToTopLevels()** to simplify X<sub>3</sub> to just its more frequent levels, lumping everthing else to "other." Since this reduces the number of features--remember, each indicator variable is a feature--this might also be useful to avoid overfitting.

**April 14, 1115:**

Recall that I said I would place all our datasets here on our repo. I've now completed that.

Download the [datasets](https://github.com/ucdavis/FairMLCourse/tree/main/Data) NOW, before you forget. They will be used on Quizzes, including Quiz 1.

**April 14, 0955:**

I've been pretty critical of ChatGPT, but this time it gave a pretty
good answer:

> What are proxies in the context of fair machine learning?
> 
> In the context of fair machine learning, proxies refer to features or
> variables that are used to indirectly infer a sensitive attribute, such
> as race or gender, and may be used in the development of algorithms or
> models.
> 
> For example, a model that predicts a person's likelihood of defaulting
> on a loan might consider factors such as their credit score, employment
> history, and income. However, if these variables are correlated with a
> person's race, the model may end up indirectly discriminating against
> certain groups.
> 
> In this case, credit score, employment history, and income are
> considered proxies for race, as they can be used to predict a person's
> race, even though they are not inherently related to it. To avoid such
> indirect discrimination, it is important to carefully select features
> and variables that do not serve as proxies for sensitive attributes, and
> to regularly evaluate the fairness of the algorithm or model.

**April 13, 1010:**

On Quizzes, it will be expected that you will already have starting thinking about pending Homework assignments. For example, Hwk 1 mentions R's **cor()** function, and next week's Quiz might ask you to use it.

**April 13, 0955:**

Keep in mind that you will need to have copies of our readings for use in the Quizzes. You may bring paper copies if you wish, or you coulc make use of OMSI's PDF viewing capability. In the latter case, I would suggest that you merge PDF versions of the readings (whichever ones are covered by the given quiz) into a single PDF file. One way to do this on CSIF would be to run

```
gs -dNOPAUSE -sDEVICE=pdfwrite -sOUTPUTFILE=outputfilename.pdf -dBATCH file1name file2name etc.
```

BTW, to make a PDF version of a given reading item, one easy way is to view it in the Chrome browser (available for all OSs) and hit Print. Choose "Save to PDF."

**April 12, 1840:**

Yuyi tells me that some students are worried that they won't be able to do Question 4 on Quiz 0, due to lack of access to the **fairml** package. Actually, this was already discussed in the blog post of April 11, 2320! **PLEASE** read the blog--or in the words of the old marriage ceremony, "forever hold your peace." :-) Also, don't signal to Yuyi that you are a non-blog reader, very embarrassing. :-)

If you get 0 credit on a certain Quiz problem because it required reading the blog, and you didn't do that reading, then there will be no regrade; 0 is 0. Same for the Homework.

I also said that I would make available to you all the datasets, separately from package installation. In response to Yuyi's message, I've now started, pushing a new **Data/** directory to our repo. You'll see **fairml** there.

Note that these files have '.rda' suffixes in their names. Load them by calling R's **load()** function. I recommend setting **verboose = TRUE**. Sometimes people use '.RData' for the same thing.


**April 12, 1805:**

Note that though the Quizzes will not ask you to write code using the packages, there definitely will be "R code answer" questions, i.e. you WILL be asked to write R code.

In that light, note that except for **fourfold()**, the functions in the UCB data analysis that we covered on Tuesday are all from base-R, not from the **vcd** package.  Make sure you are able to use them in quizzes. 

To familiarize yourself with those functions, devise little experiments 
with them.  Let me know if you have any questions at all about them.

**April 12, 1615:**

The second problem on Hwk 1 is now ready! Start NOW; the actual number of lines of code will not be very large, but trust me--there are a lot of points in which you and your teammates will say, "Wait a minute. HOW do we do this?"

There are also several Extra Credit problems.

**April 12, 1110:**

We will use this solution regarding the packages:

* On Quizzes, I will simply not have you run code involving the packages. Note that I might still ask about the packages, in a textfile-answer question, but not in an R-code-answer question. I will make the datasets for the packages available for you separately, and R-code-answer questions might use them.
* On Homework, I will make all required packages available on CSIF. (Each of you has a CSIF account, by virtue of being enrolled in an ECS class.) You can run your code there if you have trouble installing them on your own machine. Note that you can ssh in to CSIF remotely.

**April 11, 2320:**

OK, here is the situation regarding package installation.

First and foremost, don't worry about it.  We will make it work for everyone, probably by running (in some form) on CSIF.  Remember, the primary focus on the course is on the algorithms themselves; we write code only as a means of illustrating the algorithms.

Now, having said that, I'll explain the problem.

R is an interpreted language; one does not compile it.  However, it is possible to write a function in C/C++ that one calls from R.  This is very common, for increased program speed.

But that opens the possibility of incompatility issues at the compiler level.  It turns out that the 'fairml' package is a good example.  I've been using it for a long time, on both Linux and Mac platforms, with no problem.  But when I tried installing it today on CSIF, a Linux system, the installation failed, with a gcc compiler error.

So, we won't be able to use 'fairml', even on CSIF, but it's not crucial that we use this package.  And we can use the data from 'fairml' separately, without installing it.  I'll arrange that, but if you want to get the data yourself, download it from
[https://cran.r-project.org/src/contrib/fairml_0.7.tar.gz](here).

Unpack, and then go to the data/ directory.  Load the files into R using the R 'load' function.

I have several solutions in mind, and will get back to you on this.  But again, don't worry about it; **we WILL work it out, in a solution that will work well for everyone.**

**April 11, 2155:**

Important announcement about package installation etc. coming up in a few minutes...

**April 11, 1935:**

If you are having trouble installing the packages, please contact me soon. Here is some information beyond what is in my R tutorial.

* Installed packages reside on your own laptop, not on the OMSI server. (Nor will they be on CSIF; and note that you will not be using CSIF during quizzes.)   
                                                                                
* One typically specifies a directory in which one wishes to install packages.  I always use **~/R**, i.e. R in my home directory.                       
* When later calling **library()**, again R needs to know where your packages are.  You can specify that with the **lib.loc** argument.                  
                                                                                
* R has a startup file, **~/.Rprofile**.  In mine here on my machine at home, I have the line                                                                  
 ``` rc                                                                              
.libPaths("/home/nm/R")   
```
                                                                                
(where **~/R** is **/home/nm/r**).  Both **install.packages()** and **library()** use this      
startup file, so I need not specify it in my calls to those functions.  E.g. I 
installed **fairml** by typing                                                     
 
 ``` rc
install.packages('fairml')                                                      
```

and subsequently, run                                                           
 
 ``` rc
library(fairml)    
```
                                                                                
in any R session in which I need it.           

**April 11,1930:**

Our TA, Yuyi, will be notifying you of your Homework group memberships very soon. Sorry for the delay.

**April 11, 0950:**

Please install the **qeML** package as soon as possible, and let me know if you have any trouble. It is not on CRAN yet, so you cannot use **install.packages()** (which you CAN do for **fairml**, **vcd** etc.). Note that all the required packages must be on your laptops for the quizzes, which will begin next week.

**April 10, 1920:**

One of the major advantages of R is its huge repository of user-contributed software specific to data science, [CRAN](https://cran.r-project.org/). The **fairml** package is there, and you can install it by running

``` rc
> install.packages('fairml')
```

(There is another function to call, from the **devtools** package, to install packages from GitHub repos. Install **devtools** from CRAN first.)

The following code, best run from within an R function, loads the **german.credit** data:

``` rc
library(fairml)
data(german.credit)
```

**April 10, 1325:**

If you are having trouble with OMSI, please try accessing the server I just launched; p12, port 2000 (use any exam code). This is NOT the actual quiz, just the example questions that come with OMSI, but please try so we can isolate your problem.

**I AM EXTENDING THE DUE DATE FOR QUIZ 0.**

**April 10, 1305:**

We appear to be having weird technical problems, ones I've never encountered before.

1.  Several students have told me that they are blocked from e-mailing the TA.  Please try using GMail for sending and receiving messages for this class, as it is the official e-mail system for UC.  Let me know if you still have problems.

2.  Though many students have successfully submitted Quiz 0 from within OMSI, some are reporting errors.  Among other things, there seems to be some confusion as to whether the server is on port 3000 or 4000.  I have a query into Yuyi (our TA) on this.

**April 10, 1020:**

This post is about graphics.

* Please install the **vcd** package on your laptop. It will be used in tomorrow's lecture (and thus may be used on quizzes).
* In Homework and the Term Project, you will need to do graphics in R. I have the following suggestions:

    - Base-R, i.e. built-in
    - **ggplot2**; this is the most popular one
    - **lattice**; this is my favorite (IMO more straightforward interface and more vivid colors)

There are tons of tutorials on the Web.  I recommend that you use one
that starts out with examples right away, instead of first presenting
general syntax.

Note that you must also install [qeML](https://github.com/matloff/qeML).
It will be used throughout the course, including on quizzes.  We haven't
covered ML yet, but there are many built-in datasets that may be used.
Install **qeML** by first installing **devtools**, and then using
**install_github()** from that package.

**April 9, 2355:**

A student contacted me re trouble with OMSI. I then tried it myself, and got the same error.

I then checked to confirm that I was on the VPN. Turns out I wasn't!  I had connected earlier, so my ssh was still intact, but apparently my connection to the VPN had expired and thus I could not make new connections.  I renewed my VPN connection, and it all worked fine!

BTW, I wasn't sure about the port number on pc11 that the server was running on, so I ssh'ed into pc11, and ran "ps -ax". I saw the server was running on port 3000.

**April 8, 2305:**

I've removed one item from our readings list (I may add one more later in the course), and altered the order. This is in the "proportions" section.

Related note: As I mentioned in class, I recommend that you read each item AFTER I discuss it in class.

**April 8, 1410:**

If you added the course once the quarter started, please note [our class GitHub repo](https://github.com/ucdavis/FairMLCourse). Read the syllabus, and the linked information, especially the class procedures. Also, please note that it is required that you read the class blog every day.

**April 7, 2100:**

Office hours, Locations

NM: M 2-4, 3053 Kemper <br>
YYL: MW 5-6, 55 Kemper

**April 6, 2020:**

My op-ed on ChatGPT and statistics is now out. You may find it interesting.

**April 6, 0955:**

I added an example line of output for the homework, and a note on holdout sets.

**April 6, 0900:**

As noted earlier, do not use any packages that do not ship with base-R. (Check with R on CSIF if you are unsure.) But anything that does ship with base-R is fine.

In Hwk 1, you probably would find the **combn()** function useful.

**April 5, 2035:**

I've now posted Homework 1 on our class GitHub repo.

**April 5, 1735:**

A student sent me e-mail, saying simply that his try to run OMSI failed. Well, of course, that is not useful information. :-)

But neither is a screen shot useful, in many cases. Instead, in order to get help from the TA or me, you need to send us a full record of what led up to the error, including error messages. The best way to do this is with the **script** command, available on any Linux system or Mac.

Running **script** causes a new shell to be launched. You then run whatever commands led to the error, e.g. running python to launch OMSI.  Whatever OMSI prints will be shown, including error messages.

If you are adventurous, you might even run the OMSI client in debug mode (python -m pdb appname args).

When you are done, exit from that shell, then send us the typescript output file; it has a record of whatever was written to the shell. 

If you don't have a Unix-family system, you can run on CSIF. If you are not physically there, you'll need to use the -Y option if your error is on a GUI app, such as OMSI.


**April 5, 1240:**

I've just posted Quiz 0 to our GitHub repo. This is basically a take-home quiz, with the goals of making sure you are ready to use OMSI and R. Instructions are in the document.

There will be no quiz in discussion section next week. Instead, Yuyi will lecture on a certain R programming trick that you will likely find useful later in the course.

**April 5, 1015:**

As stated in the course flyer, this is a 4-unit class. The number of units must be 4; it is not optional.

If you are listed for a number other than 4, please fix this right away, to avoid a late penalty. Go to the course in Schedule Builder, and click edit.

**April 4, 2110:**

We will soon be forming our Homework Groups. Group size is 3 or 4. If you have 1 to 3 people you would like to be in a Group with, please so inform Yuyi by Friday, April 7, 11:59 pm. Otherwise, she will assign you to a group.

**April 4, 2010:**

I mentioned in class today that anyone who considers him/herself to be well versed with computers should know something about client/server programming. If you haven't done this kind of coding before, I urge you to read [my tutorial](https://heather.cs.ucdavis.edu/matloff/public_html/Python/PyNet.pdf). You will NOT need this for our class, just something to back up your future claims of expertise. :-) And by the way, it will help you understand OMSI better.

**April 4, 1920:**

Following up on what I said in class today: The quizzes are taken on an open-book basis, which in our case means that you use copies of the assigned readings I see two possible approaches:

* Make hard copies and bring the hard copies to the quiz with you. Or:

* Combine the copies into one giant PDF file. OMSI allows one to load PDFs, specifying them on the command line.

Needless to say, either option requires you to do careful preparation well before a quiz.

**April 4, 1810:**

Someone brought up the perennial R-vs.-PYthon-for-data-science issue in class today. I made a comment about random forests, which I will elaborate on below, but first I should make one point clear: Our course is not an R-in-fair-learning class; it's a fair-learning class, period. The emphasis is on the concepts and algorithms, not on the languge.

At any rate, I mentioned that IMO there are better libraries for random forests in R than in Python. In case anyone is curious, I would cite e.g. the [grf package](https://github.com/grf-labs/grf) by the Stanford Econ and Stat people. The linear interpolation capability is especially important. 

But again, the grf package was developed in R (I think there is now a Python version, though not in sklearn), but again not because R is a "better" language but because Stat people tend to use R.

We will use qeML ("quick and easy machine learning"), a package I developed to get people without prior background quickly into ML.

**April 3, 2315:**

Please read the class syllabus in our course GitHub repo. Read the procedural document as soon as possible, as it is vital to your doing well in the course.

**April 3, 1450:**


All class announcements from this point onward will be made here in this
blog, rather than by mass e-mail.  When making a blog post, I will also
try to send a message notifying you of a new post, but may not always do
so.  You are required to read the blog at least once per day.

