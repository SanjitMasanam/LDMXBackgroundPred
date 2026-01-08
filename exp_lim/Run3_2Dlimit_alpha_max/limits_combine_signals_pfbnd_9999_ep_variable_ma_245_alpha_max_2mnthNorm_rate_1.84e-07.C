#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_1.84e-07()
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
   
   Double_t Graph0_fx190[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy190[28] = { 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488, 3.23373, 3.106641, 3.064277,
   2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(28,Graph0_fx190,Graph0_fy190);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0190 = new TH1F("Graph_Graph0190","",100,1.42,10.78);
   Graph_Graph0190->SetMinimum(0.2);
   Graph_Graph0190->SetMaximum(100000);
   Graph_Graph0190->SetDirectory(nullptr);
   Graph_Graph0190->SetStats(0);
   Graph_Graph0190->SetLineWidth(2);
   Graph_Graph0190->SetMarkerStyle(20);
   Graph_Graph0190->SetMarkerSize(0.9);
   Graph_Graph0190->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0190->GetXaxis()->SetRange(0,92);
   Graph_Graph0190->GetXaxis()->SetLabelFont(42);
   Graph_Graph0190->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0190->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0190->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0190->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0190->GetXaxis()->SetTitleFont(42);
   Graph_Graph0190->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0190->GetYaxis()->SetLabelFont(42);
   Graph_Graph0190->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0190->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0190->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0190->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0190->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0190->GetYaxis()->SetTitleFont(42);
   Graph_Graph0190->GetZaxis()->SetLabelFont(42);
   Graph_Graph0190->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0190->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0190->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0190->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0190->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0190);
   
   graph->Draw("al");
   
   Double_t Graph1_fx191[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph1_fy191[58] = { 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828, 7.470015, 7.27591, 7.273525,
   7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183, 1.62183, 1.573178, 1.541047,
   1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213, 1.456955, 1.390045, 1.376807,
   1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478 };
   graph = new TGraph(58,Graph1_fx191,Graph1_fy191);
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
   
   TH1F *Graph_Graph1191 = new TH1F("Graph_Graph1191","Graph",100,1.42,10.78);
   Graph_Graph1191->SetMinimum(0.4577757);
   Graph_Graph1191->SetMaximum(11.44511);
   Graph_Graph1191->SetDirectory(nullptr);
   Graph_Graph1191->SetStats(0);
   Graph_Graph1191->SetLineWidth(2);
   Graph_Graph1191->SetMarkerStyle(20);
   Graph_Graph1191->SetMarkerSize(0.9);
   Graph_Graph1191->GetXaxis()->SetLabelFont(42);
   Graph_Graph1191->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1191->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1191->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1191->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1191->GetXaxis()->SetTitleFont(42);
   Graph_Graph1191->GetYaxis()->SetLabelFont(42);
   Graph_Graph1191->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1191->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1191->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1191->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1191->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1191->GetYaxis()->SetTitleFont(42);
   Graph_Graph1191->GetZaxis()->SetLabelFont(42);
   Graph_Graph1191->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1191->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1191->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1191->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1191->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1191);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx192[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph2_fy192[58] = { 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635, 4.973852, 4.815523, 4.7865,
   4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087, 2.248087, 2.16193, 2.108827,
   2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424, 2.032049, 1.968507, 1.949759,
   2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049 };
   graph = new TGraph(58,Graph2_fx192,Graph2_fy192);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2192 = new TH1F("Graph_Graph2192","Graph",100,1.42,10.78);
   Graph_Graph2192->SetMinimum(1.381747);
   Graph_Graph2192->SetMaximum(8.051608);
   Graph_Graph2192->SetDirectory(nullptr);
   Graph_Graph2192->SetStats(0);
   Graph_Graph2192->SetLineWidth(2);
   Graph_Graph2192->SetMarkerStyle(20);
   Graph_Graph2192->SetMarkerSize(0.9);
   Graph_Graph2192->GetXaxis()->SetLabelFont(42);
   Graph_Graph2192->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2192->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2192->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2192->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2192->GetXaxis()->SetTitleFont(42);
   Graph_Graph2192->GetYaxis()->SetLabelFont(42);
   Graph_Graph2192->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2192->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2192->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2192->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2192->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2192->GetYaxis()->SetTitleFont(42);
   Graph_Graph2192->GetZaxis()->SetLabelFont(42);
   Graph_Graph2192->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2192->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2192->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2192->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2192->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2192);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx193[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy193[28] = { 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488, 3.23373, 3.106641, 3.064277,
   2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(28,Graph0_fx193,Graph0_fy193);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0193 = new TH1F("Graph_Graph0193","",100,1.42,10.78);
   Graph_Graph0193->SetMinimum(0.2);
   Graph_Graph0193->SetMaximum(100000);
   Graph_Graph0193->SetDirectory(nullptr);
   Graph_Graph0193->SetStats(0);
   Graph_Graph0193->SetLineWidth(2);
   Graph_Graph0193->SetMarkerStyle(20);
   Graph_Graph0193->SetMarkerSize(0.9);
   Graph_Graph0193->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0193->GetXaxis()->SetRange(0,92);
   Graph_Graph0193->GetXaxis()->SetLabelFont(42);
   Graph_Graph0193->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0193->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0193->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0193->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0193->GetXaxis()->SetTitleFont(42);
   Graph_Graph0193->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0193->GetYaxis()->SetLabelFont(42);
   Graph_Graph0193->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0193->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0193->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0193->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0193->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0193->GetYaxis()->SetTitleFont(42);
   Graph_Graph0193->GetZaxis()->SetLabelFont(42);
   Graph_Graph0193->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0193->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0193->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0193->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0193->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0193);
   
   graph->Draw("l");
   
   Double_t Graph_fx194[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy194[28] = { 4.432022e-76, 2.523537e-69, 1.300934e-63, 1.016598e-58, 1.757047e-54, 8.916582e-51, 1.649921e-47, 1.317425e-44, 5.184683e-42, 1.118486e-39, 1.441533e-37, 1.190903e-35, 6.68398e-34, 2.675082e-32, 7.951494e-31, 1.816835e-29, 3.285985e-28,
   4.82399e-27, 5.874068e-26, 6.045175e-25, 2.799411e-22, 9.28234e-21, 8.811561e-19, 1.248904e-17, 4.171501e-16, 3.324225e-15, 5.380995e-14, 2.851668e-13 };
   graph = new TGraph(28,Graph_fx194,Graph_fy194);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph194 = new TH1F("Graph_Graph194","",100,1.42,10.78);
   Graph_Graph194->SetMinimum(3.98882e-76);
   Graph_Graph194->SetMaximum(3.136835e-13);
   Graph_Graph194->SetDirectory(nullptr);
   Graph_Graph194->SetStats(0);
   Graph_Graph194->SetLineWidth(2);
   Graph_Graph194->SetMarkerStyle(20);
   Graph_Graph194->SetMarkerSize(0.9);
   Graph_Graph194->GetXaxis()->SetLabelFont(42);
   Graph_Graph194->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph194->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph194->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph194->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph194->GetXaxis()->SetTitleFont(42);
   Graph_Graph194->GetYaxis()->SetLabelFont(42);
   Graph_Graph194->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph194->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph194->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph194->GetYaxis()->SetTickLength(0.02);
   Graph_Graph194->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph194->GetYaxis()->SetTitleFont(42);
   Graph_Graph194->GetZaxis()->SetLabelFont(42);
   Graph_Graph194->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph194->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph194->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph194->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph194->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph194);
   
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
   
   Double_t Graph_fx196[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy196[28] = { 4.875225e-76, 2.775891e-69, 1.431027e-63, 1.118258e-58, 1.932752e-54, 9.80824e-51, 1.814913e-47, 1.449167e-44, 5.703151e-42, 1.230335e-39, 1.585687e-37, 1.309994e-35, 7.352378e-34, 2.94259e-32, 8.746644e-31, 1.998518e-29, 3.614583e-28,
   5.306389e-27, 6.461475e-26, 6.649692e-25, 3.079352e-22, 1.021057e-20, 9.692718e-19, 1.373794e-17, 4.588651e-16, 3.656648e-15, 5.919094e-14, 3.136835e-13 };
   graph = new TGraph(28,Graph_fx196,Graph_fy196);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph196 = new TH1F("Graph_Graph196","",100,1.42,10.78);
   Graph_Graph196->SetMinimum(4.387702e-76);
   Graph_Graph196->SetMaximum(3.450518e-13);
   Graph_Graph196->SetDirectory(nullptr);
   Graph_Graph196->SetStats(0);
   Graph_Graph196->SetLineWidth(2);
   Graph_Graph196->SetMarkerStyle(20);
   Graph_Graph196->SetMarkerSize(0.9);
   Graph_Graph196->GetXaxis()->SetLabelFont(42);
   Graph_Graph196->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph196->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph196->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph196->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph196->GetXaxis()->SetTitleFont(42);
   Graph_Graph196->GetYaxis()->SetLabelFont(42);
   Graph_Graph196->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph196->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph196->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph196->GetYaxis()->SetTickLength(0.02);
   Graph_Graph196->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph196->GetYaxis()->SetTitleFont(42);
   Graph_Graph196->GetZaxis()->SetLabelFont(42);
   Graph_Graph196->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph196->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph196->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph196->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph196->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph196);
   
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
