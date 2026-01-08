#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_thermal_2mnthNorm_rate_1.54e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Oct  1 19:55:49 2025) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-0.30575,-1.838764,10.57525,5.759863);
   climits->SetFillColor(0);
   climits->SetBorderMode(0);
   climits->SetBorderSize(2);
   climits->SetLogy();
   climits->SetLeftMargin(0.15);
   climits->SetRightMargin(0.05);
   climits->SetBottomMargin(0.15);
   climits->SetFrameLineWidth(2);
   climits->SetFrameBorderMode(0);
   climits->SetFrameLineWidth(2);
   climits->SetFrameBorderMode(0);
   
   Double_t Graph0_fx169[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy169[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   TGraph *graph = new TGraph(28,Graph0_fx169,Graph0_fy169);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0169 = new TH1F("Graph_Graph0169","",100,1.42,10.78);
   Graph_Graph0169->SetMinimum(0.2);
   Graph_Graph0169->SetMaximum(100000);
   Graph_Graph0169->SetDirectory(nullptr);
   Graph_Graph0169->SetStats(0);
   Graph_Graph0169->SetLineWidth(2);
   Graph_Graph0169->SetMarkerStyle(20);
   Graph_Graph0169->SetMarkerSize(0.9);
   Graph_Graph0169->GetXaxis()->SetTitle("m(#Chi) [TeV]");
   Graph_Graph0169->GetXaxis()->SetRange(0,92);
   Graph_Graph0169->GetXaxis()->SetLabelFont(42);
   Graph_Graph0169->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0169->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0169->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0169->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0169->GetXaxis()->SetTitleFont(42);
   Graph_Graph0169->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0169->GetYaxis()->SetLabelFont(42);
   Graph_Graph0169->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0169->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0169->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0169->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0169->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0169->GetYaxis()->SetTitleFont(42);
   Graph_Graph0169->GetZaxis()->SetLabelFont(42);
   Graph_Graph0169->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0169->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0169->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0169->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0169->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0169);
   
   graph->Draw("al");
   
   Double_t Graph1_fx170[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph1_fy170[58] = { 58.779, 51.64776, 45.92929, 43.98549, 45.6157, 46.96366, 45.67817, 44.11966, 42.26104, 41.07864, 41.22047, 41.3882, 41.46952, 41.86501, 42.41551, 41.4595, 41.57227,
   40.74936, 41.49311, 44.80825, 40.66233, 40.35588, 41.43917, 41.70946, 42.87254, 44.21722, 46.20752, 49.26201, 49.26201, 6.848145, 6.848145, 6.60553, 6.4888,
   6.429291, 6.468201, 6.650925, 6.707764, 6.896973, 7.89299, 7.006836, 7.026291, 7.349396, 7.544708, 7.989883, 8.102417, 8.010864, 7.787323, 7.609749, 7.587433,
   7.967377, 8.674622, 9.602356, 10.23788, 9.626007, 8.935547, 9.307861, 10.86216, 13.86166 };
   graph = new TGraph(58,Graph1_fx170,Graph1_fy170);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph1170 = new TH1F("Graph_Graph1170","Graph",100,1.42,10.78);
   Graph_Graph1170->SetMinimum(1.19432);
   Graph_Graph1170->SetMaximum(64.01397);
   Graph_Graph1170->SetDirectory(nullptr);
   Graph_Graph1170->SetStats(0);
   Graph_Graph1170->SetLineWidth(2);
   Graph_Graph1170->SetMarkerStyle(20);
   Graph_Graph1170->SetMarkerSize(0.9);
   Graph_Graph1170->GetXaxis()->SetLabelFont(42);
   Graph_Graph1170->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1170->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1170->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1170->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1170->GetXaxis()->SetTitleFont(42);
   Graph_Graph1170->GetYaxis()->SetLabelFont(42);
   Graph_Graph1170->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1170->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1170->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1170->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1170->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1170->GetYaxis()->SetTitleFont(42);
   Graph_Graph1170->GetZaxis()->SetLabelFont(42);
   Graph_Graph1170->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1170->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1170->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1170->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1170->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1170);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx171[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph2_fy171[58] = { 41.08932, 34.68272, 30.43059, 29.10126, 30.56705, 31.66236, 30.49195, 28.98051, 27.44781, 26.52774, 26.5394, 26.79385, 26.96737, 27.20667, 27.4908, 26.67214, 26.60195,
   25.87957, 26.19794, 28.60487, 25.59011, 25.23252, 25.72039, 25.66032, 26.23477, 26.91895, 27.92595, 29.65634, 29.65634, 10.4023, 10.4023, 9.924173, 9.696507,
   9.556746, 9.515142, 9.685409, 9.739733, 9.96542, 11.42623, 10.17399, 10.187, 10.6393, 10.81706, 11.34792, 11.40246, 11.27362, 11.06023, 10.7881, 10.82689,
   11.31595, 12.20772, 13.27584, 14.11645, 13.38859, 12.46262, 13.06176, 15.17487, 19.31883 };
   graph = new TGraph(58,Graph2_fx171,Graph2_fy171);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2171 = new TH1F("Graph_Graph2171","Graph",100,1.42,10.78);
   Graph_Graph2171->SetMinimum(6.357724);
   Graph_Graph2171->SetMaximum(44.24674);
   Graph_Graph2171->SetDirectory(nullptr);
   Graph_Graph2171->SetStats(0);
   Graph_Graph2171->SetLineWidth(2);
   Graph_Graph2171->SetMarkerStyle(20);
   Graph_Graph2171->SetMarkerSize(0.9);
   Graph_Graph2171->GetXaxis()->SetLabelFont(42);
   Graph_Graph2171->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2171->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2171->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2171->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2171->GetXaxis()->SetTitleFont(42);
   Graph_Graph2171->GetYaxis()->SetLabelFont(42);
   Graph_Graph2171->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2171->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2171->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2171->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2171->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2171->GetYaxis()->SetTitleFont(42);
   Graph_Graph2171->GetZaxis()->SetLabelFont(42);
   Graph_Graph2171->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2171->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2171->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2171->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2171->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2171);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx172[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy172[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   graph = new TGraph(28,Graph0_fx172,Graph0_fy172);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0172 = new TH1F("Graph_Graph0172","",100,1.42,10.78);
   Graph_Graph0172->SetMinimum(0.2);
   Graph_Graph0172->SetMaximum(100000);
   Graph_Graph0172->SetDirectory(nullptr);
   Graph_Graph0172->SetStats(0);
   Graph_Graph0172->SetLineWidth(2);
   Graph_Graph0172->SetMarkerStyle(20);
   Graph_Graph0172->SetMarkerSize(0.9);
   Graph_Graph0172->GetXaxis()->SetTitle("m(#Chi) [TeV]");
   Graph_Graph0172->GetXaxis()->SetRange(0,92);
   Graph_Graph0172->GetXaxis()->SetLabelFont(42);
   Graph_Graph0172->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0172->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0172->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0172->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0172->GetXaxis()->SetTitleFont(42);
   Graph_Graph0172->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0172->GetYaxis()->SetLabelFont(42);
   Graph_Graph0172->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0172->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0172->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0172->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0172->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0172->GetYaxis()->SetTitleFont(42);
   Graph_Graph0172->GetZaxis()->SetLabelFont(42);
   Graph_Graph0172->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0172->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0172->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0172->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0172->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0172);
   
   graph->Draw("l");
   
   Double_t Graph_fx173[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy173[28] = { 1.313646e-138, 1.034549e-126, 1.189213e-116, 4.940602e-108, 1.442206e-100, 4.869669e-94, 2.784341e-88, 3.625895e-83, 1.358875e-78, 1.767182e-74, 9.278887e-71, 2.226532e-67, 2.70471e-64, 1.811331e-61, 7.18385e-59, 1.792695e-56, 2.963819e-54,
   3.393085e-52, 2.794383e-50, 1.711062e-48, 8.694445e-44, 4.212785e-41, 1.311312e-37, 1.420643e-35, 7.01442e-33, 2.753473e-31, 3.790305e-29, 7.246482e-28 };
   graph = new TGraph(28,Graph_fx173,Graph_fy173);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph173 = new TH1F("Graph_Graph173","",100,1.42,10.78);
   Graph_Graph173->SetMinimum(1.182281e-138);
   Graph_Graph173->SetMaximum(7.97113e-28);
   Graph_Graph173->SetDirectory(nullptr);
   Graph_Graph173->SetStats(0);
   Graph_Graph173->SetLineWidth(2);
   Graph_Graph173->SetMarkerStyle(20);
   Graph_Graph173->SetMarkerSize(0.9);
   Graph_Graph173->GetXaxis()->SetLabelFont(42);
   Graph_Graph173->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph173->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph173->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph173->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph173->GetXaxis()->SetTitleFont(42);
   Graph_Graph173->GetYaxis()->SetLabelFont(42);
   Graph_Graph173->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph173->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph173->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph173->GetYaxis()->SetTickLength(0.02);
   Graph_Graph173->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph173->GetYaxis()->SetTitleFont(42);
   Graph_Graph173->GetZaxis()->SetLabelFont(42);
   Graph_Graph173->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph173->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph173->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph173->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph173->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph173);
   
   graph->Draw("l");
   
   graph = new TGraph();
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   graph->Draw("l");
   
   Double_t Graph_fx175[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy175[28] = { 1.44501e-138, 1.138004e-126, 1.308135e-116, 5.434662e-108, 1.586427e-100, 5.356635e-94, 3.062775e-88, 3.988484e-83, 1.494762e-78, 1.943901e-74, 1.020678e-70, 2.449185e-67, 2.975181e-64, 1.992465e-61, 7.902235e-59, 1.971965e-56, 3.260201e-54,
   3.732394e-52, 3.073821e-50, 1.882168e-48, 9.563889e-44, 4.634063e-41, 1.442444e-37, 1.562707e-35, 7.715862e-33, 3.02882e-31, 4.169335e-29, 7.97113e-28 };
   graph = new TGraph(28,Graph_fx175,Graph_fy175);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph175 = new TH1F("Graph_Graph175","",100,1.42,10.78);
   Graph_Graph175->SetMinimum(1.300509e-138);
   Graph_Graph175->SetMaximum(8.768243e-28);
   Graph_Graph175->SetDirectory(nullptr);
   Graph_Graph175->SetStats(0);
   Graph_Graph175->SetLineWidth(2);
   Graph_Graph175->SetMarkerStyle(20);
   Graph_Graph175->SetMarkerSize(0.9);
   Graph_Graph175->GetXaxis()->SetLabelFont(42);
   Graph_Graph175->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph175->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph175->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph175->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph175->GetXaxis()->SetTitleFont(42);
   Graph_Graph175->GetYaxis()->SetLabelFont(42);
   Graph_Graph175->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph175->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph175->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph175->GetYaxis()->SetTickLength(0.02);
   Graph_Graph175->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph175->GetYaxis()->SetTitleFont(42);
   Graph_Graph175->GetZaxis()->SetLabelFont(42);
   Graph_Graph175->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph175->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph175->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph175->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph175->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph175);
   
   graph->Draw("l");
   
   TLegend *leg = new TLegend(0.5,0.6,0.92,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","95% CL Upper Limits","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","Expected Limit #pm1#sigma, #pm2#sigma","f");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("","#sigma^{LO}_{th}(A'#rightarrow#mu#mu)#pm1#sigma","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLine *line = new TLine(0.517,0.75,0.588,0.75);

   ci = TColor::GetColor("#00cc00");
   line->SetLineColor(ci);
   line->SetLineWidth(22);
   line->SetNDC();
   line->Draw();
   line = new TLine(0.517,0.75,0.588,0.75);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->SetNDC();
   line->Draw();
   line = new TLine(0.517,0.66,0.588,0.66);
   line->SetLineColor(4);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->SetNDC();
   line->Draw();
   line = new TLine(0.517,0.64,0.588,0.64);
   line->SetLineColor(4);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->SetNDC();
   line->Draw();
   line = new TLine(-1,0,-1,-1);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(-1.005,0,"  -1.00 TeV");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextFont(43);
   tex->SetTextSize(14);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,1.42,10.78);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(#Chi) [TeV]");
   Graph_copy->GetXaxis()->SetRange(0,92);
   Graph_copy->GetXaxis()->SetLabelFont(42);
   Graph_copy->GetXaxis()->SetLabelOffset(0.015);
   Graph_copy->GetXaxis()->SetLabelSize(0.05);
   Graph_copy->GetXaxis()->SetTitleSize(0.055);
   Graph_copy->GetXaxis()->SetTitleOffset(1.25);
   Graph_copy->GetXaxis()->SetTitleFont(42);
   Graph_copy->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_copy->GetYaxis()->SetLabelFont(42);
   Graph_copy->GetYaxis()->SetLabelOffset(0.015);
   Graph_copy->GetYaxis()->SetLabelSize(0.05);
   Graph_copy->GetYaxis()->SetTitleSize(0.05);
   Graph_copy->GetYaxis()->SetTickLength(0.02);
   Graph_copy->GetYaxis()->SetTitleOffset(1.5);
   Graph_copy->GetYaxis()->SetTitleFont(42);
   Graph_copy->GetZaxis()->SetLabelFont(42);
   Graph_copy->GetZaxis()->SetLabelOffset(0.015);
   Graph_copy->GetZaxis()->SetLabelSize(0.05);
   Graph_copy->GetZaxis()->SetTitleSize(0.065);
   Graph_copy->GetZaxis()->SetTitleOffset(1.1);
   Graph_copy->GetZaxis()->SetTitleFont(42);
   Graph_copy->Draw("sameaxis");
      tex = new TLatex(0.95,0.915,"2023D Cosmics");
   tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.915,"CMS");
   tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.08);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.375,0.96,"Internal");
   tex->SetNDC();
   tex->SetTextAlign(23);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0608);
   tex->SetLineWidth(2);
   tex->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
