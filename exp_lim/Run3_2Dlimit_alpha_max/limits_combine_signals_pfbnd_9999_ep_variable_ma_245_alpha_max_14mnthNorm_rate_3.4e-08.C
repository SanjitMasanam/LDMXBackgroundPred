#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_14mnthNorm_rate_3.4e-08()
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
   
   Double_t Graph0_fx148[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy148[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(31,Graph0_fx148,Graph0_fy148);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0148 = new TH1F("Graph_Graph0148","",100,0.76,10.84);
   Graph_Graph0148->SetMinimum(0.2);
   Graph_Graph0148->SetMaximum(100000);
   Graph_Graph0148->SetDirectory(nullptr);
   Graph_Graph0148->SetStats(0);
   Graph_Graph0148->SetLineWidth(2);
   Graph_Graph0148->SetMarkerStyle(20);
   Graph_Graph0148->SetMarkerSize(0.9);
   Graph_Graph0148->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0148->GetXaxis()->SetRange(4,92);
   Graph_Graph0148->GetXaxis()->SetLabelFont(42);
   Graph_Graph0148->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0148->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0148->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0148->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0148->GetXaxis()->SetTitleFont(42);
   Graph_Graph0148->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0148->GetYaxis()->SetLabelFont(42);
   Graph_Graph0148->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0148->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0148->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0148->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0148->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0148->GetYaxis()->SetTitleFont(42);
   Graph_Graph0148->GetZaxis()->SetLabelFont(42);
   Graph_Graph0148->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0148->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0148->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0148->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0148->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0148);
   
   graph->Draw("al");
   
   Double_t Graph1_fx149[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy149[64] = { 9.981168, 9.272051, 10.55289, 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828,
   7.470015, 7.27591, 7.273525, 7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183,
   1.62183, 1.573178, 1.541047, 1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213,
   1.456955, 1.390045, 1.376807, 1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478, 2.721786, 2.276199, 2.407628 };
   graph = new TGraph(64,Graph1_fx149,Graph1_fy149);
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
   
   TH1F *Graph_Graph1149 = new TH1F("Graph_Graph1149","Graph",100,0.76,10.84);
   Graph_Graph1149->SetMinimum(0.4554363);
   Graph_Graph1149->SetMaximum(11.47084);
   Graph_Graph1149->SetDirectory(nullptr);
   Graph_Graph1149->SetStats(0);
   Graph_Graph1149->SetLineWidth(2);
   Graph_Graph1149->SetMarkerStyle(20);
   Graph_Graph1149->SetMarkerSize(0.9);
   Graph_Graph1149->GetXaxis()->SetLabelFont(42);
   Graph_Graph1149->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1149->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1149->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1149->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1149->GetXaxis()->SetTitleFont(42);
   Graph_Graph1149->GetYaxis()->SetLabelFont(42);
   Graph_Graph1149->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1149->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1149->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1149->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1149->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1149->GetYaxis()->SetTitleFont(42);
   Graph_Graph1149->GetZaxis()->SetLabelFont(42);
   Graph_Graph1149->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1149->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1149->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1149->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1149->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1149);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx150[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy150[64] = { 7.041793, 6.522612, 7.53601, 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635,
   4.973852, 4.815523, 4.7865, 4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087,
   2.248087, 2.16193, 2.108827, 2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424,
   2.032049, 1.968507, 1.949759, 2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049, 3.685378, 3.090679, 3.348122 };
   graph = new TGraph(64,Graph2_fx150,Graph2_fy150);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2150 = new TH1F("Graph_Graph2150","Graph",100,0.76,10.84);
   Graph_Graph2150->SetMinimum(1.377724);
   Graph_Graph2150->SetMaximum(8.095854);
   Graph_Graph2150->SetDirectory(nullptr);
   Graph_Graph2150->SetStats(0);
   Graph_Graph2150->SetLineWidth(2);
   Graph_Graph2150->SetMarkerStyle(20);
   Graph_Graph2150->SetMarkerSize(0.9);
   Graph_Graph2150->GetXaxis()->SetLabelFont(42);
   Graph_Graph2150->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2150->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2150->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2150->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2150->GetXaxis()->SetTitleFont(42);
   Graph_Graph2150->GetYaxis()->SetLabelFont(42);
   Graph_Graph2150->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2150->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2150->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2150->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2150->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2150->GetYaxis()->SetTitleFont(42);
   Graph_Graph2150->GetZaxis()->SetLabelFont(42);
   Graph_Graph2150->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2150->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2150->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2150->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2150->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2150);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx151[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy151[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(31,Graph0_fx151,Graph0_fy151);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0151 = new TH1F("Graph_Graph0151","",100,0.76,10.84);
   Graph_Graph0151->SetMinimum(0.2);
   Graph_Graph0151->SetMaximum(100000);
   Graph_Graph0151->SetDirectory(nullptr);
   Graph_Graph0151->SetStats(0);
   Graph_Graph0151->SetLineWidth(2);
   Graph_Graph0151->SetMarkerStyle(20);
   Graph_Graph0151->SetMarkerSize(0.9);
   Graph_Graph0151->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0151->GetXaxis()->SetRange(4,92);
   Graph_Graph0151->GetXaxis()->SetLabelFont(42);
   Graph_Graph0151->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0151->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0151->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0151->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0151->GetXaxis()->SetTitleFont(42);
   Graph_Graph0151->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0151->GetYaxis()->SetLabelFont(42);
   Graph_Graph0151->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0151->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0151->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0151->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0151->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0151->GetYaxis()->SetTitleFont(42);
   Graph_Graph0151->GetZaxis()->SetLabelFont(42);
   Graph_Graph0151->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0151->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0151->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0151->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0151->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0151);
   
   graph->Draw("l");
   
   Double_t Graph_fx152[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy152[31] = { 0.5840981, 1.322415, 2.503618, 4.167561, 6.305767, 8.872679, 11.7996, 15.00711, 18.41442, 21.94552, 25.53264, 29.11786, 32.6534, 36.10108, 39.43144, 42.62257, 45.65903,
   48.53071, 51.23188, 53.76028, 56.11642, 58.30291, 60.32397, 65.45252, 68.16063, 71.3009, 72.86203, 74.53463, 75.27078, 75.90675, 76.06868 };
   graph = new TGraph(31,Graph_fx152,Graph_fy152);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph152 = new TH1F("Graph_Graph152","",100,0.76,10.84);
   Graph_Graph152->SetMinimum(0.5256883);
   Graph_Graph152->SetMaximum(83.61714);
   Graph_Graph152->SetDirectory(nullptr);
   Graph_Graph152->SetStats(0);
   Graph_Graph152->SetLineWidth(2);
   Graph_Graph152->SetMarkerStyle(20);
   Graph_Graph152->SetMarkerSize(0.9);
   Graph_Graph152->GetXaxis()->SetLabelFont(42);
   Graph_Graph152->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph152->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph152->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph152->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph152->GetXaxis()->SetTitleFont(42);
   Graph_Graph152->GetYaxis()->SetLabelFont(42);
   Graph_Graph152->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph152->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph152->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph152->GetYaxis()->SetTickLength(0.02);
   Graph_Graph152->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph152->GetYaxis()->SetTitleFont(42);
   Graph_Graph152->GetZaxis()->SetLabelFont(42);
   Graph_Graph152->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph152->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph152->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph152->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph152->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph152);
   
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
   
   Double_t Graph_fx154[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy154[31] = { 0.6425079, 1.454656, 2.75398, 4.584317, 6.936343, 9.759947, 12.97956, 16.50782, 20.25587, 24.14007, 28.0859, 32.02965, 35.91874, 39.71119, 43.37458, 46.88482, 50.22493,
   53.38378, 56.35507, 59.13631, 61.72806, 64.1332, 66.35637, 71.99777, 74.97669, 78.43099, 80.14823, 81.9881, 82.79786, 83.49743, 83.67555 };
   graph = new TGraph(31,Graph_fx154,Graph_fy154);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph154 = new TH1F("Graph_Graph154","",100,0.76,10.84);
   Graph_Graph154->SetMinimum(0.5782571);
   Graph_Graph154->SetMaximum(91.97885);
   Graph_Graph154->SetDirectory(nullptr);
   Graph_Graph154->SetStats(0);
   Graph_Graph154->SetLineWidth(2);
   Graph_Graph154->SetMarkerStyle(20);
   Graph_Graph154->SetMarkerSize(0.9);
   Graph_Graph154->GetXaxis()->SetLabelFont(42);
   Graph_Graph154->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph154->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph154->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph154->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph154->GetXaxis()->SetTitleFont(42);
   Graph_Graph154->GetYaxis()->SetLabelFont(42);
   Graph_Graph154->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph154->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph154->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph154->GetYaxis()->SetTickLength(0.02);
   Graph_Graph154->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph154->GetYaxis()->SetTitleFont(42);
   Graph_Graph154->GetZaxis()->SetLabelFont(42);
   Graph_Graph154->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph154->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph154->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph154->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph154->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph154);
   
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
   line = new TLine(2.267298,0,2.267298,4.790729);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(2.262298,0,"  2.27 TeV");

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
