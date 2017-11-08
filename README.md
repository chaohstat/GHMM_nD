# GHMM_3D

This GHMM_3D package is developed by Chao Huang and Hongtu Zhu from the [BIG-S2 lab](http://odin.mdacc.tmc.edu/bigs2/). 

Gaussian hidden Markov model (3D) is a Matlab based package for statistical 3D imaging spatial heterogeneity analysis. A Gaussian hidden Markov model is introduced to build the spatial heterogeneity of imaging intensity across different patients. The statistical inference results are used in diseased region detection in both personal level and populational level. 

# Command Script 
We provide a command script (GHMM_3D_scp.m) to run the data analysis with GHMM_3D. Please see the file GHMM_3D_scp.m for usage. We also provide some simulated 3D imaging dataset for testing the package.

# GUI Interface
This toolbox is written in a user-friendly GUI interface. Here are some explainations of the interface:

1. Load raw data

In this panel, you need to select (a). the folder where mask data (mask file, mat format) is stored; (b). the file containing the covariate matrix (could be either txt format or mat format); (c). the folder where imaging dataset (mat format) is stored

2. Clear & Run

In this panel, you need to select the folder where to save all  the output files. The 'Clear' button help you to clear all the preselcted input information, and the 'Run' button is clicked when all the input information is selected and the analysis is ready to go.

3. Export Results

In this panel, you can plot the results you are interested in. 
