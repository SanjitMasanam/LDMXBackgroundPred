#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_1.34e-07()
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
   
   Double_t Graph0_fx155[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy155[28] = { 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488, 3.23373, 3.106641, 3.064277,
   2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(28,Graph0_fx155,Graph0_fy155);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0155 = new TH1F("Graph_Graph0155","",100,1.42,10.78);
   Graph_Graph0155->SetMinimum(0.2);
   Graph_Graph0155->SetMaximum(100000);
   Graph_Graph0155->SetDirectory(nullptr);
   Graph_Graph0155->SetStats(0);
   Graph_Graph0155->SetLineWidth(2);
   Graph_Graph0155->SetMarkerStyle(20);
   Graph_Graph0155->SetMarkerSize(0.9);
   Graph_Graph0155->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0155->GetXaxis()->SetRange(0,92);
   Graph_Graph0155->GetXaxis()->SetLabelFont(42);
   Graph_Graph0155->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0155->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0155->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0155->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0155->GetXaxis()->SetTitleFont(42);
   Graph_Graph0155->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0155->GetYaxis()->SetLabelFont(42);
   Graph_Graph0155->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0155->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0155->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0155->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0155->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0155->GetYaxis()->SetTitleFont(42);
   Graph_Graph0155->GetZaxis()->SetLabelFont(42);
   Graph_Graph0155->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0155->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0155->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0155->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0155->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0155);
   
   graph->Draw("al");
   
   Double_t Graph1_fx156[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph1_fy156[58] = { 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828, 7.470015, 7.27591, 7.273525,
   7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183, 1.62183, 1.573178, 1.541047,
   1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213, 1.456955, 1.390045, 1.376807,
   1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478 };
   graph = new TGraph(58,Graph1_fx156,Graph1_fy156);
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
   
   TH1F *Graph_Graph1156 = new TH1F("Graph_Graph1156","Graph",100,1.42,10.78);
   Graph_Graph1156->SetMinimum(0.4577757);
   Graph_Graph1156->SetMaximum(11.44511);
   Graph_Graph1156->SetDirectory(nullptr);
   Graph_Graph1156->SetStats(0);
   Graph_Graph1156->SetLineWidth(2);
   Graph_Graph1156->SetMarkerStyle(20);
   Graph_Graph1156->SetMarkerSize(0.9);
   Graph_Graph1156->GetXaxis()->SetLabelFont(42);
   Graph_Graph1156->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1156->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1156->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1156->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1156->GetXaxis()->SetTitleFont(42);
   Graph_Graph1156->GetYaxis()->SetLabelFont(42);
   Graph_Graph1156->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1156->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1156->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1156->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1156->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1156->GetYaxis()->SetTitleFont(42);
   Graph_Graph1156->GetZaxis()->SetLabelFont(42);
   Graph_Graph1156->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1156->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1156->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1156->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1156->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1156);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx157[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph2_fy157[58] = { 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635, 4.973852, 4.815523, 4.7865,
   4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087, 2.248087, 2.16193, 2.108827,
   2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424, 2.032049, 1.968507, 1.949759,
   2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049 };
   graph = new TGraph(58,Graph2_fx157,Graph2_fy157);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2157 = new TH1F("Graph_Graph2157","Graph",100,1.42,10.78);
   Graph_Graph2157->SetMinimum(1.381747);
   Graph_Graph2157->SetMaximum(8.051608);
   Graph_Graph2157->SetDirectory(nullptr);
   Graph_Graph2157->SetStats(0);
   Graph_Graph2157->SetLineWidth(2);
   Graph_Graph2157->SetMarkerStyle(20);
   Graph_Graph2157->SetMarkerSize(0.9);
   Graph_Graph2157->GetXaxis()->SetLabelFont(42);
   Graph_Graph2157->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2157->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2157->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2157->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2157->GetXaxis()->SetTitleFont(42);
   Graph_Graph2157->GetYaxis()->SetLabelFont(42);
   Graph_Graph2157->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2157->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2157->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2157->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2157->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2157->GetYaxis()->SetTitleFont(42);
   Graph_Graph2157->GetZaxis()->SetLabelFont(42);
   Graph_Graph2157->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2157->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2157->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2157->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2157->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2157);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx158[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy158[28] = { 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488, 3.23373, 3.106641, 3.064277,
   2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(28,Graph0_fx158,Graph0_fy158);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0158 = new TH1F("Graph_Graph0158","",100,1.42,10.78);
   Graph_Graph0158->SetMinimum(0.2);
   Graph_Graph0158->SetMaximum(100000);
   Graph_Graph0158->SetDirectory(nullptr);
   Graph_Graph0158->SetStats(0);
   Graph_Graph0158->SetLineWidth(2);
   Graph_Graph0158->SetMarkerStyle(20);
   Graph_Graph0158->SetMarkerSize(0.9);
   Graph_Graph0158->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0158->GetXaxis()->SetRange(0,92);
   Graph_Graph0158->GetXaxis()->SetLabelFont(42);
   Graph_Graph0158->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0158->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0158->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0158->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0158->GetXaxis()->SetTitleFont(42);
   Graph_Graph0158->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0158->GetYaxis()->SetLabelFont(42);
   Graph_Graph0158->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0158->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0158->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0158->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0158->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0158->GetYaxis()->SetTitleFont(42);
   Graph_Graph0158->GetZaxis()->SetLabelFont(42);
   Graph_Graph0158->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0158->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0158->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0158->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0158->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0158);
   
   graph->Draw("l");
   
   Double_t Graph_fx159[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy159[28] = { 2.905312e-38, 1.050303e-34, 1.066999e-31, 4.000803e-29, 6.76174e-27, 5.983645e-25, 3.108895e-23, 1.036686e-21, 2.380143e-20, 3.979925e-19, 5.07233e-18, 5.113859e-17, 4.205644e-16, 2.894448e-15, 1.703234e-14, 8.726616e-14, 3.953636e-13,
   1.605022e-12, 5.905512e-12, 1.988941e-11, 4.845791e-10, 2.986394e-09, 3.166418e-08, 1.24947e-07, 7.662486e-07, 2.236396e-06, 9.387534e-06, 2.213534e-05 };
   graph = new TGraph(28,Graph_fx159,Graph_fy159);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph159 = new TH1F("Graph_Graph159","",100,1.42,10.78);
   Graph_Graph159->SetMinimum(2.614781e-38);
   Graph_Graph159->SetMaximum(2.434888e-05);
   Graph_Graph159->SetDirectory(nullptr);
   Graph_Graph159->SetStats(0);
   Graph_Graph159->SetLineWidth(2);
   Graph_Graph159->SetMarkerStyle(20);
   Graph_Graph159->SetMarkerSize(0.9);
   Graph_Graph159->GetXaxis()->SetLabelFont(42);
   Graph_Graph159->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph159->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph159->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph159->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph159->GetXaxis()->SetTitleFont(42);
   Graph_Graph159->GetYaxis()->SetLabelFont(42);
   Graph_Graph159->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph159->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph159->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph159->GetYaxis()->SetTickLength(0.02);
   Graph_Graph159->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph159->GetYaxis()->SetTitleFont(42);
   Graph_Graph159->GetZaxis()->SetLabelFont(42);
   Graph_Graph159->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph159->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph159->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph159->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph159->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph159);
   
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
   
   Double_t Graph_fx161[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy161[28] = { 3.195844e-38, 1.155333e-34, 1.173699e-31, 4.400884e-29, 7.437914e-27, 6.582009e-25, 3.419785e-23, 1.140354e-21, 2.618157e-20, 4.377918e-19, 5.579563e-18, 5.625244e-17, 4.626209e-16, 3.183893e-15, 1.873558e-14, 9.599278e-14, 4.348999e-13,
   1.765524e-12, 6.496064e-12, 2.187835e-11, 5.33037e-10, 3.285033e-09, 3.483059e-08, 1.374417e-07, 8.428734e-07, 2.460036e-06, 1.032629e-05, 2.434888e-05 };
   graph = new TGraph(28,Graph_fx161,Graph_fy161);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph161 = new TH1F("Graph_Graph161","",100,1.42,10.78);
   Graph_Graph161->SetMinimum(2.876259e-38);
   Graph_Graph161->SetMaximum(2.678377e-05);
   Graph_Graph161->SetDirectory(nullptr);
   Graph_Graph161->SetStats(0);
   Graph_Graph161->SetLineWidth(2);
   Graph_Graph161->SetMarkerStyle(20);
   Graph_Graph161->SetMarkerSize(0.9);
   Graph_Graph161->GetXaxis()->SetLabelFont(42);
   Graph_Graph161->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph161->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph161->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph161->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph161->GetXaxis()->SetTitleFont(42);
   Graph_Graph161->GetYaxis()->SetLabelFont(42);
   Graph_Graph161->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph161->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph161->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph161->GetYaxis()->SetTickLength(0.02);
   Graph_Graph161->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph161->GetYaxis()->SetTitleFont(42);
   Graph_Graph161->GetZaxis()->SetLabelFont(42);
   Graph_Graph161->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph161->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph161->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph161->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph161->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph161);
   
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
