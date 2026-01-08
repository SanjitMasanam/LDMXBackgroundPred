#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_14mnthNorm_rate_1.44e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Thu Nov  6 16:28:39 2025) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-0.6197,-1.838764,10.5943,5.759863);
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
   
   Double_t Graph0_fx225[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy225[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(31,Graph0_fx225,Graph0_fy225);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0225 = new TH1F("Graph_Graph0225","",100,0.76,10.84);
   Graph_Graph0225->SetMinimum(0.2);
   Graph_Graph0225->SetMaximum(100000);
   Graph_Graph0225->SetDirectory(nullptr);
   Graph_Graph0225->SetStats(0);
   Graph_Graph0225->SetLineWidth(2);
   Graph_Graph0225->SetMarkerStyle(20);
   Graph_Graph0225->SetMarkerSize(0.9);
   Graph_Graph0225->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0225->GetXaxis()->SetRange(4,92);
   Graph_Graph0225->GetXaxis()->SetLabelFont(42);
   Graph_Graph0225->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0225->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0225->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0225->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0225->GetXaxis()->SetTitleFont(42);
   Graph_Graph0225->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0225->GetYaxis()->SetLabelFont(42);
   Graph_Graph0225->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0225->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0225->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0225->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0225->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0225->GetYaxis()->SetTitleFont(42);
   Graph_Graph0225->GetZaxis()->SetLabelFont(42);
   Graph_Graph0225->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0225->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0225->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0225->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0225->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0225);
   
   graph->Draw("al");
   
   Double_t Graph1_fx226[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy226[64] = { 9.981168, 9.272051, 10.55289, 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828,
   7.470015, 7.27591, 7.273525, 7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183,
   1.62183, 1.573178, 1.541047, 1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213,
   1.456955, 1.390045, 1.376807, 1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478, 2.721786, 2.276199, 2.407628 };
   graph = new TGraph(64,Graph1_fx226,Graph1_fy226);
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
   
   TH1F *Graph_Graph1226 = new TH1F("Graph_Graph1226","Graph",100,0.76,10.84);
   Graph_Graph1226->SetMinimum(0.4554363);
   Graph_Graph1226->SetMaximum(11.47084);
   Graph_Graph1226->SetDirectory(nullptr);
   Graph_Graph1226->SetStats(0);
   Graph_Graph1226->SetLineWidth(2);
   Graph_Graph1226->SetMarkerStyle(20);
   Graph_Graph1226->SetMarkerSize(0.9);
   Graph_Graph1226->GetXaxis()->SetLabelFont(42);
   Graph_Graph1226->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1226->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1226->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1226->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1226->GetXaxis()->SetTitleFont(42);
   Graph_Graph1226->GetYaxis()->SetLabelFont(42);
   Graph_Graph1226->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1226->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1226->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1226->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1226->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1226->GetYaxis()->SetTitleFont(42);
   Graph_Graph1226->GetZaxis()->SetLabelFont(42);
   Graph_Graph1226->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1226->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1226->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1226->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1226->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1226);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx227[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy227[64] = { 7.041793, 6.522612, 7.53601, 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635,
   4.973852, 4.815523, 4.7865, 4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087,
   2.248087, 2.16193, 2.108827, 2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424,
   2.032049, 1.968507, 1.949759, 2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049, 3.685378, 3.090679, 3.348122 };
   graph = new TGraph(64,Graph2_fx227,Graph2_fy227);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2227 = new TH1F("Graph_Graph2227","Graph",100,0.76,10.84);
   Graph_Graph2227->SetMinimum(1.377724);
   Graph_Graph2227->SetMaximum(8.095854);
   Graph_Graph2227->SetDirectory(nullptr);
   Graph_Graph2227->SetStats(0);
   Graph_Graph2227->SetLineWidth(2);
   Graph_Graph2227->SetMarkerStyle(20);
   Graph_Graph2227->SetMarkerSize(0.9);
   Graph_Graph2227->GetXaxis()->SetLabelFont(42);
   Graph_Graph2227->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2227->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2227->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2227->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2227->GetXaxis()->SetTitleFont(42);
   Graph_Graph2227->GetYaxis()->SetLabelFont(42);
   Graph_Graph2227->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2227->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2227->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2227->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2227->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2227->GetYaxis()->SetTitleFont(42);
   Graph_Graph2227->GetZaxis()->SetLabelFont(42);
   Graph_Graph2227->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2227->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2227->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2227->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2227->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2227);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx228[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy228[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(31,Graph0_fx228,Graph0_fy228);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0228 = new TH1F("Graph_Graph0228","",100,0.76,10.84);
   Graph_Graph0228->SetMinimum(0.2);
   Graph_Graph0228->SetMaximum(100000);
   Graph_Graph0228->SetDirectory(nullptr);
   Graph_Graph0228->SetStats(0);
   Graph_Graph0228->SetLineWidth(2);
   Graph_Graph0228->SetMarkerStyle(20);
   Graph_Graph0228->SetMarkerSize(0.9);
   Graph_Graph0228->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0228->GetXaxis()->SetRange(4,92);
   Graph_Graph0228->GetXaxis()->SetLabelFont(42);
   Graph_Graph0228->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0228->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0228->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0228->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0228->GetXaxis()->SetTitleFont(42);
   Graph_Graph0228->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0228->GetYaxis()->SetLabelFont(42);
   Graph_Graph0228->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0228->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0228->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0228->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0228->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0228->GetYaxis()->SetTitleFont(42);
   Graph_Graph0228->GetZaxis()->SetLabelFont(42);
   Graph_Graph0228->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0228->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0228->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0228->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0228->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0228);
   
   graph->Draw("l");
   
   Double_t Graph_fx229[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy229[31] = { 2.035924e-63, 7.620867e-56, 8.588033e-50, 7.584959e-45, 9.933386e-41, 2.998926e-37, 2.860183e-34, 1.085652e-31, 1.950116e-29, 1.892304e-27, 1.099459e-25, 4.148565e-24, 1.084817e-22, 2.071963e-21, 3.017477e-20, 3.47184e-19, 3.250665e-18,
   2.539018e-17, 1.689514e-16, 9.750525e-16, 4.955866e-15, 2.247872e-14, 9.203502e-14, 3.752364e-12, 3.103587e-11, 4.827596e-10, 2.382221e-09, 1.964857e-08, 6.835649e-08, 3.633039e-07, 9.869549e-07 };
   graph = new TGraph(31,Graph_fx229,Graph_fy229);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph229 = new TH1F("Graph_Graph229","",100,0.76,10.84);
   Graph_Graph229->SetMinimum(1.832331e-63);
   Graph_Graph229->SetMaximum(1.08565e-06);
   Graph_Graph229->SetDirectory(nullptr);
   Graph_Graph229->SetStats(0);
   Graph_Graph229->SetLineWidth(2);
   Graph_Graph229->SetMarkerStyle(20);
   Graph_Graph229->SetMarkerSize(0.9);
   Graph_Graph229->GetXaxis()->SetLabelFont(42);
   Graph_Graph229->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph229->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph229->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph229->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph229->GetXaxis()->SetTitleFont(42);
   Graph_Graph229->GetYaxis()->SetLabelFont(42);
   Graph_Graph229->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph229->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph229->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph229->GetYaxis()->SetTickLength(0.02);
   Graph_Graph229->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph229->GetYaxis()->SetTitleFont(42);
   Graph_Graph229->GetZaxis()->SetLabelFont(42);
   Graph_Graph229->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph229->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph229->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph229->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph229->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph229);
   
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
   
   Double_t Graph_fx231[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy231[31] = { 2.239516e-63, 8.382953e-56, 9.446836e-50, 8.343454e-45, 1.092672e-40, 3.298819e-37, 3.146201e-34, 1.194217e-31, 2.145127e-29, 2.081535e-27, 1.209405e-25, 4.563422e-24, 1.193299e-22, 2.279159e-21, 3.319224e-20, 3.819024e-19, 3.575732e-18,
   2.79292e-17, 1.858466e-16, 1.072558e-15, 5.451452e-15, 2.47266e-14, 1.012385e-13, 4.127601e-12, 3.413946e-11, 5.310355e-10, 2.620443e-09, 2.161343e-08, 7.519214e-08, 3.996343e-07, 1.08565e-06 };
   graph = new TGraph(31,Graph_fx231,Graph_fy231);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph231 = new TH1F("Graph_Graph231","",100,0.76,10.84);
   Graph_Graph231->SetMinimum(2.015564e-63);
   Graph_Graph231->SetMaximum(1.194215e-06);
   Graph_Graph231->SetDirectory(nullptr);
   Graph_Graph231->SetStats(0);
   Graph_Graph231->SetLineWidth(2);
   Graph_Graph231->SetMarkerStyle(20);
   Graph_Graph231->SetMarkerSize(0.9);
   Graph_Graph231->GetXaxis()->SetLabelFont(42);
   Graph_Graph231->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetXaxis()->SetTitleFont(42);
   Graph_Graph231->GetYaxis()->SetLabelFont(42);
   Graph_Graph231->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetYaxis()->SetTickLength(0.02);
   Graph_Graph231->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetYaxis()->SetTitleFont(42);
   Graph_Graph231->GetZaxis()->SetLabelFont(42);
   Graph_Graph231->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph231);
   
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
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,0.76,10.84);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_copy->GetXaxis()->SetRange(4,92);
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
      tex = new TLatex(0.95,0.915,"Run 3 Cosmics");
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
