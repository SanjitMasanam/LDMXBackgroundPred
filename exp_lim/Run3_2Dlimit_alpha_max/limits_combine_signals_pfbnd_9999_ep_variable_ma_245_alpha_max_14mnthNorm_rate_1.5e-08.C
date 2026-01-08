#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_14mnthNorm_rate_1.5e-08()
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
   
   Double_t Graph0_fx78[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy78[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(31,Graph0_fx78,Graph0_fy78);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph078 = new TH1F("Graph_Graph078","",100,0.76,10.84);
   Graph_Graph078->SetMinimum(0.2);
   Graph_Graph078->SetMaximum(100000);
   Graph_Graph078->SetDirectory(nullptr);
   Graph_Graph078->SetStats(0);
   Graph_Graph078->SetLineWidth(2);
   Graph_Graph078->SetMarkerStyle(20);
   Graph_Graph078->SetMarkerSize(0.9);
   Graph_Graph078->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph078->GetXaxis()->SetRange(4,92);
   Graph_Graph078->GetXaxis()->SetLabelFont(42);
   Graph_Graph078->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph078->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph078->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph078->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph078->GetXaxis()->SetTitleFont(42);
   Graph_Graph078->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph078->GetYaxis()->SetLabelFont(42);
   Graph_Graph078->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph078->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph078->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph078->GetYaxis()->SetTickLength(0.02);
   Graph_Graph078->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph078->GetYaxis()->SetTitleFont(42);
   Graph_Graph078->GetZaxis()->SetLabelFont(42);
   Graph_Graph078->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph078->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph078->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph078->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph078->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph078);
   
   graph->Draw("al");
   
   Double_t Graph1_fx79[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy79[64] = { 9.981168, 9.272051, 10.55289, 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828,
   7.470015, 7.27591, 7.273525, 7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183,
   1.62183, 1.573178, 1.541047, 1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213,
   1.456955, 1.390045, 1.376807, 1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478, 2.721786, 2.276199, 2.407628 };
   graph = new TGraph(64,Graph1_fx79,Graph1_fy79);
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
   
   TH1F *Graph_Graph179 = new TH1F("Graph_Graph179","Graph",100,0.76,10.84);
   Graph_Graph179->SetMinimum(0.4554363);
   Graph_Graph179->SetMaximum(11.47084);
   Graph_Graph179->SetDirectory(nullptr);
   Graph_Graph179->SetStats(0);
   Graph_Graph179->SetLineWidth(2);
   Graph_Graph179->SetMarkerStyle(20);
   Graph_Graph179->SetMarkerSize(0.9);
   Graph_Graph179->GetXaxis()->SetLabelFont(42);
   Graph_Graph179->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph179->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph179->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph179->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph179->GetXaxis()->SetTitleFont(42);
   Graph_Graph179->GetYaxis()->SetLabelFont(42);
   Graph_Graph179->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph179->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph179->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph179->GetYaxis()->SetTickLength(0.02);
   Graph_Graph179->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph179->GetYaxis()->SetTitleFont(42);
   Graph_Graph179->GetZaxis()->SetLabelFont(42);
   Graph_Graph179->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph179->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph179->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph179->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph179->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph179);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx80[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy80[64] = { 7.041793, 6.522612, 7.53601, 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635,
   4.973852, 4.815523, 4.7865, 4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087,
   2.248087, 2.16193, 2.108827, 2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424,
   2.032049, 1.968507, 1.949759, 2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049, 3.685378, 3.090679, 3.348122 };
   graph = new TGraph(64,Graph2_fx80,Graph2_fy80);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph280 = new TH1F("Graph_Graph280","Graph",100,0.76,10.84);
   Graph_Graph280->SetMinimum(1.377724);
   Graph_Graph280->SetMaximum(8.095854);
   Graph_Graph280->SetDirectory(nullptr);
   Graph_Graph280->SetStats(0);
   Graph_Graph280->SetLineWidth(2);
   Graph_Graph280->SetMarkerStyle(20);
   Graph_Graph280->SetMarkerSize(0.9);
   Graph_Graph280->GetXaxis()->SetLabelFont(42);
   Graph_Graph280->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetXaxis()->SetTitleFont(42);
   Graph_Graph280->GetYaxis()->SetLabelFont(42);
   Graph_Graph280->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetYaxis()->SetTickLength(0.02);
   Graph_Graph280->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetYaxis()->SetTitleFont(42);
   Graph_Graph280->GetZaxis()->SetLabelFont(42);
   Graph_Graph280->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph280);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx81[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy81[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(31,Graph0_fx81,Graph0_fy81);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph081 = new TH1F("Graph_Graph081","",100,0.76,10.84);
   Graph_Graph081->SetMinimum(0.2);
   Graph_Graph081->SetMaximum(100000);
   Graph_Graph081->SetDirectory(nullptr);
   Graph_Graph081->SetStats(0);
   Graph_Graph081->SetLineWidth(2);
   Graph_Graph081->SetMarkerStyle(20);
   Graph_Graph081->SetMarkerSize(0.9);
   Graph_Graph081->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph081->GetXaxis()->SetRange(4,92);
   Graph_Graph081->GetXaxis()->SetLabelFont(42);
   Graph_Graph081->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph081->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph081->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph081->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph081->GetXaxis()->SetTitleFont(42);
   Graph_Graph081->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph081->GetYaxis()->SetLabelFont(42);
   Graph_Graph081->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph081->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph081->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph081->GetYaxis()->SetTickLength(0.02);
   Graph_Graph081->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph081->GetYaxis()->SetTitleFont(42);
   Graph_Graph081->GetZaxis()->SetLabelFont(42);
   Graph_Graph081->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph081->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph081->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph081->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph081->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph081);
   
   graph->Draw("l");
   
   Double_t Graph_fx82[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy82[31] = { 27.16048, 27.89953, 28.0685, 27.85341, 27.38559, 26.75646, 26.0292, 25.24726, 24.44042, 23.62889, 22.82627, 22.04151, 21.28035, 20.54624, 19.84109, 19.1657, 18.52011,
   17.90386, 17.31617, 16.75602, 16.22226, 15.71369, 15.22907, 13.90672, 13.12323, 12.07426, 11.44857, 10.60488, 10.09792, 9.409434, 8.992814 };
   graph = new TGraph(31,Graph_fx82,Graph_fy82);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph82 = new TH1F("Graph_Graph82","",100,0.76,10.84);
   Graph_Graph82->SetMinimum(7.085245);
   Graph_Graph82->SetMaximum(29.97607);
   Graph_Graph82->SetDirectory(nullptr);
   Graph_Graph82->SetStats(0);
   Graph_Graph82->SetLineWidth(2);
   Graph_Graph82->SetMarkerStyle(20);
   Graph_Graph82->SetMarkerSize(0.9);
   Graph_Graph82->GetXaxis()->SetLabelFont(42);
   Graph_Graph82->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph82->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph82->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph82->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph82->GetXaxis()->SetTitleFont(42);
   Graph_Graph82->GetYaxis()->SetLabelFont(42);
   Graph_Graph82->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph82->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph82->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph82->GetYaxis()->SetTickLength(0.02);
   Graph_Graph82->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph82->GetYaxis()->SetTitleFont(42);
   Graph_Graph82->GetZaxis()->SetLabelFont(42);
   Graph_Graph82->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph82->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph82->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph82->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph82->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph82);
   
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
   
   Double_t Graph_fx84[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy84[31] = { 29.87653, 30.68948, 30.87536, 30.63876, 30.12415, 29.43211, 28.63212, 27.77199, 26.88446, 25.99178, 25.1089, 24.24566, 23.40838, 22.60087, 21.8252, 21.08226, 20.37212,
   19.69425, 19.04779, 18.43162, 17.84449, 17.28506, 16.75197, 15.29739, 14.43555, 13.28169, 12.59342, 11.66536, 11.10771, 10.35038, 9.892095 };
   graph = new TGraph(31,Graph_fx84,Graph_fy84);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph84 = new TH1F("Graph_Graph84","",100,0.76,10.84);
   Graph_Graph84->SetMinimum(7.793769);
   Graph_Graph84->SetMaximum(32.97368);
   Graph_Graph84->SetDirectory(nullptr);
   Graph_Graph84->SetStats(0);
   Graph_Graph84->SetLineWidth(2);
   Graph_Graph84->SetMarkerStyle(20);
   Graph_Graph84->SetMarkerSize(0.9);
   Graph_Graph84->GetXaxis()->SetLabelFont(42);
   Graph_Graph84->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph84->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph84->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph84->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph84->GetXaxis()->SetTitleFont(42);
   Graph_Graph84->GetYaxis()->SetLabelFont(42);
   Graph_Graph84->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph84->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph84->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph84->GetYaxis()->SetTickLength(0.02);
   Graph_Graph84->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph84->GetYaxis()->SetTitleFont(42);
   Graph_Graph84->GetZaxis()->SetLabelFont(42);
   Graph_Graph84->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph84->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph84->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph84->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph84->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph84);
   
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
