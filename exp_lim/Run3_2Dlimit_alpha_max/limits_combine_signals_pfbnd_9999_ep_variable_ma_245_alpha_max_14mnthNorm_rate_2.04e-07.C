#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_14mnthNorm_rate_2.04e-07()
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
   
   Double_t Graph0_fx267[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy267[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(31,Graph0_fx267,Graph0_fy267);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0267 = new TH1F("Graph_Graph0267","",100,0.76,10.84);
   Graph_Graph0267->SetMinimum(0.2);
   Graph_Graph0267->SetMaximum(100000);
   Graph_Graph0267->SetDirectory(nullptr);
   Graph_Graph0267->SetStats(0);
   Graph_Graph0267->SetLineWidth(2);
   Graph_Graph0267->SetMarkerStyle(20);
   Graph_Graph0267->SetMarkerSize(0.9);
   Graph_Graph0267->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0267->GetXaxis()->SetRange(4,92);
   Graph_Graph0267->GetXaxis()->SetLabelFont(42);
   Graph_Graph0267->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0267->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0267->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0267->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0267->GetXaxis()->SetTitleFont(42);
   Graph_Graph0267->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0267->GetYaxis()->SetLabelFont(42);
   Graph_Graph0267->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0267->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0267->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0267->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0267->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0267->GetYaxis()->SetTitleFont(42);
   Graph_Graph0267->GetZaxis()->SetLabelFont(42);
   Graph_Graph0267->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0267->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0267->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0267->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0267->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0267);
   
   graph->Draw("al");
   
   Double_t Graph1_fx268[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy268[64] = { 9.981168, 9.272051, 10.55289, 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828,
   7.470015, 7.27591, 7.273525, 7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183,
   1.62183, 1.573178, 1.541047, 1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213,
   1.456955, 1.390045, 1.376807, 1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478, 2.721786, 2.276199, 2.407628 };
   graph = new TGraph(64,Graph1_fx268,Graph1_fy268);
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
   
   TH1F *Graph_Graph1268 = new TH1F("Graph_Graph1268","Graph",100,0.76,10.84);
   Graph_Graph1268->SetMinimum(0.4554363);
   Graph_Graph1268->SetMaximum(11.47084);
   Graph_Graph1268->SetDirectory(nullptr);
   Graph_Graph1268->SetStats(0);
   Graph_Graph1268->SetLineWidth(2);
   Graph_Graph1268->SetMarkerStyle(20);
   Graph_Graph1268->SetMarkerSize(0.9);
   Graph_Graph1268->GetXaxis()->SetLabelFont(42);
   Graph_Graph1268->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1268->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1268->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1268->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1268->GetXaxis()->SetTitleFont(42);
   Graph_Graph1268->GetYaxis()->SetLabelFont(42);
   Graph_Graph1268->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1268->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1268->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1268->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1268->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1268->GetYaxis()->SetTitleFont(42);
   Graph_Graph1268->GetZaxis()->SetLabelFont(42);
   Graph_Graph1268->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1268->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1268->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1268->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1268->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1268);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx269[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy269[64] = { 7.041793, 6.522612, 7.53601, 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635,
   4.973852, 4.815523, 4.7865, 4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087,
   2.248087, 2.16193, 2.108827, 2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424,
   2.032049, 1.968507, 1.949759, 2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049, 3.685378, 3.090679, 3.348122 };
   graph = new TGraph(64,Graph2_fx269,Graph2_fy269);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2269 = new TH1F("Graph_Graph2269","Graph",100,0.76,10.84);
   Graph_Graph2269->SetMinimum(1.377724);
   Graph_Graph2269->SetMaximum(8.095854);
   Graph_Graph2269->SetDirectory(nullptr);
   Graph_Graph2269->SetStats(0);
   Graph_Graph2269->SetLineWidth(2);
   Graph_Graph2269->SetMarkerStyle(20);
   Graph_Graph2269->SetMarkerSize(0.9);
   Graph_Graph2269->GetXaxis()->SetLabelFont(42);
   Graph_Graph2269->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2269->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2269->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2269->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2269->GetXaxis()->SetTitleFont(42);
   Graph_Graph2269->GetYaxis()->SetLabelFont(42);
   Graph_Graph2269->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2269->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2269->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2269->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2269->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2269->GetYaxis()->SetTitleFont(42);
   Graph_Graph2269->GetZaxis()->SetLabelFont(42);
   Graph_Graph2269->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2269->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2269->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2269->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2269->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2269);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx270[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy270[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(31,Graph0_fx270,Graph0_fy270);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0270 = new TH1F("Graph_Graph0270","",100,0.76,10.84);
   Graph_Graph0270->SetMinimum(0.2);
   Graph_Graph0270->SetMaximum(100000);
   Graph_Graph0270->SetDirectory(nullptr);
   Graph_Graph0270->SetStats(0);
   Graph_Graph0270->SetLineWidth(2);
   Graph_Graph0270->SetMarkerStyle(20);
   Graph_Graph0270->SetMarkerSize(0.9);
   Graph_Graph0270->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0270->GetXaxis()->SetRange(4,92);
   Graph_Graph0270->GetXaxis()->SetLabelFont(42);
   Graph_Graph0270->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0270->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0270->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0270->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0270->GetXaxis()->SetTitleFont(42);
   Graph_Graph0270->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0270->GetYaxis()->SetLabelFont(42);
   Graph_Graph0270->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0270->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0270->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0270->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0270->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0270->GetYaxis()->SetTitleFont(42);
   Graph_Graph0270->GetZaxis()->SetLabelFont(42);
   Graph_Graph0270->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0270->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0270->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0270->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0270->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0270);
   
   graph->Draw("l");
   
   Double_t Graph_fx271[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy271[31] = { 4.317914e-132, 8.056216e-117, 1.306509e-104, 1.260699e-94, 2.608886e-86, 2.812351e-79, 2.976519e-73, 4.922532e-68, 1.802368e-63, 1.907123e-59, 7.174159e-56, 1.129903e-52, 8.491724e-50, 3.385423e-47, 7.807353e-45, 1.11875e-42, 1.057262e-40,
   6.927723e-39, 3.283567e-37, 1.167109e-35, 3.208555e-34, 7.00663e-33, 1.243755e-31, 2.424195e-28, 1.827383e-26, 5.056341e-24, 1.337629e-22, 1.021792e-20, 1.329405e-19, 4.158241e-18, 3.271856e-17 };
   graph = new TGraph(31,Graph_fx271,Graph_fy271);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph271 = new TH1F("Graph_Graph271","",100,0.76,10.84);
   Graph_Graph271->SetMinimum(3.886123e-132);
   Graph_Graph271->SetMaximum(3.599041e-17);
   Graph_Graph271->SetDirectory(nullptr);
   Graph_Graph271->SetStats(0);
   Graph_Graph271->SetLineWidth(2);
   Graph_Graph271->SetMarkerStyle(20);
   Graph_Graph271->SetMarkerSize(0.9);
   Graph_Graph271->GetXaxis()->SetLabelFont(42);
   Graph_Graph271->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph271->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph271->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph271->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph271->GetXaxis()->SetTitleFont(42);
   Graph_Graph271->GetYaxis()->SetLabelFont(42);
   Graph_Graph271->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph271->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph271->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph271->GetYaxis()->SetTickLength(0.02);
   Graph_Graph271->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph271->GetYaxis()->SetTitleFont(42);
   Graph_Graph271->GetZaxis()->SetLabelFont(42);
   Graph_Graph271->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph271->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph271->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph271->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph271->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph271);
   
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
   
   Double_t Graph_fx273[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy273[31] = { 4.749706e-132, 8.861838e-117, 1.43716e-104, 1.386768e-94, 2.869774e-86, 3.093586e-79, 3.274171e-73, 5.414785e-68, 1.982605e-63, 2.097836e-59, 7.891574e-56, 1.242893e-52, 9.340897e-50, 3.723966e-47, 8.588088e-45, 1.230625e-42, 1.162988e-40,
   7.620495e-39, 3.611924e-37, 1.28382e-35, 3.529411e-34, 7.707293e-33, 1.368131e-31, 2.666614e-28, 2.010122e-26, 5.561975e-24, 1.471392e-22, 1.123971e-20, 1.462346e-19, 4.574065e-18, 3.599041e-17 };
   graph = new TGraph(31,Graph_fx273,Graph_fy273);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph273 = new TH1F("Graph_Graph273","",100,0.76,10.84);
   Graph_Graph273->SetMinimum(4.274735e-132);
   Graph_Graph273->SetMaximum(3.958945e-17);
   Graph_Graph273->SetDirectory(nullptr);
   Graph_Graph273->SetStats(0);
   Graph_Graph273->SetLineWidth(2);
   Graph_Graph273->SetMarkerStyle(20);
   Graph_Graph273->SetMarkerSize(0.9);
   Graph_Graph273->GetXaxis()->SetLabelFont(42);
   Graph_Graph273->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph273->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph273->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph273->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph273->GetXaxis()->SetTitleFont(42);
   Graph_Graph273->GetYaxis()->SetLabelFont(42);
   Graph_Graph273->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph273->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph273->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph273->GetYaxis()->SetTickLength(0.02);
   Graph_Graph273->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph273->GetYaxis()->SetTitleFont(42);
   Graph_Graph273->GetZaxis()->SetLabelFont(42);
   Graph_Graph273->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph273->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph273->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph273->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph273->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph273);
   
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
