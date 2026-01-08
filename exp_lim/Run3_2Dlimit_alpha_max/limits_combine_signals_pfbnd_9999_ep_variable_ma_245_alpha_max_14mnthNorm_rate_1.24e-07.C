#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_14mnthNorm_rate_1.24e-07()
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
   
   Double_t Graph0_fx211[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy211[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(31,Graph0_fx211,Graph0_fy211);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0211 = new TH1F("Graph_Graph0211","",100,0.76,10.84);
   Graph_Graph0211->SetMinimum(0.2);
   Graph_Graph0211->SetMaximum(100000);
   Graph_Graph0211->SetDirectory(nullptr);
   Graph_Graph0211->SetStats(0);
   Graph_Graph0211->SetLineWidth(2);
   Graph_Graph0211->SetMarkerStyle(20);
   Graph_Graph0211->SetMarkerSize(0.9);
   Graph_Graph0211->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0211->GetXaxis()->SetRange(4,92);
   Graph_Graph0211->GetXaxis()->SetLabelFont(42);
   Graph_Graph0211->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0211->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0211->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0211->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0211->GetXaxis()->SetTitleFont(42);
   Graph_Graph0211->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0211->GetYaxis()->SetLabelFont(42);
   Graph_Graph0211->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0211->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0211->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0211->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0211->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0211->GetYaxis()->SetTitleFont(42);
   Graph_Graph0211->GetZaxis()->SetLabelFont(42);
   Graph_Graph0211->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0211->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0211->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0211->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0211->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0211);
   
   graph->Draw("al");
   
   Double_t Graph1_fx212[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy212[64] = { 9.981168, 9.272051, 10.55289, 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828,
   7.470015, 7.27591, 7.273525, 7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183,
   1.62183, 1.573178, 1.541047, 1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213,
   1.456955, 1.390045, 1.376807, 1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478, 2.721786, 2.276199, 2.407628 };
   graph = new TGraph(64,Graph1_fx212,Graph1_fy212);
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
   
   TH1F *Graph_Graph1212 = new TH1F("Graph_Graph1212","Graph",100,0.76,10.84);
   Graph_Graph1212->SetMinimum(0.4554363);
   Graph_Graph1212->SetMaximum(11.47084);
   Graph_Graph1212->SetDirectory(nullptr);
   Graph_Graph1212->SetStats(0);
   Graph_Graph1212->SetLineWidth(2);
   Graph_Graph1212->SetMarkerStyle(20);
   Graph_Graph1212->SetMarkerSize(0.9);
   Graph_Graph1212->GetXaxis()->SetLabelFont(42);
   Graph_Graph1212->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1212->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1212->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1212->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1212->GetXaxis()->SetTitleFont(42);
   Graph_Graph1212->GetYaxis()->SetLabelFont(42);
   Graph_Graph1212->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1212->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1212->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1212->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1212->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1212->GetYaxis()->SetTitleFont(42);
   Graph_Graph1212->GetZaxis()->SetLabelFont(42);
   Graph_Graph1212->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1212->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1212->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1212->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1212->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1212);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx213[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy213[64] = { 7.041793, 6.522612, 7.53601, 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635,
   4.973852, 4.815523, 4.7865, 4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087,
   2.248087, 2.16193, 2.108827, 2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424,
   2.032049, 1.968507, 1.949759, 2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049, 3.685378, 3.090679, 3.348122 };
   graph = new TGraph(64,Graph2_fx213,Graph2_fy213);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2213 = new TH1F("Graph_Graph2213","Graph",100,0.76,10.84);
   Graph_Graph2213->SetMinimum(1.377724);
   Graph_Graph2213->SetMaximum(8.095854);
   Graph_Graph2213->SetDirectory(nullptr);
   Graph_Graph2213->SetStats(0);
   Graph_Graph2213->SetLineWidth(2);
   Graph_Graph2213->SetMarkerStyle(20);
   Graph_Graph2213->SetMarkerSize(0.9);
   Graph_Graph2213->GetXaxis()->SetLabelFont(42);
   Graph_Graph2213->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2213->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2213->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2213->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2213->GetXaxis()->SetTitleFont(42);
   Graph_Graph2213->GetYaxis()->SetLabelFont(42);
   Graph_Graph2213->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2213->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2213->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2213->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2213->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2213->GetYaxis()->SetTitleFont(42);
   Graph_Graph2213->GetZaxis()->SetLabelFont(42);
   Graph_Graph2213->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2213->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2213->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2213->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2213->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2213);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx214[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy214[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(31,Graph0_fx214,Graph0_fy214);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0214 = new TH1F("Graph_Graph0214","",100,0.76,10.84);
   Graph_Graph0214->SetMinimum(0.2);
   Graph_Graph0214->SetMaximum(100000);
   Graph_Graph0214->SetDirectory(nullptr);
   Graph_Graph0214->SetStats(0);
   Graph_Graph0214->SetLineWidth(2);
   Graph_Graph0214->SetMarkerStyle(20);
   Graph_Graph0214->SetMarkerSize(0.9);
   Graph_Graph0214->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0214->GetXaxis()->SetRange(4,92);
   Graph_Graph0214->GetXaxis()->SetLabelFont(42);
   Graph_Graph0214->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0214->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0214->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0214->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0214->GetXaxis()->SetTitleFont(42);
   Graph_Graph0214->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0214->GetYaxis()->SetLabelFont(42);
   Graph_Graph0214->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0214->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0214->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0214->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0214->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0214->GetYaxis()->SetTitleFont(42);
   Graph_Graph0214->GetZaxis()->SetLabelFont(42);
   Graph_Graph0214->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0214->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0214->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0214->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0214->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0214);
   
   graph->Draw("l");
   
   Double_t Graph_fx215[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy215[31] = { 6.810091e-46, 2.693885e-40, 7.969938e-36, 3.581967e-32, 3.921374e-29, 1.449769e-26, 2.28563e-24, 1.823103e-22, 8.363262e-21, 2.433565e-19, 4.847141e-18, 7.017801e-17, 7.749192e-16, 6.784783e-15, 4.862361e-14, 2.928131e-13, 1.514474e-12,
   6.852249e-12, 2.754529e-11, 9.968848e-11, 3.285068e-10, 9.953667e-10, 2.796611e-09, 4.225255e-08, 1.981761e-07, 1.472316e-06, 4.72118e-06, 2.199118e-05, 5.453116e-05, 0.0001838795, 0.0003801889 };
   graph = new TGraph(31,Graph_fx215,Graph_fy215);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph215 = new TH1F("Graph_Graph215","",100,0.76,10.84);
   Graph_Graph215->SetMinimum(6.129082e-46);
   Graph_Graph215->SetMaximum(0.0004182078);
   Graph_Graph215->SetDirectory(nullptr);
   Graph_Graph215->SetStats(0);
   Graph_Graph215->SetLineWidth(2);
   Graph_Graph215->SetMarkerStyle(20);
   Graph_Graph215->SetMarkerSize(0.9);
   Graph_Graph215->GetXaxis()->SetLabelFont(42);
   Graph_Graph215->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph215->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph215->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph215->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph215->GetXaxis()->SetTitleFont(42);
   Graph_Graph215->GetYaxis()->SetLabelFont(42);
   Graph_Graph215->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph215->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph215->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph215->GetYaxis()->SetTickLength(0.02);
   Graph_Graph215->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph215->GetYaxis()->SetTitleFont(42);
   Graph_Graph215->GetZaxis()->SetLabelFont(42);
   Graph_Graph215->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph215->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph215->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph215->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph215->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph215);
   
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
   
   Double_t Graph_fx217[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy217[31] = { 7.4911e-46, 2.963274e-40, 8.766932e-36, 3.940164e-32, 4.313512e-29, 1.594746e-26, 2.514193e-24, 2.005413e-22, 9.199588e-21, 2.676921e-19, 5.331855e-18, 7.719581e-17, 8.524111e-16, 7.463261e-15, 5.348597e-14, 3.220944e-13, 1.665921e-12,
   7.537474e-12, 3.029982e-11, 1.096573e-10, 3.613575e-10, 1.094903e-09, 3.076272e-09, 4.64778e-08, 2.179937e-07, 1.619548e-06, 5.193298e-06, 2.419029e-05, 5.998428e-05, 0.0002022674, 0.0004182078 };
   graph = new TGraph(31,Graph_fx217,Graph_fy217);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph217 = new TH1F("Graph_Graph217","",100,0.76,10.84);
   Graph_Graph217->SetMinimum(6.74199e-46);
   Graph_Graph217->SetMaximum(0.0004600286);
   Graph_Graph217->SetDirectory(nullptr);
   Graph_Graph217->SetStats(0);
   Graph_Graph217->SetLineWidth(2);
   Graph_Graph217->SetMarkerStyle(20);
   Graph_Graph217->SetMarkerSize(0.9);
   Graph_Graph217->GetXaxis()->SetLabelFont(42);
   Graph_Graph217->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph217->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph217->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph217->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph217->GetXaxis()->SetTitleFont(42);
   Graph_Graph217->GetYaxis()->SetLabelFont(42);
   Graph_Graph217->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph217->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph217->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph217->GetYaxis()->SetTickLength(0.02);
   Graph_Graph217->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph217->GetYaxis()->SetTitleFont(42);
   Graph_Graph217->GetZaxis()->SetLabelFont(42);
   Graph_Graph217->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph217->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph217->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph217->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph217->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph217);
   
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
