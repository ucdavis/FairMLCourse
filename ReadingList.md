
# ECS 189G, Spring 2023: a Course on (Social) Fairness of Machine Learning Algorithms

## Reading List

**Note:** 

* In some cases, only parts of the listed resource will be required reading.

* Some straightforward parts of the required reading will covered by
  students on their own, rather than formally in lecture.

* Some of the readings will be very technical, such as the Scutari paper
  listed below, while some are more qualitative.  Both aspects are important.

### Prologue

Sets the stage. First example of the fairness issue. Overview of some of
the technical terms, but with technical details coming later.

* [**Pro Publica** article](https://www.propublica.org/article/machine-bias-risk-assessments-in-criminal-sentencing) 

### Rates, Proportions, Simpson's Paradox

A firm necessity in the course is a *common sense`understanding of
proportions*, e.g. difference between proportion of x among y vs.
proportion of y among x.  Amazingly, many people lack this, and in fact,
it can indeed be very subtle.  

* [serious conceptual errors](https://twitter.com/jsm2334/status/1462573183970824201) made regarding Covid-19

* ["natural" solution to Monty Hall problem](https://heather.cs.ucdavis.edu/ProbStatDSBook/MontyHall.pdf)

   If one carefully names all the events, the problem is actually easy,
   straightforward.

* [Good for Men, Good for Women, Bad for People](https://www.researchgate.net/publication/11608762_)

   Title says it all.

* [UCB admissions discrimination lawsuit](https://rstudio-pubs-static.s3.amazonaws.com/300645_f342587e10674aebafd57e94d1527f20.html)

    Could Berkeley, famously liberal, have been discriminating
    against female applicants for grad school?

### Machine Learning Methods, Overfitting, Statistics

* [quick tutorial on ML](https://github.com/matloff/qeML/blob/master/inst/mdFiles/ML_Overview.md)

* [quick tutorial on overfitting](https://github.com/matloff/qeML/blob/master/inst/mdFiles/Overfitting.md)

* [don't use p-values](https://github.com/matloff/qeML/blob/master/inst/mdFiles/No_P_Values.md)

* [technical details of the Pro Publica analysis](https://www.propublica.org/article/how-we-analyzed-the-compas-recidivism-algorithm)

* [microanalysis of sources of bias in the COMPAS data](https://pbiecek.github.io/xai_stories/story-compas.html)

### General Technical Issues, Measures of Fairness

* [article, "Algorithmic Fairness in Computational Medicine](https://www.sciencedirect.com/science/article/pii/S2352396422004327#bib0043)

    Good general presentation, not just in medical context.  Here we
    cover the first half.

* [paper, "Fairness in Credit Scoring"](https://arxiv.org/pdf/2103.01907.pdf)

    Good general presentation, not just in credit context.  First half.

* [paper by NM](https://arxiv.org/abs/2210.06680)

* [COMPAS authors' rebuttal to Pro Publica article](https://www.propublica.org/article/machine-bias-risk-assessments-in-criminal-sentencing)

### Remedies

* [article, "Algorithmic Fairness in Computational Medicine](https://www.sciencedirect.com/science/article/pii/S2352396422004327#bib0043)

    Second half.

* [paper, "Fairness in Credit Scoring](https://arxiv.org/pdf/2103.01907.pdf)

    Second half.

* [Scutari paper](https://arxiv.org/pdf/2105.13817.pdf)

    Highly technical; we will skip the more advanced material, mainly
    focusing on the intuition.

* [NM extension of Scutari paper](https://arxiv.org/abs/2210.06680)

### ML Fairness in Specific Applications

* [NIST on facial recognition](https://www.nist.gov/news-events/news/2021/07/nist-evaluates-face-recognition-softwares-accuracy-flight-boarding)

    Short, nontechnical summary.

* [data privacy](https://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=9684858&tag=1)

* [Stanford SIEPR analysis of disparity in tax audits](https://drive.google.com/file/d/1kA7CG3cLq6eWmwBVgTDOIMhxuGZwRJ5O/view)
