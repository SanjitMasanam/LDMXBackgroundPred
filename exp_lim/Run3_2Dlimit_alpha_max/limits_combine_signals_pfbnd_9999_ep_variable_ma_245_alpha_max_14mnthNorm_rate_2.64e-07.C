#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_14mnthNorm_rate_2.64e-07()
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
   
   Double_t Graph0_fx309[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy309[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(31,Graph0_fx309,Graph0_fy309);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0309 = new TH1F("Graph_Graph0309","",100,0.76,10.84);
   Graph_Graph0309->SetMinimum(0.2);
   Graph_Graph0309->SetMaximum(100000);
   Graph_Graph0309->SetDirectory(nullptr);
   Graph_Graph0309->SetStats(0);
   Graph_Graph0309->SetLineWidth(2);
   Graph_Graph0309->SetMarkerStyle(20);
   Graph_Graph0309->SetMarkerSize(0.9);
   Graph_Graph0309->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0309->GetXaxis()->SetRange(4,92);
   Graph_Graph0309->GetXaxis()->SetLabelFont(42);
   Graph_Graph0309->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0309->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0309->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0309->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0309->GetXaxis()->SetTitleFont(42);
   Graph_Graph0309->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0309->GetYaxis()->SetLabelFont(42);
   Graph_Graph0309->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0309->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0309->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0309->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0309->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0309->GetYaxis()->SetTitleFont(42);
   Graph_Graph0309->GetZaxis()->SetLabelFont(42);
   Graph_Graph0309->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0309->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0309->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0309->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0309->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0309);
   
   graph->Draw("al");
   
   Double_t Graph1_fx310[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy310[64] = { 9.981168, 9.272051, 10.55289, 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828,
   7.470015, 7.27591, 7.273525, 7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183,
   1.62183, 1.573178, 1.541047, 1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213,
   1.456955, 1.390045, 1.376807, 1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478, 2.721786, 2.276199, 2.407628 };
   graph = new TGraph(64,Graph1_fx310,Graph1_fy310);
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
   
   TH1F *Graph_Graph1310 = new TH1F("Graph_Graph1310","Graph",100,0.76,10.84);
   Graph_Graph1310->SetMinimum(0.4554363);
   Graph_Graph1310->SetMaximum(11.47084);
   Graph_Graph1310->SetDirectory(nullptr);
   Graph_Graph1310->SetStats(0);
   Graph_Graph1310->SetLineWidth(2);
   Graph_Graph1310->SetMarkerStyle(20);
   Graph_Graph1310->SetMarkerSize(0.9);
   Graph_Graph1310->GetXaxis()->SetLabelFont(42);
   Graph_Graph1310->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1310->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1310->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1310->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1310->GetXaxis()->SetTitleFont(42);
   Graph_Graph1310->GetYaxis()->SetLabelFont(42);
   Graph_Graph1310->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1310->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1310->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1310->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1310->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1310->GetYaxis()->SetTitleFont(42);
   Graph_Graph1310->GetZaxis()->SetLabelFont(42);
   Graph_Graph1310->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1310->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1310->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1310->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1310->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1310);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx311[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy311[64] = { 7.041793, 6.522612, 7.53601, 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635,
   4.973852, 4.815523, 4.7865, 4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087,
   2.248087, 2.16193, 2.108827, 2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424,
   2.032049, 1.968507, 1.949759, 2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049, 3.685378, 3.090679, 3.348122 };
   graph = new TGraph(64,Graph2_fx311,Graph2_fy311);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2311 = new TH1F("Graph_Graph2311","Graph",100,0.76,10.84);
   Graph_Graph2311->SetMinimum(1.377724);
   Graph_Graph2311->SetMaximum(8.095854);
   Graph_Graph2311->SetDirectory(nullptr);
   Graph_Graph2311->SetStats(0);
   Graph_Graph2311->SetLineWidth(2);
   Graph_Graph2311->SetMarkerStyle(20);
   Graph_Graph2311->SetMarkerSize(0.9);
   Graph_Graph2311->GetXaxis()->SetLabelFont(42);
   Graph_Graph2311->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2311->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2311->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2311->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2311->GetXaxis()->SetTitleFont(42);
   Graph_Graph2311->GetYaxis()->SetLabelFont(42);
   Graph_Graph2311->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2311->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2311->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2311->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2311->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2311->GetYaxis()->SetTitleFont(42);
   Graph_Graph2311->GetZaxis()->SetLabelFont(42);
   Graph_Graph2311->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2311->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2311->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2311->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2311->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2311);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx312[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy312[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(31,Graph0_fx312,Graph0_fy312);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0312 = new TH1F("Graph_Graph0312","",100,0.76,10.84);
   Graph_Graph0312->SetMinimum(0.2);
   Graph_Graph0312->SetMaximum(100000);
   Graph_Graph0312->SetDirectory(nullptr);
   Graph_Graph0312->SetStats(0);
   Graph_Graph0312->SetLineWidth(2);
   Graph_Graph0312->SetMarkerStyle(20);
   Graph_Graph0312->SetMarkerSize(0.9);
   Graph_Graph0312->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0312->GetXaxis()->SetRange(4,92);
   Graph_Graph0312->GetXaxis()->SetLabelFont(42);
   Graph_Graph0312->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0312->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0312->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0312->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0312->GetXaxis()->SetTitleFont(42);
   Graph_Graph0312->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0312->GetYaxis()->SetLabelFont(42);
   Graph_Graph0312->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0312->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0312->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0312->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0312->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0312->GetYaxis()->SetTitleFont(42);
   Graph_Graph0312->GetZaxis()->SetLabelFont(42);
   Graph_Graph0312->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0312->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0312->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0312->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0312->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0312);
   
   graph->Draw("l");
   
   Double_t Graph_fx313[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy313[31] = { 8.231683e-225, 3.45384e-199, 1.07115e-178, 6.168465e-162, 5.656465e-148, 3.655848e-136, 4.818472e-126, 2.822499e-117, 1.317886e-109, 7.667244e-103, 7.866616e-97, 1.872489e-91, 1.287654e-86, 3.055197e-82, 2.892168e-78, 1.231572e-74, 2.607151e-71,
   2.984078e-68, 1.982645e-65, 8.123644e-63, 2.161975e-60, 3.908039e-58, 4.987689e-56, 1.763369e-50, 2.595617e-47, 3.447223e-43, 8.723317e-41, 1.329607e-37, 1.019524e-35, 3.458173e-33, 1.137233e-31 };
   graph = new TGraph(31,Graph_fx313,Graph_fy313);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph313 = new TH1F("Graph_Graph313","",100,0.76,10.84);
   Graph_Graph313->SetMinimum(7.408515e-225);
   Graph_Graph313->SetMaximum(1.250956e-31);
   Graph_Graph313->SetDirectory(nullptr);
   Graph_Graph313->SetStats(0);
   Graph_Graph313->SetLineWidth(2);
   Graph_Graph313->SetMarkerStyle(20);
   Graph_Graph313->SetMarkerSize(0.9);
   Graph_Graph313->GetXaxis()->SetLabelFont(42);
   Graph_Graph313->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph313->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph313->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph313->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph313->GetXaxis()->SetTitleFont(42);
   Graph_Graph313->GetYaxis()->SetLabelFont(42);
   Graph_Graph313->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph313->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph313->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph313->GetYaxis()->SetTickLength(0.02);
   Graph_Graph313->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph313->GetYaxis()->SetTitleFont(42);
   Graph_Graph313->GetZaxis()->SetLabelFont(42);
   Graph_Graph313->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph313->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph313->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph313->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph313->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph313);
   
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
   
   Double_t Graph_fx315[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy315[31] = { 9.054851e-225, 3.799224e-199, 1.178265e-178, 6.785312e-162, 6.222111e-148, 4.021433e-136, 5.300319e-126, 3.104749e-117, 1.449675e-109, 8.433968e-103, 8.653278e-97, 2.059738e-91, 1.41642e-86, 3.360716e-82, 3.181385e-78, 1.354729e-74, 2.867866e-71,
   3.282485e-68, 2.18091e-65, 8.936009e-63, 2.378173e-60, 4.298843e-58, 5.486458e-56, 1.939706e-50, 2.855178e-47, 3.791945e-43, 9.595649e-41, 1.462568e-37, 1.121476e-35, 3.80399e-33, 1.250956e-31 };
   graph = new TGraph(31,Graph_fx315,Graph_fy315);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph315 = new TH1F("Graph_Graph315","",100,0.76,10.84);
   Graph_Graph315->SetMinimum(8.149366e-225);
   Graph_Graph315->SetMaximum(1.376052e-31);
   Graph_Graph315->SetDirectory(nullptr);
   Graph_Graph315->SetStats(0);
   Graph_Graph315->SetLineWidth(2);
   Graph_Graph315->SetMarkerStyle(20);
   Graph_Graph315->SetMarkerSize(0.9);
   Graph_Graph315->GetXaxis()->SetLabelFont(42);
   Graph_Graph315->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph315->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph315->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph315->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph315->GetXaxis()->SetTitleFont(42);
   Graph_Graph315->GetYaxis()->SetLabelFont(42);
   Graph_Graph315->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph315->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph315->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph315->GetYaxis()->SetTickLength(0.02);
   Graph_Graph315->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph315->GetYaxis()->SetTitleFont(42);
   Graph_Graph315->GetZaxis()->SetLabelFont(42);
   Graph_Graph315->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph315->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph315->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph315->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph315->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph315);
   
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
