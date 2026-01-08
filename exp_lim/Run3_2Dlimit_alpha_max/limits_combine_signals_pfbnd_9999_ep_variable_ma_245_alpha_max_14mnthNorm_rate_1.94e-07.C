#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_14mnthNorm_rate_1.94e-07()
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
   
   Double_t Graph0_fx260[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy260[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(31,Graph0_fx260,Graph0_fy260);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0260 = new TH1F("Graph_Graph0260","",100,0.76,10.84);
   Graph_Graph0260->SetMinimum(0.2);
   Graph_Graph0260->SetMaximum(100000);
   Graph_Graph0260->SetDirectory(nullptr);
   Graph_Graph0260->SetStats(0);
   Graph_Graph0260->SetLineWidth(2);
   Graph_Graph0260->SetMarkerStyle(20);
   Graph_Graph0260->SetMarkerSize(0.9);
   Graph_Graph0260->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0260->GetXaxis()->SetRange(4,92);
   Graph_Graph0260->GetXaxis()->SetLabelFont(42);
   Graph_Graph0260->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0260->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0260->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0260->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0260->GetXaxis()->SetTitleFont(42);
   Graph_Graph0260->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0260->GetYaxis()->SetLabelFont(42);
   Graph_Graph0260->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0260->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0260->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0260->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0260->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0260->GetYaxis()->SetTitleFont(42);
   Graph_Graph0260->GetZaxis()->SetLabelFont(42);
   Graph_Graph0260->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0260->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0260->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0260->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0260->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0260);
   
   graph->Draw("al");
   
   Double_t Graph1_fx261[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy261[64] = { 9.981168, 9.272051, 10.55289, 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828,
   7.470015, 7.27591, 7.273525, 7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183,
   1.62183, 1.573178, 1.541047, 1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213,
   1.456955, 1.390045, 1.376807, 1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478, 2.721786, 2.276199, 2.407628 };
   graph = new TGraph(64,Graph1_fx261,Graph1_fy261);
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
   
   TH1F *Graph_Graph1261 = new TH1F("Graph_Graph1261","Graph",100,0.76,10.84);
   Graph_Graph1261->SetMinimum(0.4554363);
   Graph_Graph1261->SetMaximum(11.47084);
   Graph_Graph1261->SetDirectory(nullptr);
   Graph_Graph1261->SetStats(0);
   Graph_Graph1261->SetLineWidth(2);
   Graph_Graph1261->SetMarkerStyle(20);
   Graph_Graph1261->SetMarkerSize(0.9);
   Graph_Graph1261->GetXaxis()->SetLabelFont(42);
   Graph_Graph1261->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1261->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1261->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1261->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1261->GetXaxis()->SetTitleFont(42);
   Graph_Graph1261->GetYaxis()->SetLabelFont(42);
   Graph_Graph1261->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1261->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1261->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1261->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1261->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1261->GetYaxis()->SetTitleFont(42);
   Graph_Graph1261->GetZaxis()->SetLabelFont(42);
   Graph_Graph1261->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1261->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1261->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1261->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1261->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1261);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx262[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy262[64] = { 7.041793, 6.522612, 7.53601, 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635,
   4.973852, 4.815523, 4.7865, 4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087,
   2.248087, 2.16193, 2.108827, 2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424,
   2.032049, 1.968507, 1.949759, 2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049, 3.685378, 3.090679, 3.348122 };
   graph = new TGraph(64,Graph2_fx262,Graph2_fy262);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2262 = new TH1F("Graph_Graph2262","Graph",100,0.76,10.84);
   Graph_Graph2262->SetMinimum(1.377724);
   Graph_Graph2262->SetMaximum(8.095854);
   Graph_Graph2262->SetDirectory(nullptr);
   Graph_Graph2262->SetStats(0);
   Graph_Graph2262->SetLineWidth(2);
   Graph_Graph2262->SetMarkerStyle(20);
   Graph_Graph2262->SetMarkerSize(0.9);
   Graph_Graph2262->GetXaxis()->SetLabelFont(42);
   Graph_Graph2262->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2262->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2262->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2262->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2262->GetXaxis()->SetTitleFont(42);
   Graph_Graph2262->GetYaxis()->SetLabelFont(42);
   Graph_Graph2262->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2262->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2262->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2262->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2262->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2262->GetYaxis()->SetTitleFont(42);
   Graph_Graph2262->GetZaxis()->SetLabelFont(42);
   Graph_Graph2262->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2262->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2262->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2262->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2262->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2262);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx263[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy263[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(31,Graph0_fx263,Graph0_fy263);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0263 = new TH1F("Graph_Graph0263","",100,0.76,10.84);
   Graph_Graph0263->SetMinimum(0.2);
   Graph_Graph0263->SetMaximum(100000);
   Graph_Graph0263->SetDirectory(nullptr);
   Graph_Graph0263->SetStats(0);
   Graph_Graph0263->SetLineWidth(2);
   Graph_Graph0263->SetMarkerStyle(20);
   Graph_Graph0263->SetMarkerSize(0.9);
   Graph_Graph0263->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0263->GetXaxis()->SetRange(4,92);
   Graph_Graph0263->GetXaxis()->SetLabelFont(42);
   Graph_Graph0263->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0263->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0263->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0263->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0263->GetXaxis()->SetTitleFont(42);
   Graph_Graph0263->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0263->GetYaxis()->SetLabelFont(42);
   Graph_Graph0263->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0263->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0263->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0263->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0263->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0263->GetYaxis()->SetTitleFont(42);
   Graph_Graph0263->GetZaxis()->SetLabelFont(42);
   Graph_Graph0263->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0263->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0263->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0263->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0263->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0263);
   
   graph->Draw("l");
   
   Double_t Graph_fx264[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy264[31] = { 5.667013e-119, 3.605339e-105, 3.918457e-94, 4.142113e-85, 1.357498e-77, 3.077188e-71, 8.557292e-66, 4.443791e-61, 5.90512e-57, 2.554878e-53, 4.340335e-50, 3.356567e-47, 1.329969e-44, 2.971169e-42, 4.047188e-40, 3.585928e-38, 2.181066e-36,
   9.528062e-35, 3.106219e-33, 7.807441e-32, 1.555848e-30, 2.51805e-29, 3.379568e-28, 3.151831e-25, 1.559169e-23, 2.492338e-21, 4.787426e-20, 2.392585e-18, 2.420864e-17, 5.401272e-16, 3.47012e-15 };
   graph = new TGraph(31,Graph_fx264,Graph_fy264);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph264 = new TH1F("Graph_Graph264","",100,0.76,10.84);
   Graph_Graph264->SetMinimum(5.100312e-119);
   Graph_Graph264->SetMaximum(3.817132e-15);
   Graph_Graph264->SetDirectory(nullptr);
   Graph_Graph264->SetStats(0);
   Graph_Graph264->SetLineWidth(2);
   Graph_Graph264->SetMarkerStyle(20);
   Graph_Graph264->SetMarkerSize(0.9);
   Graph_Graph264->GetXaxis()->SetLabelFont(42);
   Graph_Graph264->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph264->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph264->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph264->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph264->GetXaxis()->SetTitleFont(42);
   Graph_Graph264->GetYaxis()->SetLabelFont(42);
   Graph_Graph264->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph264->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph264->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph264->GetYaxis()->SetTickLength(0.02);
   Graph_Graph264->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph264->GetYaxis()->SetTitleFont(42);
   Graph_Graph264->GetZaxis()->SetLabelFont(42);
   Graph_Graph264->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph264->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph264->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph264->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph264->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph264);
   
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
   
   Double_t Graph_fx266[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy266[31] = { 6.233714e-119, 3.965873e-105, 4.310303e-94, 4.556325e-85, 1.493247e-77, 3.384907e-71, 9.413021e-66, 4.88817e-61, 6.495632e-57, 2.810365e-53, 4.774368e-50, 3.692223e-47, 1.462966e-44, 3.268286e-42, 4.451907e-40, 3.94452e-38, 2.399172e-36,
   1.048087e-34, 3.416841e-33, 8.588185e-32, 1.711433e-30, 2.769855e-29, 3.717525e-28, 3.467014e-25, 1.715086e-23, 2.741572e-21, 5.266168e-20, 2.631844e-18, 2.662951e-17, 5.941399e-16, 3.817132e-15 };
   graph = new TGraph(31,Graph_fx266,Graph_fy266);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph266 = new TH1F("Graph_Graph266","",100,0.76,10.84);
   Graph_Graph266->SetMinimum(5.610343e-119);
   Graph_Graph266->SetMaximum(4.198845e-15);
   Graph_Graph266->SetDirectory(nullptr);
   Graph_Graph266->SetStats(0);
   Graph_Graph266->SetLineWidth(2);
   Graph_Graph266->SetMarkerStyle(20);
   Graph_Graph266->SetMarkerSize(0.9);
   Graph_Graph266->GetXaxis()->SetLabelFont(42);
   Graph_Graph266->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph266->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph266->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph266->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph266->GetXaxis()->SetTitleFont(42);
   Graph_Graph266->GetYaxis()->SetLabelFont(42);
   Graph_Graph266->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph266->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph266->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph266->GetYaxis()->SetTickLength(0.02);
   Graph_Graph266->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph266->GetYaxis()->SetTitleFont(42);
   Graph_Graph266->GetZaxis()->SetLabelFont(42);
   Graph_Graph266->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph266->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph266->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph266->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph266->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph266);
   
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
