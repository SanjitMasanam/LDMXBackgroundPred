#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_14mnthNorm_rate_2e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Thu Nov  6 16:28:38 2025) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx113[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy113[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(31,Graph0_fx113,Graph0_fy113);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0113 = new TH1F("Graph_Graph0113","",100,0.76,10.84);
   Graph_Graph0113->SetMinimum(0.2);
   Graph_Graph0113->SetMaximum(100000);
   Graph_Graph0113->SetDirectory(nullptr);
   Graph_Graph0113->SetStats(0);
   Graph_Graph0113->SetLineWidth(2);
   Graph_Graph0113->SetMarkerStyle(20);
   Graph_Graph0113->SetMarkerSize(0.9);
   Graph_Graph0113->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0113->GetXaxis()->SetRange(4,92);
   Graph_Graph0113->GetXaxis()->SetLabelFont(42);
   Graph_Graph0113->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0113->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0113->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0113->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0113->GetXaxis()->SetTitleFont(42);
   Graph_Graph0113->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0113->GetYaxis()->SetLabelFont(42);
   Graph_Graph0113->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0113->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0113->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0113->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0113->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0113->GetYaxis()->SetTitleFont(42);
   Graph_Graph0113->GetZaxis()->SetLabelFont(42);
   Graph_Graph0113->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0113->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0113->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0113->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0113->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0113);
   
   graph->Draw("al");
   
   Double_t Graph1_fx114[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy114[64] = { 9.981168, 9.272051, 10.55289, 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828,
   7.470015, 7.27591, 7.273525, 7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183,
   1.62183, 1.573178, 1.541047, 1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213,
   1.456955, 1.390045, 1.376807, 1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478, 2.721786, 2.276199, 2.407628 };
   graph = new TGraph(64,Graph1_fx114,Graph1_fy114);
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
   
   TH1F *Graph_Graph1114 = new TH1F("Graph_Graph1114","Graph",100,0.76,10.84);
   Graph_Graph1114->SetMinimum(0.4554363);
   Graph_Graph1114->SetMaximum(11.47084);
   Graph_Graph1114->SetDirectory(nullptr);
   Graph_Graph1114->SetStats(0);
   Graph_Graph1114->SetLineWidth(2);
   Graph_Graph1114->SetMarkerStyle(20);
   Graph_Graph1114->SetMarkerSize(0.9);
   Graph_Graph1114->GetXaxis()->SetLabelFont(42);
   Graph_Graph1114->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1114->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1114->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1114->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1114->GetXaxis()->SetTitleFont(42);
   Graph_Graph1114->GetYaxis()->SetLabelFont(42);
   Graph_Graph1114->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1114->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1114->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1114->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1114->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1114->GetYaxis()->SetTitleFont(42);
   Graph_Graph1114->GetZaxis()->SetLabelFont(42);
   Graph_Graph1114->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1114->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1114->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1114->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1114->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1114);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx115[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy115[64] = { 7.041793, 6.522612, 7.53601, 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635,
   4.973852, 4.815523, 4.7865, 4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087,
   2.248087, 2.16193, 2.108827, 2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424,
   2.032049, 1.968507, 1.949759, 2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049, 3.685378, 3.090679, 3.348122 };
   graph = new TGraph(64,Graph2_fx115,Graph2_fy115);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2115 = new TH1F("Graph_Graph2115","Graph",100,0.76,10.84);
   Graph_Graph2115->SetMinimum(1.377724);
   Graph_Graph2115->SetMaximum(8.095854);
   Graph_Graph2115->SetDirectory(nullptr);
   Graph_Graph2115->SetStats(0);
   Graph_Graph2115->SetLineWidth(2);
   Graph_Graph2115->SetMarkerStyle(20);
   Graph_Graph2115->SetMarkerSize(0.9);
   Graph_Graph2115->GetXaxis()->SetLabelFont(42);
   Graph_Graph2115->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2115->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2115->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2115->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2115->GetXaxis()->SetTitleFont(42);
   Graph_Graph2115->GetYaxis()->SetLabelFont(42);
   Graph_Graph2115->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2115->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2115->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2115->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2115->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2115->GetYaxis()->SetTitleFont(42);
   Graph_Graph2115->GetZaxis()->SetLabelFont(42);
   Graph_Graph2115->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2115->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2115->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2115->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2115->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2115);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx116[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy116[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(31,Graph0_fx116,Graph0_fy116);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0116 = new TH1F("Graph_Graph0116","",100,0.76,10.84);
   Graph_Graph0116->SetMinimum(0.2);
   Graph_Graph0116->SetMaximum(100000);
   Graph_Graph0116->SetDirectory(nullptr);
   Graph_Graph0116->SetStats(0);
   Graph_Graph0116->SetLineWidth(2);
   Graph_Graph0116->SetMarkerStyle(20);
   Graph_Graph0116->SetMarkerSize(0.9);
   Graph_Graph0116->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0116->GetXaxis()->SetRange(4,92);
   Graph_Graph0116->GetXaxis()->SetLabelFont(42);
   Graph_Graph0116->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0116->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0116->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0116->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0116->GetXaxis()->SetTitleFont(42);
   Graph_Graph0116->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0116->GetYaxis()->SetLabelFont(42);
   Graph_Graph0116->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0116->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0116->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0116->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0116->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0116->GetYaxis()->SetTitleFont(42);
   Graph_Graph0116->GetZaxis()->SetLabelFont(42);
   Graph_Graph0116->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0116->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0116->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0116->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0116->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0116);
   
   graph->Draw("l");
   
   Double_t Graph_fx117[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy117[31] = { 22.54514, 26.86754, 30.44126, 33.29278, 35.49638, 37.14214, 38.31966, 39.11063, 39.5862, 39.8067, 39.82244, 39.67496, 39.39833, 39.02036, 38.56371, 38.04678, 37.48452,
   36.88902, 36.27008, 35.63563, 34.99205, 34.34446, 33.69698, 31.78474, 30.5547, 28.79889, 27.69352, 26.13573, 25.16297, 23.79826, 22.94818 };
   graph = new TGraph(31,Graph_fx117,Graph_fy117);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph117 = new TH1F("Graph_Graph117","",100,0.76,10.84);
   Graph_Graph117->SetMinimum(20.81741);
   Graph_Graph117->SetMaximum(41.55017);
   Graph_Graph117->SetDirectory(nullptr);
   Graph_Graph117->SetStats(0);
   Graph_Graph117->SetLineWidth(2);
   Graph_Graph117->SetMarkerStyle(20);
   Graph_Graph117->SetMarkerSize(0.9);
   Graph_Graph117->GetXaxis()->SetLabelFont(42);
   Graph_Graph117->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph117->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph117->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph117->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph117->GetXaxis()->SetTitleFont(42);
   Graph_Graph117->GetYaxis()->SetLabelFont(42);
   Graph_Graph117->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph117->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph117->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph117->GetYaxis()->SetTickLength(0.02);
   Graph_Graph117->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph117->GetYaxis()->SetTitleFont(42);
   Graph_Graph117->GetZaxis()->SetLabelFont(42);
   Graph_Graph117->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph117->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph117->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph117->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph117->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph117);
   
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
   
   Double_t Graph_fx119[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy119[31] = { 24.79965, 29.55429, 33.48538, 36.62206, 39.04602, 40.85636, 42.15163, 43.0217, 43.54482, 43.78737, 43.80469, 43.64246, 43.33817, 42.9224, 42.42008, 41.85146, 41.23297,
   40.57792, 39.89709, 39.1992, 38.49125, 37.77891, 37.06668, 34.96321, 33.61017, 31.67878, 30.46287, 28.7493, 27.67927, 26.17808, 25.243 };
   graph = new TGraph(31,Graph_fx119,Graph_fy119);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph119 = new TH1F("Graph_Graph119","",100,0.76,10.84);
   Graph_Graph119->SetMinimum(22.89915);
   Graph_Graph119->SetMaximum(45.70519);
   Graph_Graph119->SetDirectory(nullptr);
   Graph_Graph119->SetStats(0);
   Graph_Graph119->SetLineWidth(2);
   Graph_Graph119->SetMarkerStyle(20);
   Graph_Graph119->SetMarkerSize(0.9);
   Graph_Graph119->GetXaxis()->SetLabelFont(42);
   Graph_Graph119->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph119->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph119->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph119->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph119->GetXaxis()->SetTitleFont(42);
   Graph_Graph119->GetYaxis()->SetLabelFont(42);
   Graph_Graph119->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph119->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph119->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph119->GetYaxis()->SetTickLength(0.02);
   Graph_Graph119->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph119->GetYaxis()->SetTitleFont(42);
   Graph_Graph119->GetZaxis()->SetLabelFont(42);
   Graph_Graph119->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph119->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph119->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph119->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph119->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph119);
   
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
