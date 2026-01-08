#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_14mnthNorm_rate_1.04e-07()
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
   
   Double_t Graph0_fx197[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy197[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(31,Graph0_fx197,Graph0_fy197);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0197 = new TH1F("Graph_Graph0197","",100,0.76,10.84);
   Graph_Graph0197->SetMinimum(0.2);
   Graph_Graph0197->SetMaximum(100000);
   Graph_Graph0197->SetDirectory(nullptr);
   Graph_Graph0197->SetStats(0);
   Graph_Graph0197->SetLineWidth(2);
   Graph_Graph0197->SetMarkerStyle(20);
   Graph_Graph0197->SetMarkerSize(0.9);
   Graph_Graph0197->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0197->GetXaxis()->SetRange(4,92);
   Graph_Graph0197->GetXaxis()->SetLabelFont(42);
   Graph_Graph0197->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0197->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0197->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0197->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0197->GetXaxis()->SetTitleFont(42);
   Graph_Graph0197->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0197->GetYaxis()->SetLabelFont(42);
   Graph_Graph0197->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0197->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0197->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0197->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0197->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0197->GetYaxis()->SetTitleFont(42);
   Graph_Graph0197->GetZaxis()->SetLabelFont(42);
   Graph_Graph0197->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0197->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0197->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0197->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0197->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0197);
   
   graph->Draw("al");
   
   Double_t Graph1_fx198[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy198[64] = { 9.981168, 9.272051, 10.55289, 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828,
   7.470015, 7.27591, 7.273525, 7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183,
   1.62183, 1.573178, 1.541047, 1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213,
   1.456955, 1.390045, 1.376807, 1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478, 2.721786, 2.276199, 2.407628 };
   graph = new TGraph(64,Graph1_fx198,Graph1_fy198);
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
   
   TH1F *Graph_Graph1198 = new TH1F("Graph_Graph1198","Graph",100,0.76,10.84);
   Graph_Graph1198->SetMinimum(0.4554363);
   Graph_Graph1198->SetMaximum(11.47084);
   Graph_Graph1198->SetDirectory(nullptr);
   Graph_Graph1198->SetStats(0);
   Graph_Graph1198->SetLineWidth(2);
   Graph_Graph1198->SetMarkerStyle(20);
   Graph_Graph1198->SetMarkerSize(0.9);
   Graph_Graph1198->GetXaxis()->SetLabelFont(42);
   Graph_Graph1198->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1198->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1198->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1198->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1198->GetXaxis()->SetTitleFont(42);
   Graph_Graph1198->GetYaxis()->SetLabelFont(42);
   Graph_Graph1198->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1198->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1198->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1198->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1198->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1198->GetYaxis()->SetTitleFont(42);
   Graph_Graph1198->GetZaxis()->SetLabelFont(42);
   Graph_Graph1198->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1198->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1198->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1198->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1198->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1198);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx199[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy199[64] = { 7.041793, 6.522612, 7.53601, 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635,
   4.973852, 4.815523, 4.7865, 4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087,
   2.248087, 2.16193, 2.108827, 2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424,
   2.032049, 1.968507, 1.949759, 2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049, 3.685378, 3.090679, 3.348122 };
   graph = new TGraph(64,Graph2_fx199,Graph2_fy199);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2199 = new TH1F("Graph_Graph2199","Graph",100,0.76,10.84);
   Graph_Graph2199->SetMinimum(1.377724);
   Graph_Graph2199->SetMaximum(8.095854);
   Graph_Graph2199->SetDirectory(nullptr);
   Graph_Graph2199->SetStats(0);
   Graph_Graph2199->SetLineWidth(2);
   Graph_Graph2199->SetMarkerStyle(20);
   Graph_Graph2199->SetMarkerSize(0.9);
   Graph_Graph2199->GetXaxis()->SetLabelFont(42);
   Graph_Graph2199->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2199->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2199->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2199->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2199->GetXaxis()->SetTitleFont(42);
   Graph_Graph2199->GetYaxis()->SetLabelFont(42);
   Graph_Graph2199->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2199->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2199->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2199->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2199->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2199->GetYaxis()->SetTitleFont(42);
   Graph_Graph2199->GetZaxis()->SetLabelFont(42);
   Graph_Graph2199->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2199->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2199->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2199->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2199->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2199);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx200[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy200[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(31,Graph0_fx200,Graph0_fy200);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0200 = new TH1F("Graph_Graph0200","",100,0.76,10.84);
   Graph_Graph0200->SetMinimum(0.2);
   Graph_Graph0200->SetMaximum(100000);
   Graph_Graph0200->SetDirectory(nullptr);
   Graph_Graph0200->SetStats(0);
   Graph_Graph0200->SetLineWidth(2);
   Graph_Graph0200->SetMarkerStyle(20);
   Graph_Graph0200->SetMarkerSize(0.9);
   Graph_Graph0200->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0200->GetXaxis()->SetRange(4,92);
   Graph_Graph0200->GetXaxis()->SetLabelFont(42);
   Graph_Graph0200->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0200->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0200->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0200->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0200->GetXaxis()->SetTitleFont(42);
   Graph_Graph0200->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0200->GetYaxis()->SetLabelFont(42);
   Graph_Graph0200->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0200->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0200->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0200->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0200->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0200->GetYaxis()->SetTitleFont(42);
   Graph_Graph0200->GetZaxis()->SetLabelFont(42);
   Graph_Graph0200->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0200->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0200->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0200->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0200->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0200);
   
   graph->Draw("l");
   
   Double_t Graph_fx201[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy201[31] = { 4.543639e-31, 3.745769e-27, 5.008937e-24, 1.786746e-21, 2.368219e-19, 1.466882e-17, 5.000988e-16, 1.058004e-14, 1.519586e-13, 1.587078e-12, 1.271424e-11, 8.148776e-11, 4.32141e-10, 1.94858e-09, 7.639088e-09, 2.65203e-08, 8.278986e-08,
   2.354062e-07, 6.163381e-07, 1.499675e-06, 3.418164e-06, 7.348006e-06, 1.498628e-05, 9.730417e-05, 0.0002816692, 0.001116015, 0.002480039, 0.007104653, 0.01320793, 0.03024227, 0.04956958 };
   graph = new TGraph(31,Graph_fx201,Graph_fy201);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph201 = new TH1F("Graph_Graph201","",100,0.76,10.84);
   Graph_Graph201->SetMinimum(4.089275e-31);
   Graph_Graph201->SetMaximum(0.05452653);
   Graph_Graph201->SetDirectory(nullptr);
   Graph_Graph201->SetStats(0);
   Graph_Graph201->SetLineWidth(2);
   Graph_Graph201->SetMarkerStyle(20);
   Graph_Graph201->SetMarkerSize(0.9);
   Graph_Graph201->GetXaxis()->SetLabelFont(42);
   Graph_Graph201->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph201->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph201->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph201->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph201->GetXaxis()->SetTitleFont(42);
   Graph_Graph201->GetYaxis()->SetLabelFont(42);
   Graph_Graph201->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph201->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph201->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph201->GetYaxis()->SetTickLength(0.02);
   Graph_Graph201->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph201->GetYaxis()->SetTitleFont(42);
   Graph_Graph201->GetZaxis()->SetLabelFont(42);
   Graph_Graph201->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph201->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph201->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph201->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph201->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph201);
   
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
   
   Double_t Graph_fx203[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy203[31] = { 4.998003e-31, 4.120346e-27, 5.50983e-24, 1.965421e-21, 2.605041e-19, 1.61357e-17, 5.501086e-16, 1.163805e-14, 1.671544e-13, 1.745786e-12, 1.398567e-11, 8.963653e-11, 4.753551e-10, 2.143438e-09, 8.402997e-09, 2.917233e-08, 9.106884e-08,
   2.589468e-07, 6.779719e-07, 1.649643e-06, 3.75998e-06, 8.082806e-06, 1.648491e-05, 0.0001070346, 0.0003098362, 0.001227617, 0.002728043, 0.007815118, 0.01452873, 0.0332665, 0.05452653 };
   graph = new TGraph(31,Graph_fx203,Graph_fy203);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph203 = new TH1F("Graph_Graph203","",100,0.76,10.84);
   Graph_Graph203->SetMinimum(4.498203e-31);
   Graph_Graph203->SetMaximum(0.05997919);
   Graph_Graph203->SetDirectory(nullptr);
   Graph_Graph203->SetStats(0);
   Graph_Graph203->SetLineWidth(2);
   Graph_Graph203->SetMarkerStyle(20);
   Graph_Graph203->SetMarkerSize(0.9);
   Graph_Graph203->GetXaxis()->SetLabelFont(42);
   Graph_Graph203->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph203->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph203->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph203->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph203->GetXaxis()->SetTitleFont(42);
   Graph_Graph203->GetYaxis()->SetLabelFont(42);
   Graph_Graph203->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph203->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph203->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph203->GetYaxis()->SetTickLength(0.02);
   Graph_Graph203->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph203->GetYaxis()->SetTitleFont(42);
   Graph_Graph203->GetZaxis()->SetLabelFont(42);
   Graph_Graph203->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph203->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph203->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph203->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph203->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph203);
   
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
