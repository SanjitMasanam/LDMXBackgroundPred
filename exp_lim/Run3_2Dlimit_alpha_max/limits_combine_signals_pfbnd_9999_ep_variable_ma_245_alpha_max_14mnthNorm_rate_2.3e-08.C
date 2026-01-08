#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_14mnthNorm_rate_2.3e-08()
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
   
   Double_t Graph0_fx134[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy134[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(31,Graph0_fx134,Graph0_fy134);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0134 = new TH1F("Graph_Graph0134","",100,0.76,10.84);
   Graph_Graph0134->SetMinimum(0.2);
   Graph_Graph0134->SetMaximum(100000);
   Graph_Graph0134->SetDirectory(nullptr);
   Graph_Graph0134->SetStats(0);
   Graph_Graph0134->SetLineWidth(2);
   Graph_Graph0134->SetMarkerStyle(20);
   Graph_Graph0134->SetMarkerSize(0.9);
   Graph_Graph0134->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0134->GetXaxis()->SetRange(4,92);
   Graph_Graph0134->GetXaxis()->SetLabelFont(42);
   Graph_Graph0134->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0134->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0134->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0134->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0134->GetXaxis()->SetTitleFont(42);
   Graph_Graph0134->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0134->GetYaxis()->SetLabelFont(42);
   Graph_Graph0134->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0134->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0134->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0134->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0134->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0134->GetYaxis()->SetTitleFont(42);
   Graph_Graph0134->GetZaxis()->SetLabelFont(42);
   Graph_Graph0134->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0134->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0134->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0134->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0134->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0134);
   
   graph->Draw("al");
   
   Double_t Graph1_fx135[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy135[64] = { 9.981168, 9.272051, 10.55289, 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828,
   7.470015, 7.27591, 7.273525, 7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183,
   1.62183, 1.573178, 1.541047, 1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213,
   1.456955, 1.390045, 1.376807, 1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478, 2.721786, 2.276199, 2.407628 };
   graph = new TGraph(64,Graph1_fx135,Graph1_fy135);
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
   
   TH1F *Graph_Graph1135 = new TH1F("Graph_Graph1135","Graph",100,0.76,10.84);
   Graph_Graph1135->SetMinimum(0.4554363);
   Graph_Graph1135->SetMaximum(11.47084);
   Graph_Graph1135->SetDirectory(nullptr);
   Graph_Graph1135->SetStats(0);
   Graph_Graph1135->SetLineWidth(2);
   Graph_Graph1135->SetMarkerStyle(20);
   Graph_Graph1135->SetMarkerSize(0.9);
   Graph_Graph1135->GetXaxis()->SetLabelFont(42);
   Graph_Graph1135->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1135->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1135->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1135->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1135->GetXaxis()->SetTitleFont(42);
   Graph_Graph1135->GetYaxis()->SetLabelFont(42);
   Graph_Graph1135->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1135->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1135->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1135->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1135->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1135->GetYaxis()->SetTitleFont(42);
   Graph_Graph1135->GetZaxis()->SetLabelFont(42);
   Graph_Graph1135->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1135->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1135->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1135->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1135->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1135);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx136[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy136[64] = { 7.041793, 6.522612, 7.53601, 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635,
   4.973852, 4.815523, 4.7865, 4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087,
   2.248087, 2.16193, 2.108827, 2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424,
   2.032049, 1.968507, 1.949759, 2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049, 3.685378, 3.090679, 3.348122 };
   graph = new TGraph(64,Graph2_fx136,Graph2_fy136);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2136 = new TH1F("Graph_Graph2136","Graph",100,0.76,10.84);
   Graph_Graph2136->SetMinimum(1.377724);
   Graph_Graph2136->SetMaximum(8.095854);
   Graph_Graph2136->SetDirectory(nullptr);
   Graph_Graph2136->SetStats(0);
   Graph_Graph2136->SetLineWidth(2);
   Graph_Graph2136->SetMarkerStyle(20);
   Graph_Graph2136->SetMarkerSize(0.9);
   Graph_Graph2136->GetXaxis()->SetLabelFont(42);
   Graph_Graph2136->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2136->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2136->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2136->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2136->GetXaxis()->SetTitleFont(42);
   Graph_Graph2136->GetYaxis()->SetLabelFont(42);
   Graph_Graph2136->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2136->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2136->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2136->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2136->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2136->GetYaxis()->SetTitleFont(42);
   Graph_Graph2136->GetZaxis()->SetLabelFont(42);
   Graph_Graph2136->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2136->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2136->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2136->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2136->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2136);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx137[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy137[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(31,Graph0_fx137,Graph0_fy137);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0137 = new TH1F("Graph_Graph0137","",100,0.76,10.84);
   Graph_Graph0137->SetMinimum(0.2);
   Graph_Graph0137->SetMaximum(100000);
   Graph_Graph0137->SetDirectory(nullptr);
   Graph_Graph0137->SetStats(0);
   Graph_Graph0137->SetLineWidth(2);
   Graph_Graph0137->SetMarkerStyle(20);
   Graph_Graph0137->SetMarkerSize(0.9);
   Graph_Graph0137->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0137->GetXaxis()->SetRange(4,92);
   Graph_Graph0137->GetXaxis()->SetLabelFont(42);
   Graph_Graph0137->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0137->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0137->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0137->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0137->GetXaxis()->SetTitleFont(42);
   Graph_Graph0137->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0137->GetYaxis()->SetLabelFont(42);
   Graph_Graph0137->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0137->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0137->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0137->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0137->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0137->GetYaxis()->SetTitleFont(42);
   Graph_Graph0137->GetZaxis()->SetLabelFont(42);
   Graph_Graph0137->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0137->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0137->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0137->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0137->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0137);
   
   graph->Draw("l");
   
   Double_t Graph_fx138[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy138[31] = { 14.71736, 19.5687, 24.20151, 28.43533, 32.18345, 35.42134, 38.1622, 40.44007, 42.2988, 43.78537, 44.94596, 45.82383, 46.45832, 46.88454, 47.13339, 47.23183, 47.20324,
   47.0678, 46.84284, 46.54326, 46.18181, 45.76939, 45.31534, 43.7773, 42.66164, 40.93161, 39.77101, 38.05357, 36.93702, 35.31838, 34.2813 };
   graph = new TGraph(31,Graph_fx138,Graph_fy138);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph138 = new TH1F("Graph_Graph138","",100,0.76,10.84);
   Graph_Graph138->SetMinimum(11.46592);
   Graph_Graph138->SetMaximum(50.48328);
   Graph_Graph138->SetDirectory(nullptr);
   Graph_Graph138->SetStats(0);
   Graph_Graph138->SetLineWidth(2);
   Graph_Graph138->SetMarkerStyle(20);
   Graph_Graph138->SetMarkerSize(0.9);
   Graph_Graph138->GetXaxis()->SetLabelFont(42);
   Graph_Graph138->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph138->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph138->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph138->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph138->GetXaxis()->SetTitleFont(42);
   Graph_Graph138->GetYaxis()->SetLabelFont(42);
   Graph_Graph138->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph138->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph138->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph138->GetYaxis()->SetTickLength(0.02);
   Graph_Graph138->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph138->GetYaxis()->SetTitleFont(42);
   Graph_Graph138->GetZaxis()->SetLabelFont(42);
   Graph_Graph138->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph138->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph138->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph138->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph138->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph138);
   
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
   
   Double_t Graph_fx140[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy140[31] = { 16.1891, 21.52557, 26.62166, 31.27887, 35.40179, 38.96347, 41.97842, 44.48408, 46.52868, 48.16391, 49.44056, 50.40621, 51.10415, 51.57299, 51.84672, 51.95501, 51.92357,
   51.77458, 51.52712, 51.19758, 50.79999, 50.34633, 49.84687, 48.15503, 46.9278, 45.02477, 43.74811, 41.85893, 40.63072, 38.85022, 37.70943 };
   graph = new TGraph(31,Graph_fx140,Graph_fy140);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph140 = new TH1F("Graph_Graph140","",100,0.76,10.84);
   Graph_Graph140->SetMinimum(12.61251);
   Graph_Graph140->SetMaximum(55.5316);
   Graph_Graph140->SetDirectory(nullptr);
   Graph_Graph140->SetStats(0);
   Graph_Graph140->SetLineWidth(2);
   Graph_Graph140->SetMarkerStyle(20);
   Graph_Graph140->SetMarkerSize(0.9);
   Graph_Graph140->GetXaxis()->SetLabelFont(42);
   Graph_Graph140->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph140->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph140->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph140->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph140->GetXaxis()->SetTitleFont(42);
   Graph_Graph140->GetYaxis()->SetLabelFont(42);
   Graph_Graph140->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph140->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph140->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph140->GetYaxis()->SetTickLength(0.02);
   Graph_Graph140->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph140->GetYaxis()->SetTitleFont(42);
   Graph_Graph140->GetZaxis()->SetLabelFont(42);
   Graph_Graph140->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph140->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph140->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph140->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph140->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph140);
   
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
