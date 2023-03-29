
# ECS 189G, Spring 2023: a Course on (Social) Fairness of Machine Learning Algorithms

## Computing Resources  

### R programming language

* The homework, quizzes and term project will all be done in R.

* All students in the class either have some background in R, or have
    enough programming background to quickly learn what will be needed
    on their own.  Everyone, please read
    [fasteR](https://github.com/matloff/fasteR), Lessons 1-12.  It's designed
    for non-tech people, so you should be able quickly breeze through
    it.

    Our TA will go over some fair ML datasets with R in the discussion
    section, Week 1, but of course that is not nearly enough.  Please
    read the tutorial.  Even if you know R, you may find that you learn
    something new and useful.

* All code that you submit, either for homework or in quizzes, will be
    executed by whoever grades it (the TA or myself).  Do not make use
    of R packages that do not come with base-R, as they may not be on
    the grader's machine.

    In particular, do not use the Tidyverse.  I am 
    [not a fan of it](https://github.com/matloff/TidyverseSkeptic)
    anyway--it was developed as a way to make R easier for noncoders,
    and I believe it makes it harder for them--but in any case, I may
    not have a current version of the Tidyverse on the machine 
    I'm using for grading.

    Similarly, the homework and quizzes will ask you to submit .R files.
    Do so, e.g. not .RData etc.

    Of course, how you create your R code is up to you.  You could use
    RStudio or the more CS-ish VS Code, or just use an ordinary text
    editor like me.  I use Vim for everything, with my own home-grown
    Vim macros, including one [for R](https://heather.cs.ucdavis.edu/Vimrcs/NM.virrc).

### R packages

We will use various R packages that focus on fair ML (which WILL be on
the graders' machines), such as:

* edf

* [fairml](https://cran.r-project.org/web/packages/fairml/)

* [fairmodels](https://www.r-bloggers.com/2020/07/fairmodels-lets-fight-with-biased-machine-learning-models-part-1%E2%80%8A-%E2%80%8Adetection/)

* [fairness](https://cran.r-project.org/web/packages/fairness/index.html)

* Walk a Mile

### Use of R in Linear Algebra 

Linear algebra is not a prerequisite for this class, but we will make
occasional very light use of it.  I believe all or almost all of you
have had a course in it, but (a) one or two may not have and (b) you may
not have seen it in R.  I have [a
tutoral on matrix algebr](https://github.com/matloff/fastLinearAlgebra)
too; please read it.

