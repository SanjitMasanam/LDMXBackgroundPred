import uproot, ROOT, os, inspect, numpy as np, copy, datetime, matplotlib.pyplot as plt, math, scipy.stats, pandas as pd

# Define labels (i.e. runs/MC smaples) to create hpf file from
#labels = ['Data-Run2023D-CosmicTP-PromptReco-v1', 'Data-Run2023D-CosmicTP-PromptReco-v2']
labels = ['Data-Run2022B-CosmicTP-PromptReco-v1','Data-Run2022C-CosmicTP-PromptReco-v1','Data-Run2022D-CosmicTP-PromptReco-v1','Data-Run2022D-CosmicTP-PromptReco-v2','Data-Run2022D-CosmicTP-PromptReco-v3','Data-Run2022E-CosmicTP-PromptReco-v1','Data-Run2022F-CosmicTP-PromptReco-v1','Data-Run2022G-CosmicTP-PromptReco-v1','Data-Run2023A-CosmicTP-PromptReco-v1','Data-Run2023A-CosmicTP-PromptReco-v2','Data-Run2023B-CosmicTP-PromptReco-v1','Data-Run2023C-CosmicTP-PromptReco-v1','Data-Run2023C-CosmicTP-PromptReco-v2','Data-Run2023C-CosmicTP-PromptReco-v3','Data-Run2023C-CosmicTP-PromptReco-v4','Data-Run2023D-CosmicTP-PromptReco-v1', 'Data-Run2023D-CosmicTP-PromptReco-v2','Data-Run2023E-CosmicTP-PromptReco-v1','Data-Run2023F-CosmicTP-PromptReco-v1','Data-Run2024A-CosmicTP-PromptReco-v1','Data-Run2024B-CosmicTP-PromptReco-v1','Data-Run2024C-CosmicTP-PromptReco-v1','Data-Run2024D-CosmicTP-PromptReco-v1','Data-Run2024E-CosmicTP-PromptReco-v1','Data-Run2024E-CosmicTP-PromptReco-v2','Data-Run2024F-CosmicTP-PromptReco-v1','Data-Run2024G-CosmicTP-PromptReco-v1','Data-Run2024H-CosmicTP-PromptReco-v1','Data-Run2024I-CosmicTP-PromptReco-v1','Data-Run2024I-CosmicTP-PromptReco-v2','Data-Run2024J-CosmicTP-PromptReco-v1','Data-Run2025A-CosmicTP-PromptReco-v1','Data-Run2025A-CosmicTP-PromptReco-v2','Data-Run2025B-CosmicTP-PromptReco-v1','Data-Run2025C-CosmicTP-PromptReco-v1','Data-Run2025C-CosmicTP-PromptReco-v2']

# Define region and file name
region = 'SR'
file_2DA = f"histograms_v12/EaDM_Cosmics_Data_{region}.root"

# Define important histograms
pass_hist = ROOT.TH2F("hpass", "hpass; p_{T} (GeV);# of Hits", 7020, 0, 7020, 200, 0, 200)
fail_hist = ROOT.TH2F("hfail", "hfail; p_{T} (GeV);# of Hits", 7020, 0, 7020, 200, 0, 200)
pass_pT_up_hist = ROOT.TH2F("hpass_pTsyst_up", "hpass_pTsyst_up; p_{T} (GeV);# of Hits", 7020, 0, 7020, 200, 0, 200)
fail_pT_up_hist = ROOT.TH2F("hfail_pTsyst_up", "hfail_pTsyst_up; p_{T} (GeV);# of Hits", 7020, 0, 7020, 200, 0, 200)
pass_pT_down_hist = ROOT.TH2F("hpass_pTsyst_down", "hpass_pTsyst_down; p_{T} (GeV);# of Hits", 7020, 0, 7020, 200, 0, 200)
fail_pT_down_hist = ROOT.TH2F("hfail_pTsyst_down", "hfail_pTsyst_down; p_{T} (GeV);# of Hits", 7020, 0, 7020, 200, 0, 200)
pass_t0_up_hist = ROOT.TH2F("hpass_t0syst_up", "hpass_t0syst_up; p_{T} (GeV);# of Hits", 7020, 0, 7020, 200, 0, 200)
fail_t0_up_hist = ROOT.TH2F("hfail_t0syst_up", "hfail_t0syst_up; p_{T} (GeV);# of Hits", 7020, 0, 7020, 200, 0, 200)
pass_t0_down_hist = ROOT.TH2F("hpass_t0syst_down", "hpass_t0syst_down; p_{T} (GeV);# of Hits", 7020, 0, 7020, 200, 0, 200)
fail_t0_down_hist = ROOT.TH2F("hfail_t0syst_down", "hfail_t0syst_down; p_{T} (GeV);# of Hits", 7020, 0, 7020, 200, 0, 200)
pass_RNN_up_hist = ROOT.TH2F("hpass_RNNsyst_up", "hpass_RNNsyst_up; p_{T} (GeV);# of Hits", 7020, 0, 7020, 200, 0, 200)
fail_RNN_up_hist = ROOT.TH2F("hfail_RNNsyst_up", "hfail_RNNsyst_up; p_{T} (GeV);# of Hits", 7020, 0, 7020, 200, 0, 200)
pass_RNN_down_hist = ROOT.TH2F("hpass_RNNsyst_down", "hpass_RNNsyst_down; p_{T} (GeV);# of Hits", 7020, 0, 7020, 200, 0, 200)
fail_RNN_down_hist = ROOT.TH2F("hfail_RNNsyst_down", "hfail_RNNsyst_down; p_{T} (GeV);# of Hits", 7020, 0, 7020, 200, 0, 200)

