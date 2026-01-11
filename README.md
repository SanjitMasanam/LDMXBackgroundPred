# 2DAlphabet for ECal-Only LDMX

## Set up
```
cmsrel CMSSW_14_1_0_pre4
cd CMSSW_14_1_0_pre4/src
cmsenv
git clone git@github.com:SanjitMasanam/LDMXBackgroundPred.git .
git clone https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
cd HiggsAnalysis/CombinedLimit
git fetch origin
git checkout v10.0.1
cd ../..
scram b -j
```

## Set up the enviroment (only once)
```
python3 -m virtualenv LDMX-twoD-env
source LDMX-twoD-env/bin/activate
cd 2DAlphabet
python3 setup.py develop
cd ..
```

## Use the enviroment 
```
cd /path/to/CMSSW_14_1_0_pre4/src
cmsenv
source LDMX-twoD-env/bin/activate
```

## Example running (NOTE: Use same X, Y, - between all scripts)
```
python3 runWith1DVanilla_vY_-R.py rpf1x0_BinningvX_InputvY_-R_Unblind config_BinningvX_InputvY_-R_Unblind.json
```

## Histogram Versions

- v0: Ecal PN + 4 signal masses (1.0, 0.1, 0.01, 0.001 GeV)
 - random samples mean nHits are randomly distributed from 0 - 10 while non-random samples have all nHits equal to 1

































