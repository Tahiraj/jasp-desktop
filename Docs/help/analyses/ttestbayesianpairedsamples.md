
Bayesian Paired Samples T-Test
==========================

The paired samples t-test allows you to test the null hypothesis that the population mean of the difference between paired observations equals 0.

Assumptions
-----------
- Continuous difference score
- The difference scores are a random sample from the population
- The difference scores are normally distributed in the population

Default Options
-------
### Hypothesis:
- Measure 1 &ne; Measure 2: Two-sided alternative hypothesis that the population mean of the difference is not equal to 0
- Measure 1 &gt; Measure 2: One-sided alternative hypothesis that the population mean of the difference is larger than 0
- Measure 1 &lt; Measure 2: One sided alternative hypothesis that the population mean of the difference is smaller than 0

### Bayes Factor:
- BF10: Bayes factor to quantify evidence for the alternative hypothesis relative to the null hypothesis
- BF01: Bayes factor to quantify evidence for the null hypothesis relative to the alternative hypothesis
- Log(BF10): Natural logarithm of BF10

### Prior:
- Cauchy prior width: Scale of the Cauchy prior density on effect size under the alternative hypothesis, the default is 0.707

### Missing Values:
 - Exclude cases analysis by analysis: In case of multiple t-tests within a single analysis, each test will be conducted using all cases with valid data for the difference score for the particular t-test. Sample sizes may therefore vary across the tests.
 - Exclude cases listwise: In case of multiple t-tests within a single analysis, each t-test will be conducted using only cases with valid data for all difference scores. Sample size is therefore constant across the tests. 
 
Default Output
-------

### Bayesian One Sample T-Test:
- BF10 (or BF01): Bayes factor. If one-sided test is requested: 
  - BF+0: Bayes factor that quantifies evidence for the one-sided alternative hypothesis that the difference is larger than 0
  - BF-0: Bayes factor that quantifies evidence for the one-sided alternative hypothesis that the difference is smaller than 0
  - BF0+: Bayes factor that quantifies evidence for the null hypothesis relative to the one-sided alternative hypothesis that the difference is larger than 0
  - BF0-: Bayes factor that quantifies evidence for the null hypothesis relative to the one-sided alternative hypothesis that the difference is smaller than 0
- error %: The error of the Gaussian quadrature integration routine used for the computation of the Bayes factor

Additional Options
-------
### Additional Statistics:
- Descriptives: Sample size, sample mean, sample standard deviation, standard error of the mean for each measure

### Plots:
- Prior and posterior: Displays the prior and posterior density of the effect size under the alternative hypothesis
  - Additional info: Adds the Bayes factor computed with the user-defined prior; adds a pizza plot depicting the odds of the data under the null vs. alternative hypothesis; adds the median and the 95% credible interval of the posterior density of the effect size
- Bayes factor robustness check: Displays the Bayes factor as a function of the width of the Cauchy prior on effect size. The scale of the Cauchy prior is varied between 0 and 1.5, creating progressively more uninformative priors
- Sequential analysis: Displays the development of the Bayes factor as the data come in using the user-defined prior 
 - Robustness check: Adds the results of the sequential analysis using the wide (scale=1) and ultrawide prior (scale=sqrt(2))
 
Additional Output
-------

### Descriptives:
- N: Sample size
- Mean: Sample mean 
- SD: Sample standard deviation
- SE: Standard error of the mean

### Plots:
- Prior and posterior: Displays the prior (dashed line) and posterior (solid line) density of the effect size under the alternative hypothesis; the gray circles represent the height of the prior and the posterior density at effect size delta = 0. The horizontal solid line represents the width of the 95% credible interval of the posterior
 - Additional info: Displays the Bayes factor computed with the user-defined prior; displays a pizza plot depicting the odds of the data under the null vs. alternative hypothesis; displays the median and 95% credible interval of the posterior density
- Bayes factor robustness check: Displays the Bayes factor as a function of the width of the Cauchy prior on effect size. The black circle represents the Bayes factor computed with a wide prior; the white circle represents the Bayes factor computed with an ultrawide prior; the gray circle represents the Bayes factor computed with the user-defined prior
- Sequential analysis: Displays the development of the Bayes factor as a function of the number of paired observations (n) using the user-defined prior; displays the Bayes factor computed with the user-defined prior; displays a pizza plot depicting the odds of the data under the null vs. alternative hypothesis; displays the median and 95% credible interval of the posterior density; shows the decisiveness of the evidence in terms of Jeffreys' (1961) evidence categories 
 - Robustness check: Displays the development of the Bayes factor as a function of the number of paired observations (n) using the wide and ultrawide prior. The black circle represents the Bayes factor computed with a wide prior; the white circle represents the Bayes factor computed with an ultrawide prior; the gray circle represents the Bayes factor computed with the user-defined prior

References
-------
- Jeffreys, H. (1961). *Theory of probability (3rd ed.)*. Oxford, UK: Oxford University Press.
- Morey, R. D., Rouder, J. N., Pratte, M. S., & Speckman, P. L. (2011). Using MCMC chain outputs to efficiently estimate Bayes factors. *Journal of Mathematical Psychology, 55*, 368-378.
- Rouder, J. N., Speckman, P. L., Sun, D., Morey, R. D., & Iverson, G. (2009). Bayesian t-tests for accepting and rejecting the null hypothesis. *Psychonomic Bulletin & Review, 16*, 225-237.