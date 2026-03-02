import uproot, ROOT, os, inspect, numpy as np, copy, datetime, matplotlib.pyplot as plt, math, scipy.stats, pandas as pd

files = ["ecal_pn_v15_8gev_histos.root",
        "signal_mass_1MeV_v15_8GeV_histos.root",
        "signal_mass_10MeV_v15_8GeV_histos.root",
        "signal_mass_100MeV_v15_8GeV_histos.root",
        "signal_mass_1000MeV_v15_8GeV_histos.root"]

var_interest = "RecoilTrackPT_BDTSplit"
labels = ['EcalPNBkg_SR', 'Signal_M1MeV_SR', 'Signal_M10MeV_SR', 'Signal_M100MeV_SR', 'Signal_M1000MeV_SR']

label_counter = 0
for file in files:
    # Define hpf prep file path
    f = ROOT.TFile.Open(f'/Users/sanjitmasanam/Documents/CodingProjects/LDMX/Experiments/LDMX_2DA/files/{file}')
    targetPN_f = ROOT.TFile.Open('/Users/sanjitmasanam/Documents/CodingProjects/LDMX/Experiments/LDMX_2DA/files/NoHcalLDMX_PNbkg_SR_random.root')
    tree = f.Get("CutBasedDM")

    hpass_tmp = tree.Get(var_interest).ProjectionY("hpass_tmp", 2, 2)
    hfail_tmp = tree.Get(var_interest).ProjectionY("hfail_tmp", 1, 1)

    if label_counter == 0:
        hpass_targetPN = targetPN_f.Get("hpass;1")
        hfail_targetPN = targetPN_f.Get("hfail;1")

        hpass_targetPN.SetName("hpass_targetPN")
        hfail_targetPN.SetName("hfail_targetPN")

        hpass_targetPN_tmp = hpass_targetPN.ProjectionY("hpass_targetPN_tmp", 1, -1)
        hfail_targetPN_tmp = hfail_targetPN.ProjectionY("hfail_targetPN_tmp", 1, -1)

        norm_const = 51717*0.006 / (hpass_targetPN_tmp.Integral()+hfail_targetPN_tmp.Integral())
        hpass_targetPN_tmp.Scale(norm_const)
        hfail_targetPN_tmp.Scale(norm_const)
        print(hpass_targetPN_tmp.Integral(),hfail_targetPN_tmp.Integral())

    if label_counter == 0:
        norm_const = 16148103 / (hpass_tmp.Integral()+hfail_tmp.Integral())
        hfail_tmp.Scale(norm_const)
        hpass_tmp.Scale(norm_const)
        print(hpass_tmp.Integral(), hfail_tmp.Integral())

    if label_counter != 0:
        norm_const = 20 / (hpass_tmp.Integral()+hfail_tmp.Integral())
        hfail_tmp.Scale(norm_const)
        hpass_tmp.Scale(norm_const)

    if hpass_tmp is None or hfail_tmp is None:
        raise RuntimeError("ProjectionX returned None! Check your source histogram.")

    hpass = ROOT.TH2D("hpass", "hpass; p_{T} (MeV);# of Hits", 10000, 0, 10000, 10, 0, 10)
    hfail = ROOT.TH2D("hfail", "hfail; p_{T} (MeV);# of Hits", 10000, 0, 10000, 10, 0, 10)

    for i in range(1, hpass.GetNbinsX()+1):  # ROOT bins start at 1
        x_value = hpass_tmp.GetBinCenter(i)    # bin center of the projection
        y_value = np.random.rand()*10        # corresponding Y value
        if label_counter == 0: hpass.Fill(x_value, y_value, hpass_tmp.GetBinContent(i)+hpass_targetPN_tmp.GetBinContent(i))
        else: hpass.Fill(x_value, y_value, hpass_tmp.GetBinContent(i))

    for i in range(1, hfail.GetNbinsX()+1):  # ROOT bins start at 1
        x_value = hfail_tmp.GetBinCenter(i)      # bin center of the projection
        y_value = np.random.rand()*10         # corresponding Y value
        if label_counter == 0: hfail.Fill(x_value, y_value, hfail_tmp.GetBinContent(i)+hfail_targetPN_tmp.GetBinContent(i))
        else: hfail.Fill(x_value, y_value, hfail_tmp.GetBinContent(i))

    hpass.SetName("hpass")
    hfail.SetName("hfail")

    print(hpass.Integral())
    print(hfail.Integral())

    root_file = ROOT.TFile(f"2DA_files_v3/NoHcalLDMX_{labels[label_counter]}.root", "RECREATE")
    hpass.Write()
    hfail.Write()
    root_file.Close()
    label_counter += 1