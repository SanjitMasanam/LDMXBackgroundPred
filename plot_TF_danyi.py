# plot transfer factor
import ROOT
import array
import tdrstyle
ROOT.gROOT.SetBatch(True)

tdrstyle.setTDRStyle()
ROOT.gStyle.SetErrorX(0.5)  # Set X error to half the bin width

def convert_hist_to_tev(h_gev):
    """Convert histogram from GeV to TeV while preserving bin edges"""
    n_bins = h_gev.GetNbinsX()
    
    # Get original bin edges in GeV
    bin_edges_gev = []
    for i in range(1, n_bins + 2):  # +2 for n_bins+1 edges
        bin_edges_gev.append(h_gev.GetBinLowEdge(i))
    
    # Convert edges to TeV
    bin_edges_tev = [x / 1000.0 for x in bin_edges_gev]
    
    # Create new histogram with converted bin edges
    h_tev = ROOT.TH1D(
        f"{h_gev.GetName()}_tev",
        f"{h_gev.GetTitle()};Energy [TeV];Entries",
        n_bins,
        array.array('d', bin_edges_tev)
    )
    
    # Copy bin contents and errors (including underflow/overflow)
    for i in range(0, n_bins + 2):  # 0=underflow, n_bins+1=overflow
        h_tev.SetBinContent(i, h_gev.GetBinContent(i))
        h_tev.SetBinError(i, h_gev.GetBinError(i))
    
    return h_tev

