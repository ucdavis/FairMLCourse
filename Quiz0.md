
# ECS 189G, Spring 2023, Quiz 0

This is Quiz 0.  It will be different from the other quizzes,
which will be in-class (weekly in the disucssion section, and also in
lecture on the last day of class).

This particular quiz is meant to be extremely easy.  Its main purposes
are (a) to acquaint you with using OMSI and (b) to make sure you have
basic skills in R.

**Make SURE to read the instructions carefully.**

## Instructions

* You must use the [OMSI tool](https://github.com/matloff/omsi) to
  submit your quiz.  Make SURE to do a test run first, playing the role
of both the student and instructor, as explained in the OMSI docs. 

* This will be due 11:59 pm, April 13.  The TA will start the OMSI
  server on April 6 (machine and port to be announced).  You may submit
at any time between April 6 and 11.  Don't leave it for the last minute;
keep in mind my slogan, "Computers never work." :-)

* You should be able to get an A+ grade on this quiz!  You are welcome
  to seek help from me or our TA (you may ask more than once if
needed):

    You are not allowed to discuss this quiz with anyone else besides
    me and the TA.  Failure to adhere to this requirement
    will be considered **a violation of the Code of Academic Conduct.**

* Prepare for this quiz by learning the rudiments of R, in my
  [fasteR tutorial](https://github.com/matloff/fasteR).  For now, the
  first dozen lessons or so will probably suffice, but as the quarter
  progresses, continue reading.

* Quiz questions, both here and in future quizzes, will be labeled
  either "R code answer" or "Text answer."  In the former case: 

   - The OMSI grading tool will execute exactly what you 
   submit.  Accordingly, there should be NO non-R in your submission.

   - If the question asks for you to just write a function, that is all
   you must have in your submission.  If you would like to include test
   code, do so and run to check but comment it out before submitting.

   - Use R comment lines to show your work and explain your answer,
   in order to better attain partial credit if you are wrong.

   - A question may ask you to "print" something.  This means, "print to
     the screen," i.e. use the **print()** function or equivalent.

   - When a question asks you to write code, it means it.  Don't compute
     something by hand and then merely submit the number.

   - You are not required to include error-checking unless specifically
     asked to do so.

   - One question here will use the **german.credit** dataset from the
     **fairml** package.  In addition to here in Quiz 0, make sure you
     have this package on your laptop for future quizzes.

## The quiz questions

**Question 1:**  Consider the **mtcars** dataset, built-in to R.  Write
code that finds and prints the **hp** value in the third row of the
dataset.

**Question 2:**  Again with the **mtcars** dataset, write code that
finds and prints the mean **mpg** among cars having 6 or 8 cyclinders.

**Question 3:**  Again with the **mtcars** dataset, write code that
adds a new column, the horsepower/weight ratio, and prints the entire
new dataset, now 12 columns rather than 11.

**Question 4:** In the **german.credit** data, write code that prints: the proportion of
foreign workers who have good credit; the proportion of workers with good credit who are
foreign; the proportion of foreign workers; and the proportion of workers
who have good credit.  (Print a 4-element vector.)
