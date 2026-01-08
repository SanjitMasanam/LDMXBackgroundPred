#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_1.54e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Nov  5 21:49:51 2025) by ROOT version 6.30/07
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
   Double_t Graph0_fy169[28] = { 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488, 3.23373, 3.106641, 3.064277,
   2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
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
   Graph_Graph0169->GetXaxis()->SetTitle("m(#chi) [TeV]");
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
   Double_t Graph1_fy170[58] = { 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828, 7.470015, 7.27591, 7.273525,
   7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183, 1.62183, 1.573178, 1.541047,
   1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213, 1.456955, 1.390045, 1.376807,
   1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478 };
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
   Graph_Graph1170->SetMinimum(0.4577757);
   Graph_Graph1170->SetMaximum(11.44511);
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
   Double_t Graph2_fy171[58] = { 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635, 4.973852, 4.815523, 4.7865,
   4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087, 2.248087, 2.16193, 2.108827,
   2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424, 2.032049, 1.968507, 1.949759,
   2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049 };
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
   Graph_Graph2171->SetMinimum(1.381747);
   Graph_Graph2171->SetMaximum(8.051608);
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
   Double_t Graph0_fy172[28] = { 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488, 3.23373, 3.106641, 3.064277,
   2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
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
   Graph_Graph0172->GetXaxis()->SetTitle("m(#chi) [TeV]");
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
   Double_t Graph_fy173[28] = { 6.393027e-52, 3.327289e-47, 3.228554e-43, 8.376251e-40, 7.56853e-37, 2.903776e-34, 5.504291e-32, 5.799426e-30, 3.727259e-28, 1.574002e-26, 4.638347e-25, 1.001928e-23, 1.65225e-22, 2.151716e-21, 2.276729e-20, 2.00493e-19, 1.499833e-18,
   9.699818e-18, 5.50591e-17, 2.779264e-16, 1.967785e-14, 2.231032e-13, 5.23351e-12, 3.28188e-11, 3.719086e-10, 1.561859e-09, 1.069037e-08, 3.380153e-08 };
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
   Graph_Graph173->SetMinimum(5.753725e-52);
   Graph_Graph173->SetMaximum(3.718169e-08);
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
   Double_t Graph_fy175[28] = { 7.03233e-52, 3.660018e-47, 3.551409e-43, 9.213876e-40, 8.325383e-37, 3.194154e-34, 6.05472e-32, 6.379369e-30, 4.099985e-28, 1.731402e-26, 5.102182e-25, 1.102121e-23, 1.817475e-22, 2.366888e-21, 2.504401e-20, 2.205423e-19, 1.649816e-18,
   1.06698e-17, 6.056501e-17, 3.05719e-16, 2.164564e-14, 2.454135e-13, 5.756861e-12, 3.610068e-11, 4.090995e-10, 1.718045e-09, 1.175941e-08, 3.718169e-08 };
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
   Graph_Graph175->SetMinimum(6.329097e-52);
   Graph_Graph175->SetMaximum(4.089985e-08);
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
   Graph_copy->GetXaxis()->SetTitle("m(#chi) [TeV]");
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
