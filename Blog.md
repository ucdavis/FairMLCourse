
# ECS 189G Blog

**Spring 2023**

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

