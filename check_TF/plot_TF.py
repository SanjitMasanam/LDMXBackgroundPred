# plot transfer factor
import ROOT
#import tdrstyle
ROOT.gROOT.SetBatch(True)


if __name__ == "__main__":
    
    region = 'VR'
    binning = "v3"
    inVersion = "v4"
    tf = "1x0" # "Expo"
    
    # for MBH_val in range(3000, 12000, 1000):
    #for MBH_val in [5000]:
    MBH_val = 500
    print(f"MBH: {MBH_val}")
    rootdir = f'/home/users/smasanam/EarthAsDMProject/CMSSW_14_1_0_pre4/src/rpf{tf}_Binning{binning}_Input{inVersion}_{region}_Unblind'
    f = ROOT.TFile.Open(f"{rootdir}/Signal_M500GeV-{tf.lower()}_area/plots_fit_b/all_plots.root")
    # get the histogram
    h_fail = f.Get("TotalBkg_fail_postfit_projx2")
    h_pass = f.Get("TotalBkg_pass_postfit_projx2")
    # create a canvas
    c = ROOT.TCanvas(f"c_{MBH_val}_{binning}", "", 800, 600)
    # devide the histogram
    h_ratio = h_pass.Clone("h_ratio")
    h_ratio.Divide(h_fail)
    # draw the histogram
    h_ratio.Draw("hist")
    # set the axis
    h_ratio.GetXaxis().SetTitle("ST [MeV]")
    h_ratio.GetYaxis().SetTitle("Transfer Factor")
    h_ratio.GetYaxis().SetRangeUser(0, 0.1)
    # save the canvas
    c.SaveAs(f"plots/rpf{tf}_Binning{binning}_Input{inVersion}_{region}_Unblind.png")
    # close the file
    f.Close()
    print(f"MBH: {MBH_val} is done.")
