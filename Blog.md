
# ECS 189G Blog

**Spring 2023**

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

