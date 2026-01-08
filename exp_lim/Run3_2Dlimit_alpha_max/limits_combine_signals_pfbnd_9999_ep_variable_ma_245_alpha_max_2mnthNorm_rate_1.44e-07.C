#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_1.44e-07()
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
   
   Double_t Graph0_fx162[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy162[28] = { 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488, 3.23373, 3.106641, 3.064277,
   2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(28,Graph0_fx162,Graph0_fy162);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0162 = new TH1F("Graph_Graph0162","",100,1.42,10.78);
   Graph_Graph0162->SetMinimum(0.2);
   Graph_Graph0162->SetMaximum(100000);
   Graph_Graph0162->SetDirectory(nullptr);
   Graph_Graph0162->SetStats(0);
   Graph_Graph0162->SetLineWidth(2);
   Graph_Graph0162->SetMarkerStyle(20);
   Graph_Graph0162->SetMarkerSize(0.9);
   Graph_Graph0162->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0162->GetXaxis()->SetRange(0,92);
   Graph_Graph0162->GetXaxis()->SetLabelFont(42);
   Graph_Graph0162->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0162->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0162->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0162->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0162->GetXaxis()->SetTitleFont(42);
   Graph_Graph0162->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0162->GetYaxis()->SetLabelFont(42);
   Graph_Graph0162->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0162->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0162->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0162->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0162->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0162->GetYaxis()->SetTitleFont(42);
   Graph_Graph0162->GetZaxis()->SetLabelFont(42);
   Graph_Graph0162->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0162->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0162->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0162->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0162->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0162);
   
   graph->Draw("al");
   
   Double_t Graph1_fx163[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph1_fy163[58] = { 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828, 7.470015, 7.27591, 7.273525,
   7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183, 1.62183, 1.573178, 1.541047,
   1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213, 1.456955, 1.390045, 1.376807,
   1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478 };
   graph = new TGraph(58,Graph1_fx163,Graph1_fy163);
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
   
   TH1F *Graph_Graph1163 = new TH1F("Graph_Graph1163","Graph",100,1.42,10.78);
   Graph_Graph1163->SetMinimum(0.4577757);
   Graph_Graph1163->SetMaximum(11.44511);
   Graph_Graph1163->SetDirectory(nullptr);
   Graph_Graph1163->SetStats(0);
   Graph_Graph1163->SetLineWidth(2);
   Graph_Graph1163->SetMarkerStyle(20);
   Graph_Graph1163->SetMarkerSize(0.9);
   Graph_Graph1163->GetXaxis()->SetLabelFont(42);
   Graph_Graph1163->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1163->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1163->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1163->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1163->GetXaxis()->SetTitleFont(42);
   Graph_Graph1163->GetYaxis()->SetLabelFont(42);
   Graph_Graph1163->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1163->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1163->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1163->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1163->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1163->GetYaxis()->SetTitleFont(42);
   Graph_Graph1163->GetZaxis()->SetLabelFont(42);
   Graph_Graph1163->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1163->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1163->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1163->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1163->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1163);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx164[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph2_fy164[58] = { 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635, 4.973852, 4.815523, 4.7865,
   4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087, 2.248087, 2.16193, 2.108827,
   2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424, 2.032049, 1.968507, 1.949759,
   2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049 };
   graph = new TGraph(58,Graph2_fx164,Graph2_fy164);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2164 = new TH1F("Graph_Graph2164","Graph",100,1.42,10.78);
   Graph_Graph2164->SetMinimum(1.381747);
   Graph_Graph2164->SetMaximum(8.051608);
   Graph_Graph2164->SetDirectory(nullptr);
   Graph_Graph2164->SetStats(0);
   Graph_Graph2164->SetLineWidth(2);
   Graph_Graph2164->SetMarkerStyle(20);
   Graph_Graph2164->SetMarkerSize(0.9);
   Graph_Graph2164->GetXaxis()->SetLabelFont(42);
   Graph_Graph2164->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2164->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2164->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2164->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2164->GetXaxis()->SetTitleFont(42);
   Graph_Graph2164->GetYaxis()->SetLabelFont(42);
   Graph_Graph2164->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2164->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2164->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2164->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2164->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2164->GetYaxis()->SetTitleFont(42);
   Graph_Graph2164->GetZaxis()->SetLabelFont(42);
   Graph_Graph2164->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2164->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2164->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2164->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2164->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2164);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx165[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy165[28] = { 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488, 3.23373, 3.106641, 3.064277,
   2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(28,Graph0_fx165,Graph0_fy165);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0165 = new TH1F("Graph_Graph0165","",100,1.42,10.78);
   Graph_Graph0165->SetMinimum(0.2);
   Graph_Graph0165->SetMaximum(100000);
   Graph_Graph0165->SetDirectory(nullptr);
   Graph_Graph0165->SetStats(0);
   Graph_Graph0165->SetLineWidth(2);
   Graph_Graph0165->SetMarkerStyle(20);
   Graph_Graph0165->SetMarkerSize(0.9);
   Graph_Graph0165->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0165->GetXaxis()->SetRange(0,92);
   Graph_Graph0165->GetXaxis()->SetLabelFont(42);
   Graph_Graph0165->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0165->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0165->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0165->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0165->GetXaxis()->SetTitleFont(42);
   Graph_Graph0165->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0165->GetYaxis()->SetLabelFont(42);
   Graph_Graph0165->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0165->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0165->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0165->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0165->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0165->GetYaxis()->SetTitleFont(42);
   Graph_Graph0165->GetZaxis()->SetLabelFont(42);
   Graph_Graph0165->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0165->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0165->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0165->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0165->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0165);
   
   graph->Draw("l");
   
   Double_t Graph_fx166[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy166[28] = { 7.584959e-45, 9.933386e-41, 2.998926e-37, 2.860183e-34, 1.085652e-31, 1.950116e-29, 1.892304e-27, 1.099459e-25, 4.148565e-24, 1.084817e-22, 2.071963e-21, 3.017477e-20, 3.47184e-19, 3.250665e-18, 2.539018e-17, 1.689514e-16, 9.750525e-16,
   4.955866e-15, 2.247872e-14, 9.203502e-14, 3.752364e-12, 3.103587e-11, 4.827596e-10, 2.382221e-09, 1.964857e-08, 6.835649e-08, 3.633039e-07, 9.869549e-07 };
   graph = new TGraph(28,Graph_fx166,Graph_fy166);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph166 = new TH1F("Graph_Graph166","",100,1.42,10.78);
   Graph_Graph166->SetMinimum(6.826463e-45);
   Graph_Graph166->SetMaximum(1.08565e-06);
   Graph_Graph166->SetDirectory(nullptr);
   Graph_Graph166->SetStats(0);
   Graph_Graph166->SetLineWidth(2);
   Graph_Graph166->SetMarkerStyle(20);
   Graph_Graph166->SetMarkerSize(0.9);
   Graph_Graph166->GetXaxis()->SetLabelFont(42);
   Graph_Graph166->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph166->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph166->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph166->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph166->GetXaxis()->SetTitleFont(42);
   Graph_Graph166->GetYaxis()->SetLabelFont(42);
   Graph_Graph166->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph166->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph166->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph166->GetYaxis()->SetTickLength(0.02);
   Graph_Graph166->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph166->GetYaxis()->SetTitleFont(42);
   Graph_Graph166->GetZaxis()->SetLabelFont(42);
   Graph_Graph166->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph166->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph166->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph166->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph166->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph166);
   
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
   
   Double_t Graph_fx168[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy168[28] = { 8.343454e-45, 1.092672e-40, 3.298819e-37, 3.146201e-34, 1.194217e-31, 2.145127e-29, 2.081535e-27, 1.209405e-25, 4.563422e-24, 1.193299e-22, 2.279159e-21, 3.319224e-20, 3.819024e-19, 3.575732e-18, 2.79292e-17, 1.858466e-16, 1.072558e-15,
   5.451452e-15, 2.47266e-14, 1.012385e-13, 4.127601e-12, 3.413946e-11, 5.310355e-10, 2.620443e-09, 2.161343e-08, 7.519214e-08, 3.996343e-07, 1.08565e-06 };
   graph = new TGraph(28,Graph_fx168,Graph_fy168);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph168 = new TH1F("Graph_Graph168","",100,1.42,10.78);
   Graph_Graph168->SetMinimum(7.509109e-45);
   Graph_Graph168->SetMaximum(1.194215e-06);
   Graph_Graph168->SetDirectory(nullptr);
   Graph_Graph168->SetStats(0);
   Graph_Graph168->SetLineWidth(2);
   Graph_Graph168->SetMarkerStyle(20);
   Graph_Graph168->SetMarkerSize(0.9);
   Graph_Graph168->GetXaxis()->SetLabelFont(42);
   Graph_Graph168->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph168->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph168->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph168->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph168->GetXaxis()->SetTitleFont(42);
   Graph_Graph168->GetYaxis()->SetLabelFont(42);
   Graph_Graph168->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph168->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph168->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph168->GetYaxis()->SetTickLength(0.02);
   Graph_Graph168->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph168->GetYaxis()->SetTitleFont(42);
   Graph_Graph168->GetZaxis()->SetLabelFont(42);
   Graph_Graph168->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph168->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph168->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph168->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph168->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph168);
   
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