if __name__ == "__main__":
    
    binning = "V5"
    inVersion = "V21" #"V21"
    tf = "1x0" # "Expo"
    
    # for MBH_val in range(3000, 12000, 1000):
    for MBH_val in [10000]:
        MBH_val = int(MBH_val)
        print(f"MBH: {MBH_val}")
        
        # ===========================
        # Get histograms from all_plots.root
        # ===========================
        # rootdir = f'/home/users/dazhang/works/phaseSpace/BlackHoleSearch/CMSSW_14_1_0_pre4/src/rpf{tf}_Binning{binning}_Blind_In{inVersion}_Multi4_FullScan_MD2TeV'
        # rootdir = f'/home/users/dazhang/works/phaseSpace/BlackHoleSearch/CMSSW_14_1_0_pre4/src/rpf{tf}_Binning{binning}_Blind_In{inVersion}_Multi4'
        rootdir = f'/home/users/smasanam/EarthAsDMProject/CMSSW_14_1_0_pre4/src/rpfmult_Binningv6alt_Inputv13_VR2_Unblind_3000GeV_normalized'
        # rootdir = f'/home/users/dazhang/works/phaseSpace/BlackHoleSearch/CMSSW_14_1_0_pre4/src/rpf{tf}_Binning{binning}_Unblind_In{inVersion}_Multi4'
        # rootdir = f'/home/users/dazhang/works/phaseSpace/BlackHoleSearch/CMSSW_14_1_0_pre4/src/rpf{tf}_Binning{binning}_Unblind_In{inVersion}_Multi4_FullScan_MD2TeV'
        # rootdir = f'/home/users/dazhang/works/phaseSpace/BlackHoleSearch/CMSSW_14_1_0_pre4/src/rpf{tf}_Binning{binning}_Blind_In{inVersion}_Multi4_Extrapol'
        f = ROOT.TFile.Open(f"/home/users/smasanam/EarthAsDMProject/CMSSW_14_1_0_pre4/src/rpfmult_Binningv6alt_Inputv13_VR2_Unblind_3000GeV_normalized/Signal_M3000GeV-1x0_area/plots_fit_b/all_plots.root")
        # get the histogram
        h_fail = f.Get("TotalBkg_fail_postfit_projx2")
        h_pass = f.Get("TotalBkg_pass_postfit_projx2")
        h_data_fail = f.Get("data_obs_fail_postfit_projx2")
        h_data_pass = f.Get("data_obs_pass_postfit_projx2")
        
        # Print errors of the original histograms h_fail and h_pass
        print("Original Histogram Errors:")
        for h, name in zip([h_fail, h_pass], ["h_fail", "h_pass"]):
            for i in range(1, h.GetNbinsX() + 1):
                print(f"{name} - Bin {i}: Content={h.GetBinContent(i):.3f}, Error = {h.GetBinError(i):.3f}")

        print("Data Histogram Errors:")
        for h, name in zip([h_data_fail, h_data_pass], ["h_data_fail", "h_data_pass"]):
            for i in range(1, h.GetNbinsX() + 1):
                print(f"{name} - Bin {i}: Content={h.GetBinContent(i):.3f}, Error = {h.GetBinError(i):.3f}")


        # ===========================
        # Get fit results from fitDiagnosticsTest.root
        # ===========================
        f_fit = ROOT.TFile.Open(f"{rootdir}/Signal_M3000GeV-{tf.lower()}_area/fitDiagnosticsTest.root")
        fit_result = f_fit.Get("fit_b")
        final_parameters = fit_result.floatParsFinal()
        # get the parameter of interest
        #fit_2x0_par0_value = None
        #fit_2x0_par0_error = None
        #fit_2x0_par1_value = None
        #fit_2x0_par1_error = None
        #fit_2x0_par2_value = None
        #fit_2x0_par2_error = None
        #fit_2x0_par3_value = None
        #fit_2x0_par3_error = None
        param = final_parameters.find("CMS_AN23122_Background_rpf_2x0_par0")
        #if param:
            #fit_expo_par0 = ROOT.RooRealVar(param)
            #fit_2x0_par0_value = fit_expo_par0.getVal()
            #fit_2x0_par0_error = fit_expo_par0.getError()
        param = final_parameters.find("CMS_AN23122_Background_rpf_2x0_par1")
        #if param:
            #fit_expo_par1 = ROOT.RooRealVar(param)
            #fit_2x0_par1_value = fit_expo_par1.getVal()
            #fit_2x0_par1_error = fit_expo_par1.getError()
        param = final_parameters.find("CMS_AN23122_Background_rpf_2x0_par2")
        #if param:
            #fit_expo_par2 = ROOT.RooRealVar(param)
            #fit_2x0_par2_value = fit_expo_par2.getVal()
            #fit_2x0_par2_error = fit_expo_par2.getError()
        param = final_parameters.find("CMS_AN23122_Background_rpf_2x0_par3")
        #if param:
            #fit_expo_par3 = ROOT.RooRealVar(param)
            #fit_2x0_par3_value = fit_expo_par3.getVal()
            #fit_2x0_par3_error = fit_expo_par3.getError()
        
        print("Fitting exponential TF: e^(-p0 * x + p1)")
        #print(f"p0: {expo_par0_value} ± {expo_par0_error}, p1: {expo_par1_value} ± {expo_par1_error}")
        
        # Fitting exponential TF: e^(-p0 * x + p1)
        #tf_fit = ROOT.TF1("tf_fit", f"0.1*([0]+[1]*x+[2]*x**2)*([3])", 0, 1, 2, 3) # TeV
        #tf_fit.SetParameter(0, fit_2x0_par0_value)
        #tf_fit.SetParameter(1, fit_2x0_par1_value)
        #tf_fit.SetParError(0, fit_2x0_par0_error)
        #tf_fit.SetParError(1, fit_2x0_par1_error)
        #tf_fit.SetParameter(2, fit_2x0_par2_value)
        #tf_fit.SetParameter(3, fit_2x0_par3_value)
        #tf_fit.SetParError(2, fit_2x0_par2_error)
        #tf_fit.SetParError(3, fit_2x0_par3_error)

        #tf_upper_envelope = ROOT.TF1("tf_upper_envelope", f"0.1*([0]+[1]*x+[2]*x**2)*([3])", 0, 1, 2, 3)
        #tf_upper_envelope.SetParameter(0, fit_2x0_par0_value + fit_2x0_par0_error)
        #tf_upper_envelope.SetParameter(1, fit_2x0_par1_value + fit_2x0_par1_error)
        #tf_upper_envelope.SetParameter(2, fit_2x0_par2_value + fit_2x0_par2_error)
        #tf_upper_envelope.SetParameter(3, fit_2x0_par3_value + fit_2x0_par3_error)
        
        #tf_lower_envelope = ROOT.TF1("tf_lower_envelope", f"0.1*([0]+[1]*x+[2]*x**2)*([3])", 0, 1, 2, 3)
        #tf_lower_envelope.SetParameter(0, fit_2x0_par0_value - fit_2x0_par0_error)
        #tf_lower_envelope.SetParameter(1, fit_2x0_par1_value - fit_2x0_par1_error)
        #tf_lower_envelope.SetParameter(2, fit_2x0_par2_value - fit_2x0_par2_error)
        #tf_lower_envelope.SetParameter(3, fit_2x0_par3_value - fit_2x0_par3_error)


                
        # print the value of the fit function
        # print(f"TF fit at x=0: {tf_fit.Eval(0)}")
        # print(f"TF fit at x=2: {tf_fit.Eval(2)}")
        # print(f"TF fit at x=4: {tf_fit.Eval(4)}")

        # ===========================
        # Draw histograms
        # ===========================
        # create a canvas
        c = ROOT.TCanvas(f"c_{MBH_val}_{binning}", "", 800, 600)
        # devide the histogram
        h_ratio = h_pass.Clone("h_ratio")
        h_ratio.Divide(h_fail)
        
        # Print the h_ratio errors
        print("h_ratio Errors:")
        for i in range(1, h_ratio.GetNbinsX() + 1):
            bin_center = h_ratio.GetXaxis().GetBinCenter(i)
            bin_content = h_ratio.GetBinContent(i)
            bin_error = h_ratio.GetBinError(i)
            print(f"Bin {i}: Center={bin_center:.3f}, Content={bin_content:.3f}, Error = {bin_error:.6f}")
        # Set the last bin erro to 0
        h_ratio.SetBinError(h_ratio.GetNbinsX(), 0.0)
        
        
        h_ratio = h_ratio  # Convert to TeV
        h_ratio.SetLineColor(ROOT.kBlack)
        h_ratio.SetLineWidth(1)
        
        h_ratio_data = h_data_pass.Clone("h_ratio_data")
        h_ratio_data.Divide(h_data_fail)
        h_ratio_data = h_ratio_data  # Convert to TeV
        h_ratio_data.SetMarkerStyle(20) # Circle marker
        h_ratio_data.SetMarkerSize(1.0)
        h_ratio_data.SetLineWidth(2)
        h_ratio_data.SetMarkerColor(ROOT.kRed)
        h_ratio_data.SetLineColor(ROOT.kRed)
        
        # draw the histogram
        # h_ratio.Draw("hist ][ C")
        h_ratio.SetFillColor(ROOT.kGray + 2) # A light gray color
        h_ratio.SetFillStyle(3001)  # A common sparse fill pattern
        h_ratio.SetMarkerSize(0.)
        h_ratio.Draw("E2")
        h_ratio_clone = h_ratio.Clone("h_ratio_clone")
        h_ratio_clone.SetLineWidth(3)
        h_ratio_clone.SetFillColor(0)
        h_ratio_clone.Draw("hist SAME")
        h_ratio_data.Draw("SAME E1")
        # set the axis
        # Set the y range to [0, 2.5]
        #h_ratio.GetYaxis().SetRangeUser(0, 2.5)
        # h_ratio.GetYaxis().SetRangeUser(0, 0.2)
        h_ratio.GetXaxis().SetTitle("p_{T} [GeV]")
        h_ratio.GetYaxis().SetTitle("Transfer Factor")
        h_ratio.GetYaxis().SetRangeUser(0, 0.0003)
        h_ratio.GetXaxis().SetTitleSize(0.05)
        h_ratio.GetYaxis().SetTitleSize(0.05)
        #tdrstyle.drawCMSLabel(label="Preliminary")
        
        
        # Create a TGraph to map the TF from 0-1 to 2-13 TeV range
        n_bins = h_ratio.GetXaxis().GetNbins()
        bin_centers = []
        for i in range(1, n_bins + 1):  # Bins are 1-indexed in ROOT
            bin_center = h_ratio.GetXaxis().GetBinCenter(i)
            bin_centers.append(bin_center)
        bin_centers = array.array('d', bin_centers)  # Convert to array for TGraph
        TF_centers = array.array('d', [((x-2) / 11) for x in bin_centers])  # Transfer centers in [0, 1] range
        #tf_values = array.array('d', [tf_fit.Eval(x) for x in TF_centers])  # Evaluate the TF fit at these centers
        #tf_values_upper = array.array('d', [tf_upper_envelope.Eval(x) for x in TF_centers])
        #tf_values_lower = array.array('d', [tf_lower_envelope.Eval(x) for x in TF_centers])
        ey_low_values = array.array('d', [0.0] * n_bins)
        ey_high_values = array.array('d', [0.0] * n_bins)
        ex_values = array.array('d', [0.0] * n_bins) # X errors, usually 0 for a band
        #for i in range(n_bins):
        #    # Error from central to lower bound
        #    ey_low_values[i] = tf_values[i] - tf_values_lower[i]
        #    # Error from central to upper bound
        #    ey_high_values[i] = tf_values_upper[i] - tf_values[i]
        # tf_graph.SetName("tf_graph")
        # tf_graph.SetTitle("Transfer Factor Graph;S_{T} [TeV];TF")
        # tf_graph.SetLineColor(ROOT.kGreen + 2)
        # tf_graph.SetLineWidth(3)
        # tf_graph.SetLineStyle(2)
        # tf_graph.Draw("SAME L")
        #error_band_graph = ROOT.TGraphAsymmErrors(n_bins, bin_centers, tf_values,
        #                                  ex_values, ex_values, # No X errors
        #                                  ey_low_values, ey_high_values)
        #error_band_graph.SetFillColor(ROOT.kCyan + 2) # A nice light blue/green
        #error_band_graph.SetFillStyle(3001)         # A common sparse fill pattern  
        #error_band_graph.Draw("SAME 3")
        #tf_graph = ROOT.TGraph(len(bin_centers), bin_centers, tf_values)
        #tf_graph.SetLineColor(ROOT.kBlue)
        #tf_graph.SetLineWidth(2)
        #tf_graph.Draw("L same")
        
        
        # tf_upper_graph = ROOT.TGraph(len(bin_centers), array.array('d',bin_centers), tf_values_upper)
        # tf_upper_graph.SetName("tf_upper_graph")
        # tf_upper_graph.SetLineColor(ROOT.kGreen + 2)
        # tf_upper_graph.SetLineWidth(1)
        # tf_upper_graph.SetLineStyle(2)
        # tf_upper_graph.Draw("SAME L")
        # tf_lower_graph = ROOT.TGraph(len(bin_centers), array.array('d',bin_centers), tf_values_lower)
        # tf_lower_graph.SetName("tf_lower_graph")
        # tf_lower_graph.SetLineColor(ROOT.kGreen + 2)
        # tf_lower_graph.SetLineWidth(1)
        # tf_lower_graph.SetLineStyle(2)
        # tf_lower_graph.Draw("SAME L")
        
        
        legend = ROOT.TLegend(0.65, 0.65, 0.9, 0.9) # x1, y1, x2, y2 (NDC)
        legend.AddEntry(h_ratio_clone, "Bkg PASS/FAIL", "l")
        legend.AddEntry(h_ratio, "Bkg Stat. Unc.", "f")
        legend.AddEntry(h_ratio_data, "Data PASS/FAIL", "lep") # "lep" for line, error, and point
        #legend.AddEntry(tf_graph, f"Fitted TF", "l")
        #legend.AddEntry(error_band_graph, "TF Uncertainty Band", "f")
        legend.SetBorderSize(0)
        legend.SetFillColor(0)
        legend.SetFillStyle(0)
        legend.SetTextSize(0.035)
        legend.Draw()
        
        # Draw a text show it is S+B fit
        fit_text = ROOT.TLatex(0.65, 0.97, f"background-only (b-only) fit")
        fit_text.SetNDC(True)
        fit_text.SetTextSize(0.035)
        fit_text.Draw()
        
        # save the canvas
        c.SaveAs(f"test.png")
        c.SaveAs(f"test.pdf")
        # close the file
        f.Close()
        print(f"MBH: {MBH_val} is done.")
        
        
        '''
        # Create a new canvas for the TF fit
        c_fit = ROOT.TCanvas(f"c_fit_{MBH_val}_{binning}", "", 800, 600)
        tf_fit.Draw()
        tf_fit.GetXaxis().SetTitle("S_{T} [TeV]")
        tf_fit.GetYaxis().SetTitle("Transfer Factor")

        # tf_fit.GetYaxis().SetRangeUser(0, 1.5)
        tf_fit.GetXaxis().SetTitleSize(0.05)
        tf_fit.GetYaxis().SetTitleSize(0.05)
        tdrstyle.drawCMSInternal()
        # Save the TF fit canvas
        c_fit.SaveAs(f"plots/rpf{tf}_Binning{binning}_In{inVersion}_Multi4_Signal_B1_MD2000_MBH{MBH_val}_n2_tf_fit.png")
        '''
