#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_14mnthNorm_rate_7.4e-08()
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
   
   Double_t Graph0_fx176[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy176[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(31,Graph0_fx176,Graph0_fy176);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0176 = new TH1F("Graph_Graph0176","",100,0.76,10.84);
   Graph_Graph0176->SetMinimum(0.2);
   Graph_Graph0176->SetMaximum(100000);
   Graph_Graph0176->SetDirectory(nullptr);
   Graph_Graph0176->SetStats(0);
   Graph_Graph0176->SetLineWidth(2);
   Graph_Graph0176->SetMarkerStyle(20);
   Graph_Graph0176->SetMarkerSize(0.9);
   Graph_Graph0176->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0176->GetXaxis()->SetRange(4,92);
   Graph_Graph0176->GetXaxis()->SetLabelFont(42);
   Graph_Graph0176->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0176->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0176->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0176->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0176->GetXaxis()->SetTitleFont(42);
   Graph_Graph0176->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0176->GetYaxis()->SetLabelFont(42);
   Graph_Graph0176->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0176->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0176->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0176->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0176->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0176->GetYaxis()->SetTitleFont(42);
   Graph_Graph0176->GetZaxis()->SetLabelFont(42);
   Graph_Graph0176->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0176->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0176->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0176->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0176->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0176);
   
   graph->Draw("al");
   
   Double_t Graph1_fx177[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy177[64] = { 9.981168, 9.272051, 10.55289, 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828,
   7.470015, 7.27591, 7.273525, 7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183,
   1.62183, 1.573178, 1.541047, 1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213,
   1.456955, 1.390045, 1.376807, 1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478, 2.721786, 2.276199, 2.407628 };
   graph = new TGraph(64,Graph1_fx177,Graph1_fy177);
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
   
   TH1F *Graph_Graph1177 = new TH1F("Graph_Graph1177","Graph",100,0.76,10.84);
   Graph_Graph1177->SetMinimum(0.4554363);
   Graph_Graph1177->SetMaximum(11.47084);
   Graph_Graph1177->SetDirectory(nullptr);
   Graph_Graph1177->SetStats(0);
   Graph_Graph1177->SetLineWidth(2);
   Graph_Graph1177->SetMarkerStyle(20);
   Graph_Graph1177->SetMarkerSize(0.9);
   Graph_Graph1177->GetXaxis()->SetLabelFont(42);
   Graph_Graph1177->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1177->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1177->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1177->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1177->GetXaxis()->SetTitleFont(42);
   Graph_Graph1177->GetYaxis()->SetLabelFont(42);
   Graph_Graph1177->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1177->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1177->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1177->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1177->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1177->GetYaxis()->SetTitleFont(42);
   Graph_Graph1177->GetZaxis()->SetLabelFont(42);
   Graph_Graph1177->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1177->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1177->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1177->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1177->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1177);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx178[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy178[64] = { 7.041793, 6.522612, 7.53601, 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635,
   4.973852, 4.815523, 4.7865, 4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087,
   2.248087, 2.16193, 2.108827, 2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424,
   2.032049, 1.968507, 1.949759, 2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049, 3.685378, 3.090679, 3.348122 };
   graph = new TGraph(64,Graph2_fx178,Graph2_fy178);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2178 = new TH1F("Graph_Graph2178","Graph",100,0.76,10.84);
   Graph_Graph2178->SetMinimum(1.377724);
   Graph_Graph2178->SetMaximum(8.095854);
   Graph_Graph2178->SetDirectory(nullptr);
   Graph_Graph2178->SetStats(0);
   Graph_Graph2178->SetLineWidth(2);
   Graph_Graph2178->SetMarkerStyle(20);
   Graph_Graph2178->SetMarkerSize(0.9);
   Graph_Graph2178->GetXaxis()->SetLabelFont(42);
   Graph_Graph2178->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2178->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2178->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2178->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2178->GetXaxis()->SetTitleFont(42);
   Graph_Graph2178->GetYaxis()->SetLabelFont(42);
   Graph_Graph2178->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2178->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2178->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2178->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2178->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2178->GetYaxis()->SetTitleFont(42);
   Graph_Graph2178->GetZaxis()->SetLabelFont(42);
   Graph_Graph2178->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2178->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2178->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2178->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2178->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2178);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx179[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy179[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(31,Graph0_fx179,Graph0_fy179);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0179 = new TH1F("Graph_Graph0179","",100,0.76,10.84);
   Graph_Graph0179->SetMinimum(0.2);
   Graph_Graph0179->SetMaximum(100000);
   Graph_Graph0179->SetDirectory(nullptr);
   Graph_Graph0179->SetStats(0);
   Graph_Graph0179->SetLineWidth(2);
   Graph_Graph0179->SetMarkerStyle(20);
   Graph_Graph0179->SetMarkerSize(0.9);
   Graph_Graph0179->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0179->GetXaxis()->SetRange(4,92);
   Graph_Graph0179->GetXaxis()->SetLabelFont(42);
   Graph_Graph0179->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0179->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0179->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0179->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0179->GetXaxis()->SetTitleFont(42);
   Graph_Graph0179->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0179->GetYaxis()->SetLabelFont(42);
   Graph_Graph0179->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0179->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0179->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0179->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0179->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0179->GetYaxis()->SetTitleFont(42);
   Graph_Graph0179->GetZaxis()->SetLabelFont(42);
   Graph_Graph0179->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0179->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0179->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0179->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0179->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0179);
   
   graph->Draw("l");
   
   Double_t Graph_fx180[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy180[31] = { 6.081293e-14, 5.388762e-12, 1.91769e-10, 3.519886e-09, 3.93624e-08, 3.009191e-07, 1.707286e-06, 7.634387e-06, 2.814613e-05, 8.854823e-05, 0.0002441528, 0.0006025764, 0.001353752, 0.002806402, 0.005428395, 0.009887467, 0.0170885,
   0.02820378, 0.04469339, 0.06831394, 0.1011149, 0.1454226, 0.203814, 0.4922087, 0.8096846, 1.53648, 2.222348, 3.603059, 4.780348, 6.956242, 8.68674 };
   graph = new TGraph(31,Graph_fx180,Graph_fy180);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph180 = new TH1F("Graph_Graph180","",100,0.76,10.84);
   Graph_Graph180->SetMinimum(5.473164e-14);
   Graph_Graph180->SetMaximum(9.555414);
   Graph_Graph180->SetDirectory(nullptr);
   Graph_Graph180->SetStats(0);
   Graph_Graph180->SetLineWidth(2);
   Graph_Graph180->SetMarkerStyle(20);
   Graph_Graph180->SetMarkerSize(0.9);
   Graph_Graph180->GetXaxis()->SetLabelFont(42);
   Graph_Graph180->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph180->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph180->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph180->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph180->GetXaxis()->SetTitleFont(42);
   Graph_Graph180->GetYaxis()->SetLabelFont(42);
   Graph_Graph180->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph180->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph180->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph180->GetYaxis()->SetTickLength(0.02);
   Graph_Graph180->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph180->GetYaxis()->SetTitleFont(42);
   Graph_Graph180->GetZaxis()->SetLabelFont(42);
   Graph_Graph180->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph180->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph180->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph180->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph180->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph180);
   
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
   
   Double_t Graph_fx182[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy182[31] = { 6.689423e-14, 5.927638e-12, 2.109458e-10, 3.871874e-09, 4.329864e-08, 3.31011e-07, 1.878014e-06, 8.397825e-06, 3.096074e-05, 9.740306e-05, 0.0002685681, 0.0006628341, 0.001489127, 0.003087042, 0.005971234, 0.01087621, 0.01879735,
   0.03102416, 0.04916273, 0.07514533, 0.1112263, 0.1599649, 0.2241954, 0.5414296, 0.890653, 1.690128, 2.444583, 3.963365, 5.258383, 7.651866, 9.555414 };
   graph = new TGraph(31,Graph_fx182,Graph_fy182);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph182 = new TH1F("Graph_Graph182","",100,0.76,10.84);
   Graph_Graph182->SetMinimum(6.02048e-14);
   Graph_Graph182->SetMaximum(10.51095);
   Graph_Graph182->SetDirectory(nullptr);
   Graph_Graph182->SetStats(0);
   Graph_Graph182->SetLineWidth(2);
   Graph_Graph182->SetMarkerStyle(20);
   Graph_Graph182->SetMarkerSize(0.9);
   Graph_Graph182->GetXaxis()->SetLabelFont(42);
   Graph_Graph182->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph182->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph182->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph182->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph182->GetXaxis()->SetTitleFont(42);
   Graph_Graph182->GetYaxis()->SetLabelFont(42);
   Graph_Graph182->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph182->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph182->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph182->GetYaxis()->SetTickLength(0.02);
   Graph_Graph182->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph182->GetYaxis()->SetTitleFont(42);
   Graph_Graph182->GetZaxis()->SetLabelFont(42);
   Graph_Graph182->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph182->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph182->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph182->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph182->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph182);
   
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
   line = new TLine(8.334799,0,8.334799,3.071378);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(8.329799,0,"  8.33 TeV");

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
