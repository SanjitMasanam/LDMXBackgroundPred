import ROOT
import sys
import pickle

ROOT.gStyle.SetPadRightMargin(0.13)
ROOT.gROOT.SetBatch(True)

# phenoContour = ROOT.TGraph("phenoContour.csv", "%lg,%lg")
# #phenoContour.SetFillColorAlpha(ROOT.kBlue-2,0.2)
# phenoContour.SetFillColorAlpha(ROOT.kBlack,0.99)
# phenoContour.SetFillStyle(3005)
# phenoContour.SetLineColor(ROOT.kBlack)
# phenoContour.SetLineWidth(2)

with open('output_BR100pct.root.expectedSurface.pkl', 'rb') as f:
#with open('output_BR100pct.root.observedSurface.pkl', 'rb') as f:
    data = pickle.load(f)

xPoints = data["x"].flatten()
yPoints = data["y"].flatten()
zPoints = data["z"].flatten()

result = list(zip(xPoints, yPoints, zPoints))

epsilon = [1.000000e-08,2.000000e-08,3.000000e-08,4.000000e-08,5.000000e-08,6.000000e-08,7.000000e-08,8.000000e-08,9.000000e-08,1.000000e-07]
dmMass = [3000,4000,5000,6000,7000,8000,9000,10000]

graph = ROOT.TGraph2D()

for point in result:
    x, y, z = point
    graph.SetPoint(graph.GetN(), x, y, z)
 
graphOrig = ROOT.TGraph()
for x in dmMass :
  for y in epsilon :
    graphOrig.SetPoint(graphOrig.GetN(), x, y)

#graph.SetMinimum(0.1)
#graph.SetMaximum(1)
#graph.SetNpy(500);
#graph.SetNpx(500);
graph.SetTitle(";m(#chi) [GeV];#epsilon;Monthly Rate")
canvas = ROOT.TCanvas("canvas", "Graph", 800, 600)
#canvas.SetLogz()
graph.Draw("colz")
graphOrig.SetMarkerColor(1)
graphOrig.SetMarkerStyle(ROOT.kCircle)
graphOrig.SetMarkerSize(0.75)
graphOrig.Draw("PSAME")
#phenoContour.Draw("LFSAME")
canvas.Update()

marker = ROOT.TGraph()
marker.SetPoint(0,650,5200)
marker.SetMarkerStyle(29)
marker.SetMarkerSize(2)
marker.SetMarkerColor(ROOT.kBlack)
marker.Draw("P")

latex = ROOT.TLatex()
latex.SetTextFont(63)
latex.SetTextSize(14)
latex.DrawLatex(650,5200,"    Best fit from\n [2205.04473]")

tex2 = ROOT.TLatex(0.12,0.93,"CMS");
#tex2 = ROOT.TLatex(0.20,0.94,"CMS");#if there is 10^x
tex2.SetNDC();
tex2.SetTextFont(61);
tex2.SetTextSize(0.0675);
tex2.SetLineWidth(2);

#tex3 = ROOT.TLatex(0.27,0.94,"Simulation"); # for square plots
tex3 = ROOT.TLatex(0.28,0.94,"Work in Progress"); #if there is 10^x
tex3 = ROOT.TLatex(0.65,0.93,"Run 3 Cosmics");
tex3.SetNDC();
tex3.SetTextFont(42);
tex3.SetTextSize(0.0485);
tex3.SetLineWidth(2);

tex2.Draw("SAME")
tex3.Draw("SAME")
ROOT.gPad.RedrawAxis()
canvas.SaveAs("DMmassVsEpsilonExcludedRate.png")
canvas.SaveAs("DMmassVsEpsilonExcludedRate.pdf")


