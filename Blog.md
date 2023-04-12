
# ECS 189G Blog

**Spring 2023**

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

