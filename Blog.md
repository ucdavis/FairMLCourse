
# ECS 189G Blog

**Spring 2023**

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
* Note that d is a hyperparameter. For a very large d, we have no constraint, and b<sub>LASSO</sub> = b<sub>OLS</sub>. But the samller the value of d, the more shrinkage we are imposing.
* Now, the picture on the left side shows the case p = 2. It has corners at (d,0), (0,d), (-d,0) and (0,-d). So we are required to choose our b somewhere in that diamond, which is the region |b<sub>1</sub>| + |b<sub>2</sub>| &leq; d. (The picture labels the axes &beta; but it should be b.)  
* So we requre that b<sub>LASSO</sub> be somewhere witin the diamond, including on the edges.
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