# Define hpf prep file path
file = ROOT.TFile.Open('/Users/sanjitmasanam/Documents/CodingProjects/CMS/t0timing_chamber_study/Data_hpf_run3_22_23_24_part25_total.root')

# Define necessary lists for hpf file
pT_data = []
nHits_data = []
rnn_data = []
nTracks_data = []
eta_data = []
energy_data = []
rnn_t0_data = []

# Loop through labels
for i in range(len(labels)):
    print(i, labels[i])

    tree = file.Get(labels[i])

    # Loop over the tree entries
    for j in range(tree.GetEntries()):
        tree.GetEntry(j)
        validpTPass = getattr(tree, "validpTPass")
        if validpTPass == 0:
            continue
        # Get the value of the leaf
        pt = getattr(tree, "pT")
        nHits = getattr(tree, "nHits")
        RNNscore = getattr(tree, "RNNscore")
        RNNscore_t0 = getattr(tree, "RNNscore_t0")
        nTracks = getattr(tree, "nTracks")
        eta = getattr(tree, "eta")
        energy = getattr(tree, "energy")
        if pt > 7019: pt=7019

        # Append values to defined lists
        pT_data.append(pt)
        nHits_data.append(nHits)
        rnn_data.append(RNNscore)
        rnn_t0_data.append(RNNscore)
        nTracks_data.append(nTracks)
        eta_data.append(eta)
        energy_data.append(energy)

# Convert lists to arrays for boolean indexing
nHits_arr = np.array(nHits_data)
rnnScore_arr = np.array(rnn_data)
rnnScore_t0_arr = np.array(rnn_t0_data)
pT_arr = np.array(pT_data)
nTracks_arr = np.array(nTracks_data)
eta_arr = np.array(eta_data)
energy_arr = np.array(energy_data)

# Create histograms
if region == 'SR':
    pt_pass_arr = np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr >= 0.9999)]
    nHits_pass_arr = np.array(nHits_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr >= 0.9999)]
    pt_fail_arr = np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.9999)]
    nHits_fail_arr = np.array(nHits_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.9999)]

    t0_pt_pass_arr = np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr >= 0.9999)]
    t0_nHits_pass_arr = np.array(nHits_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr >= 0.9999)]
    t0_pt_fail_arr = np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.9999)]
    t0_nHits_fail_arr = np.array(nHits_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.9999)]

    rnn_up_pt_pass_arr = np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr > 0.99999)]
    rnn_up_nHits_pass_arr = np.array(nHits_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr > 0.99999)]
    rnn_up_pt_fail_arr = np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.99999)]
    rnn_up_nHits_fail_arr = np.array(nHits_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.99999)]

    rnn_down_pt_pass_arr = np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr > 0.999)]
    rnn_down_nHits_pass_arr = np.array(nHits_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr > 0.999)]
    rnn_down_pt_fail_arr = np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.999)]
    rnn_down_nHits_fail_arr = np.array(nHits_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.999)]
    
    print(np.array(pT_data).shape)

