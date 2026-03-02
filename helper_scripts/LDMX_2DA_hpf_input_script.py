import uproot, ROOT, os, inspect, numpy as np, copy, datetime, matplotlib.pyplot as plt, math, scipy.stats, pandas as pd

# Input TH2F files
files = ["ecal_pn_v15_8gev_histos.root",
        "signal_mass_1MeV_v15_8GeV_histos.root",
        "signal_mass_10MeV_v15_8GeV_histos.root",
        "signal_mass_100MeV_v15_8GeV_histos.root",
        "signal_mass_1000MeV_v15_8GeV_histos.root"]

# Leaf to get
var_interest = "RecoilTrackPT_BDTSplit" # RecoilTrackPT_BDTLooseSplit
labels = ['PNBkg_SR', 'Signal_M1MeV_SR', 'Signal_M10MeV_SR', 'Signal_M100MeV_SR', 'Signal_M1000MeV_SR']


label_counter = 0
for file in files:
    # Get TH2F file & targetPN file
    f = ROOT.TFile.Open(f'/Users/sanjitmasanam/Documents/CodingProjects/LDMX/Experiments/LDMX_2DA/files/{file}')
    targetPN_f = ROOT.TFile.Open('/Users/sanjitmasanam/Documents/CodingProjects/LDMX/Experiments/LDMX_2DA/files/NoHcalLDMX_PNbkg_SR_random.root')
    tree = f.Get("CutBasedDM")

    # Do ProjY to get 1D histogram along recoil track pT axis
    hpass_tmp = tree.Get(var_interest).ProjectionY("hpass_tmp", 2, 2)
    hfail_tmp = tree.Get(var_interest).ProjectionY("hfail_tmp", 1, 1)

    # If make bkg hpf, also grab targetPN 1D histograms of recoil track pT
    if label_counter == 0:
        hpass_targetPN = targetPN_f.Get("hpass;1")
        hfail_targetPN = targetPN_f.Get("hfail;1")

        hpass_targetPN.SetName("hpass_targetPN")
        hfail_targetPN.SetName("hfail_targetPN")

        hpass_targetPN_tmp = hpass_targetPN.ProjectionY("hpass_targetPN_tmp", 1, -1)
        hfail_targetPN_tmp = hfail_targetPN.ProjectionY("hfail_targetPN_tmp", 1, -1)
    
    # Normalize ecalPN/targetPN 1D histograms to 5e13 normalization
    if label_counter == 0:
        targetPN_norm_const = 51717*0.006 / (hpass_targetPN_tmp.Integral()+hfail_targetPN_tmp.Integral())
        hpass_targetPN_tmp.Scale(normtargetPN_norm_const_const)
        hfail_targetPN_tmp.Scale(targetPN_norm_const)
        print(hpass_targetPN_tmp.Integral(),hfail_targetPN_tmp.Integral()) # Check normalization worked

        ecalPN_norm_const = 16148103 / (hpass_tmp.Integral()+hfail_tmp.Integral())
        hfail_tmp.Scale(ecalPN_norm_const)
        hpass_tmp.Scale(ecalPN_norm_const)
        print(hpass_tmp.Integral(), hfail_tmp.Integral()) # Check normalization worked

    # Normalize sig to 20 events
    if label_counter != 0:
        sig_norm_const = 20 / (hpass_tmp.Integral()+hfail_tmp.Integral())
        hfail_tmp.Scale(sig_norm_const)
        hpass_tmp.Scale(sig_norm_const)

    # Check if file exists and the 1D ecalPN histogram was properly projected
    if hpass_tmp is None or hfail_tmp is None:
        raise RuntimeError("ProjectionY returned None! Check f exists.")

    # Define final histograms to save to ROOT file
    hpass = ROOT.TH2D("hpass", "hpass; p_{T} (MeV);# of Hits", 1000, 0, 1000, 10, 0, 10)
    hfail = ROOT.TH2D("hfail", "hfail; p_{T} (MeV);# of Hits", 1000, 0, 1000, 10, 0, 10)

    # Fill final histograms
    for i in range(1, hpass_tmp.GetNbinsX()+1): # Loop over hpass_tmp bins
        x_value = hpass_tmp.GetBinCenter(i)
        y_value = np.random.rand()*10
        hpass.Fill(x_value, y_value, hpass_tmp.GetBinContent(i)) # Fill x, y bin of hpass with contents of hpass_tmp

    for i in range(1, hfail_tmp.GetNbinsX()+1): # Loop over hfail_tmp bins
        x_value = hfail_tmp.GetBinCenter(i)
        y_value = np.random.rand()*10
        hfail.Fill(x_value, y_value, hfail_tmp.GetBinContent(i))

    if label_counter == 0:
        # Fill final histograms w/ targetPN data
        for i in range(1, hpass_targetPN_tmp.GetNbinsX()+1): # Loop over hpass_targetPN_tmp bins
            x_value = hpass_targetPN_tmp.GetBinCenter(i)
            y_value = np.random.rand()*10
            hpass.Fill(x_value, y_value, hpass_targetPN_tmp.GetBinContent(i))

        for i in range(1, hfail_targetPN_tmp.GetNbinsX()+1): # Loop over hfail_targetPN_tmp bins
            x_value = hfail_targetPN_tmp.GetBinCenter(i)
            y_value = np.random.rand()*10
            hfail.Fill(x_value, y_value, hfail_targetPN_tmp.GetBinContent(i))

    # Set histograms to desired names
    hpass.SetName("hpass")
    hfail.SetName("hfail")

    # Check # of events are reasonable for each histogram
    print(hpass.Integral())
    print(hfail.Integral())

    # Save PASS/FAIL histograms to ROOT file
    root_file = ROOT.TFile(f"2DA_files_v4/NoHcalLDMX_{labels[label_counter]}.root", "RECREATE")
    hpass.Write()
    hfail.Write()
    root_file.Close()
    label_counter += 1