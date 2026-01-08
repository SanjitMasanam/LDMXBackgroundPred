#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_14mnthNorm_rate_1.84e-07()
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
   
   Double_t Graph0_fx253[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy253[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(31,Graph0_fx253,Graph0_fy253);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0253 = new TH1F("Graph_Graph0253","",100,0.76,10.84);
   Graph_Graph0253->SetMinimum(0.2);
   Graph_Graph0253->SetMaximum(100000);
   Graph_Graph0253->SetDirectory(nullptr);
   Graph_Graph0253->SetStats(0);
   Graph_Graph0253->SetLineWidth(2);
   Graph_Graph0253->SetMarkerStyle(20);
   Graph_Graph0253->SetMarkerSize(0.9);
   Graph_Graph0253->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0253->GetXaxis()->SetRange(4,92);
   Graph_Graph0253->GetXaxis()->SetLabelFont(42);
   Graph_Graph0253->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0253->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0253->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0253->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0253->GetXaxis()->SetTitleFont(42);
   Graph_Graph0253->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0253->GetYaxis()->SetLabelFont(42);
   Graph_Graph0253->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0253->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0253->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0253->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0253->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0253->GetYaxis()->SetTitleFont(42);
   Graph_Graph0253->GetZaxis()->SetLabelFont(42);
   Graph_Graph0253->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0253->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0253->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0253->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0253->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0253);
   
   graph->Draw("al");
   
   Double_t Graph1_fx254[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy254[64] = { 9.981168, 9.272051, 10.55289, 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828,
   7.470015, 7.27591, 7.273525, 7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183,
   1.62183, 1.573178, 1.541047, 1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213,
   1.456955, 1.390045, 1.376807, 1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478, 2.721786, 2.276199, 2.407628 };
   graph = new TGraph(64,Graph1_fx254,Graph1_fy254);
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
   
   TH1F *Graph_Graph1254 = new TH1F("Graph_Graph1254","Graph",100,0.76,10.84);
   Graph_Graph1254->SetMinimum(0.4554363);
   Graph_Graph1254->SetMaximum(11.47084);
   Graph_Graph1254->SetDirectory(nullptr);
   Graph_Graph1254->SetStats(0);
   Graph_Graph1254->SetLineWidth(2);
   Graph_Graph1254->SetMarkerStyle(20);
   Graph_Graph1254->SetMarkerSize(0.9);
   Graph_Graph1254->GetXaxis()->SetLabelFont(42);
   Graph_Graph1254->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1254->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1254->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1254->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1254->GetXaxis()->SetTitleFont(42);
   Graph_Graph1254->GetYaxis()->SetLabelFont(42);
   Graph_Graph1254->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1254->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1254->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1254->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1254->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1254->GetYaxis()->SetTitleFont(42);
   Graph_Graph1254->GetZaxis()->SetLabelFont(42);
   Graph_Graph1254->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1254->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1254->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1254->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1254->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1254);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx255[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy255[64] = { 7.041793, 6.522612, 7.53601, 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635,
   4.973852, 4.815523, 4.7865, 4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087,
   2.248087, 2.16193, 2.108827, 2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424,
   2.032049, 1.968507, 1.949759, 2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049, 3.685378, 3.090679, 3.348122 };
   graph = new TGraph(64,Graph2_fx255,Graph2_fy255);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2255 = new TH1F("Graph_Graph2255","Graph",100,0.76,10.84);
   Graph_Graph2255->SetMinimum(1.377724);
   Graph_Graph2255->SetMaximum(8.095854);
   Graph_Graph2255->SetDirectory(nullptr);
   Graph_Graph2255->SetStats(0);
   Graph_Graph2255->SetLineWidth(2);
   Graph_Graph2255->SetMarkerStyle(20);
   Graph_Graph2255->SetMarkerSize(0.9);
   Graph_Graph2255->GetXaxis()->SetLabelFont(42);
   Graph_Graph2255->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2255->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2255->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2255->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2255->GetXaxis()->SetTitleFont(42);
   Graph_Graph2255->GetYaxis()->SetLabelFont(42);
   Graph_Graph2255->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2255->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2255->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2255->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2255->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2255->GetYaxis()->SetTitleFont(42);
   Graph_Graph2255->GetZaxis()->SetLabelFont(42);
   Graph_Graph2255->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2255->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2255->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2255->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2255->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2255);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx256[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy256[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(31,Graph0_fx256,Graph0_fy256);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0256 = new TH1F("Graph_Graph0256","",100,0.76,10.84);
   Graph_Graph0256->SetMinimum(0.2);
   Graph_Graph0256->SetMaximum(100000);
   Graph_Graph0256->SetDirectory(nullptr);
   Graph_Graph0256->SetStats(0);
   Graph_Graph0256->SetLineWidth(2);
   Graph_Graph0256->SetMarkerStyle(20);
   Graph_Graph0256->SetMarkerSize(0.9);
   Graph_Graph0256->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0256->GetXaxis()->SetRange(4,92);
   Graph_Graph0256->GetXaxis()->SetLabelFont(42);
   Graph_Graph0256->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0256->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0256->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0256->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0256->GetXaxis()->SetTitleFont(42);
   Graph_Graph0256->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0256->GetYaxis()->SetLabelFont(42);
   Graph_Graph0256->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0256->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0256->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0256->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0256->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0256->GetYaxis()->SetTitleFont(42);
   Graph_Graph0256->GetZaxis()->SetLabelFont(42);
   Graph_Graph0256->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0256->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0256->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0256->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0256->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0256);
   
   graph->Draw("l");
   
   Double_t Graph_fx257[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy257[31] = { 1.596708e-106, 4.104725e-94, 3.424729e-84, 4.432022e-76, 2.523537e-69, 1.300934e-63, 1.016598e-58, 1.757047e-54, 8.916582e-51, 1.649921e-47, 1.317425e-44, 5.184683e-42, 1.118486e-39, 1.441533e-37, 1.190903e-35, 6.68398e-34, 2.675082e-32,
   7.951494e-31, 1.816835e-29, 3.285985e-28, 4.82399e-27, 5.874068e-26, 6.045175e-25, 2.799411e-22, 9.28234e-21, 8.811561e-19, 1.248904e-17, 4.171501e-16, 3.324225e-15, 5.380995e-14, 2.851668e-13 };
   graph = new TGraph(31,Graph_fx257,Graph_fy257);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph257 = new TH1F("Graph_Graph257","",100,0.76,10.84);
   Graph_Graph257->SetMinimum(1.437038e-106);
   Graph_Graph257->SetMaximum(3.136835e-13);
   Graph_Graph257->SetDirectory(nullptr);
   Graph_Graph257->SetStats(0);
   Graph_Graph257->SetLineWidth(2);
   Graph_Graph257->SetMarkerStyle(20);
   Graph_Graph257->SetMarkerSize(0.9);
   Graph_Graph257->GetXaxis()->SetLabelFont(42);
   Graph_Graph257->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph257->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph257->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph257->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph257->GetXaxis()->SetTitleFont(42);
   Graph_Graph257->GetYaxis()->SetLabelFont(42);
   Graph_Graph257->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph257->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph257->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph257->GetYaxis()->SetTickLength(0.02);
   Graph_Graph257->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph257->GetYaxis()->SetTitleFont(42);
   Graph_Graph257->GetZaxis()->SetLabelFont(42);
   Graph_Graph257->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph257->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph257->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph257->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph257->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph257);
   
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
   
   Double_t Graph_fx259[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy259[31] = { 1.756379e-106, 4.515198e-94, 3.767202e-84, 4.875225e-76, 2.775891e-69, 1.431027e-63, 1.118258e-58, 1.932752e-54, 9.80824e-51, 1.814913e-47, 1.449167e-44, 5.703151e-42, 1.230335e-39, 1.585687e-37, 1.309994e-35, 7.352378e-34, 2.94259e-32,
   8.746644e-31, 1.998518e-29, 3.614583e-28, 5.306389e-27, 6.461475e-26, 6.649692e-25, 3.079352e-22, 1.021057e-20, 9.692718e-19, 1.373794e-17, 4.588651e-16, 3.656648e-15, 5.919094e-14, 3.136835e-13 };
   graph = new TGraph(31,Graph_fx259,Graph_fy259);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph259 = new TH1F("Graph_Graph259","",100,0.76,10.84);
   Graph_Graph259->SetMinimum(1.580741e-106);
   Graph_Graph259->SetMaximum(3.450518e-13);
   Graph_Graph259->SetDirectory(nullptr);
   Graph_Graph259->SetStats(0);
   Graph_Graph259->SetLineWidth(2);
   Graph_Graph259->SetMarkerStyle(20);
   Graph_Graph259->SetMarkerSize(0.9);
   Graph_Graph259->GetXaxis()->SetLabelFont(42);
   Graph_Graph259->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph259->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph259->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph259->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph259->GetXaxis()->SetTitleFont(42);
   Graph_Graph259->GetYaxis()->SetLabelFont(42);
   Graph_Graph259->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph259->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph259->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph259->GetYaxis()->SetTickLength(0.02);
   Graph_Graph259->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph259->GetYaxis()->SetTitleFont(42);
   Graph_Graph259->GetZaxis()->SetLabelFont(42);
   Graph_Graph259->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph259->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph259->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph259->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph259->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph259);
   
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
