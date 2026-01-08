# plot transfer factor
import ROOT
import tdrstyle
ROOT.gROOT.SetBatch(True)

tdrstyle.setTDRStyle()

if __name__ == "__main__":
    
    binning = "v6alt"
    inVersion = "v13"
    region = 'VR2'
    blinding = 'Unblind'
    extra = '3000GeV_normalized'
    
    for MdM_val, tf in zip([3000,3000,3000], ['0x0', '2x0', '1x0']):
        MdM_val = int(MdM_val)
        print(f"MdM: {MdM_val}")
        # rootdir = f'/home/users/dazhang/works/phaseSpace/BlackHoleSearch/CMSSW_14_1_0_pre4/src/rpf{tf}_Binning{binning}_Blind_In{inVersion}_Multi4_FullScan_MD2TeV'
        # rootdir = f'/home/users/dazhang/works/phaseSpace/BlackHoleSearch/CMSSW_14_1_0_pre4/src/rpf{tf}_Binning{binning}_Blind_In{inVersion}_Multi4'
        rootdir = f'rpfmult_Binning{binning}_Input{inVersion}_{region}_{blinding}_{extra}'
        # rootdir = f'/home/users/dazhang/works/phaseSpace/BlackHoleSearch/CMSSW_14_1_0_pre4/src/rpf{tf}_Binning{binning}_Unblind_In{inVersion}_Multi4_FullScan_MD2TeV'
        # rootdir = f'/home/users/dazhang/works/phaseSpace/BlackHoleSearch/CMSSW_14_1_0_pre4/src/rpf{tf}_Binning{binning}_Blind_In{inVersion}_Multi4_Extrapol'
        f = ROOT.TFile.Open(f"{rootdir}/Signal_M{MdM_val}GeV-{tf.lower()}_area/plots_fit_b/all_plots.root")
        # get the histogram
        h_fail = f.Get("TotalBkg_fail_postfit_projx2")
        h_pass = f.Get("TotalBkg_pass_postfit_projx2")
        # create a canvas
        c = ROOT.TCanvas(f"c_{MdM_val}_{binning}", "", 800, 600)
        # devide the histogram
        h_ratio = h_pass.Clone("h_ratio")
        h_ratio.Divide(h_fail)
        h_ratio.SetLineColor(ROOT.kBlack)
        h_ratio.SetLineWidth(2)
        # draw the histogram
        h_ratio.Draw("hist ][ C")
        # set the axis
        h_ratio.GetXaxis().SetTitle("p_{T} (GeV)")
        h_ratio.GetYaxis().SetTitle("Transfer Factor")
        # h_ratio.GetYaxis().SetRangeUser(0, 0.5)
        h_ratio.GetXaxis().SetTitleSize(0.05)
        h_ratio.GetYaxis().SetTitleSize(0.05)
        tdrstyle.drawCMSInternal()
        # save the canvas
        c.SaveAs(f"TF_plots/rpf{tf}_Binning{binning}_Input{inVersion}_{region}_{blinding}_{extra}_TF.png")
        # close the file
        f.Close()
        print(f"DM: {MdM_val} GeV + {tf} TF is done.")