if region == 'VR':
    pt_pass_arr = np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr >= 0.45) & (rnnScore_arr < 0.9999)]
    nHits_pass_arr = np.array(nHits_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr >= 0.45) & (rnnScore_arr < 0.9999)]
    pt_fail_arr = np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.45)]
    nHits_fail_arr = np.array(nHits_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.45)]

    t0_pt_pass_arr = np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_t0_arr >= 0.45) & (rnnScore_t0_arr < 0.9999)]
    t0_nHits_pass_arr = np.array(nHits_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_t0_arr >= 0.45) & (rnnScore_t0_arr < 0.9999)]
    t0_pt_fail_arr = np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_t0_arr < 0.45)]
    t0_nHits_fail_arr = np.array(nHits_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_t0_arr < 0.45)]

    rnn_up_pt_pass_arr = np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr >= 0.50) & (rnnScore_arr < 0.99999)]
    rnn_up_nHits_pass_arr = np.array(nHits_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr >= 0.50) & (rnnScore_arr < 0.99999)]
    rnn_up_pt_fail_arr = np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.50)]
    rnn_up_nHits_fail_arr = np.array(nHits_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.50)]

    rnn_down_pt_pass_arr = np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr >= 0.40) & (rnnScore_arr < 0.999)]
    rnn_down_nHits_pass_arr = np.array(nHits_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr >= 0.40) & (rnnScore_arr < 0.999)]
    rnn_down_pt_fail_arr = np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.40)]
    rnn_down_nHits_fail_arr = np.array(nHits_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 10) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.40)]
    print(len(np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9)]),len(np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 180)]),len(np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 180) & (np.isin(nTracks_arr, [1, 2]))]),len(np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 180) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.9999)  & (rnnScore_arr > -0.1)]),len(np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 180) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.99)  & (rnnScore_arr > -0.1)]),len(np.array(pT_data)[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 180) & (np.isin(nTracks_arr, [1, 2])) & (rnnScore_arr < 0.9)  & (rnnScore_arr > -0.1)]))

print(pt_pass_arr.shape, pt_fail_arr.shape)

# Vary pT and fill normal/pT systematic histograms
for k, l in zip(pt_pass_arr, nHits_pass_arr):
    pass_hist.Fill(k, l)
    if k < 200:
        pass_pT_up_hist.Fill(k + (0.003 * k), l)
        pass_pT_down_hist.Fill(k - (0.003 * k), l)
    elif k >= 200 and k < 500:
        pass_pT_up_hist.Fill(k + (0.005 * k), l)
        pass_pT_down_hist.Fill(k - (0.005 * k), l)
    else:
        pass_pT_up_hist.Fill(k + (0.01 * k), l)
        pass_pT_down_hist.Fill(k - (0.01 * k), l)

for k, l in zip(pt_fail_arr, nHits_fail_arr):
    fail_hist.Fill(k, l)
    if k < 200:
        fail_pT_up_hist.Fill(k + (0.003 * k), l)
        fail_pT_down_hist.Fill(k - (0.003 * k), l)
    elif k >= 200 and k < 500:
        fail_pT_up_hist.Fill(k + (0.005 * k), l)
        fail_pT_down_hist.Fill(k - (0.005 * k), l)
    else:
        fail_pT_up_hist.Fill(k + (0.01 * k), l)
        fail_pT_down_hist.Fill(k - (0.01 * k), l)

# Fill other systematic histograms
for k, l in zip(t0_pt_pass_arr, t0_nHits_pass_arr):
    pass_t0_up_hist.Fill(k, l)
    pass_t0_down_hist.Fill(k, l)

for k, l in zip(t0_pt_fail_arr, t0_nHits_fail_arr):
    fail_t0_up_hist.Fill(k, l)
    fail_t0_down_hist.Fill(k, l)

for k, l in zip(rnn_up_pt_pass_arr, rnn_up_nHits_pass_arr):
    pass_RNN_up_hist.Fill(k, l)

for m, n in zip(rnn_down_pt_pass_arr, rnn_down_nHits_pass_arr):
    pass_RNN_down_hist.Fill(m, n)

for k, l in zip(rnn_up_pt_fail_arr, rnn_up_nHits_fail_arr):
    fail_RNN_up_hist.Fill(k, l)

for m, n in zip(rnn_down_pt_fail_arr, rnn_down_nHits_fail_arr):
    fail_RNN_down_hist.Fill(m, n)

# Create root file, write histograms, and close
root_file = ROOT.TFile(file_2DA, "RECREATE")
pass_hist.Write()
fail_hist.Write()
pass_pT_up_hist.Write()
pass_pT_down_hist.Write()
fail_pT_up_hist.Write()
fail_pT_down_hist.Write()
pass_t0_up_hist.Write()
pass_t0_down_hist.Write()
fail_t0_up_hist.Write()
fail_t0_down_hist.Write()
pass_RNN_up_hist.Write()
pass_RNN_down_hist.Write()
fail_RNN_up_hist.Write()
fail_RNN_down_hist.Write()
root_file.Close()