#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_14mnthNorm_rate_2.54e-07()
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
   
   Double_t Graph0_fx302[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy302[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(31,Graph0_fx302,Graph0_fy302);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0302 = new TH1F("Graph_Graph0302","",100,0.76,10.84);
   Graph_Graph0302->SetMinimum(0.2);
   Graph_Graph0302->SetMaximum(100000);
   Graph_Graph0302->SetDirectory(nullptr);
   Graph_Graph0302->SetStats(0);
   Graph_Graph0302->SetLineWidth(2);
   Graph_Graph0302->SetMarkerStyle(20);
   Graph_Graph0302->SetMarkerSize(0.9);
   Graph_Graph0302->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0302->GetXaxis()->SetRange(4,92);
   Graph_Graph0302->GetXaxis()->SetLabelFont(42);
   Graph_Graph0302->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0302->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0302->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0302->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0302->GetXaxis()->SetTitleFont(42);
   Graph_Graph0302->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0302->GetYaxis()->SetLabelFont(42);
   Graph_Graph0302->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0302->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0302->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0302->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0302->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0302->GetYaxis()->SetTitleFont(42);
   Graph_Graph0302->GetZaxis()->SetLabelFont(42);
   Graph_Graph0302->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0302->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0302->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0302->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0302->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0302);
   
   graph->Draw("al");
   
   Double_t Graph1_fx303[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy303[64] = { 9.981168, 9.272051, 10.55289, 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828,
   7.470015, 7.27591, 7.273525, 7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183,
   1.62183, 1.573178, 1.541047, 1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213,
   1.456955, 1.390045, 1.376807, 1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478, 2.721786, 2.276199, 2.407628 };
   graph = new TGraph(64,Graph1_fx303,Graph1_fy303);
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
   
   TH1F *Graph_Graph1303 = new TH1F("Graph_Graph1303","Graph",100,0.76,10.84);
   Graph_Graph1303->SetMinimum(0.4554363);
   Graph_Graph1303->SetMaximum(11.47084);
   Graph_Graph1303->SetDirectory(nullptr);
   Graph_Graph1303->SetStats(0);
   Graph_Graph1303->SetLineWidth(2);
   Graph_Graph1303->SetMarkerStyle(20);
   Graph_Graph1303->SetMarkerSize(0.9);
   Graph_Graph1303->GetXaxis()->SetLabelFont(42);
   Graph_Graph1303->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1303->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1303->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1303->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1303->GetXaxis()->SetTitleFont(42);
   Graph_Graph1303->GetYaxis()->SetLabelFont(42);
   Graph_Graph1303->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1303->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1303->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1303->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1303->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1303->GetYaxis()->SetTitleFont(42);
   Graph_Graph1303->GetZaxis()->SetLabelFont(42);
   Graph_Graph1303->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1303->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1303->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1303->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1303->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1303);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx304[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy304[64] = { 7.041793, 6.522612, 7.53601, 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635,
   4.973852, 4.815523, 4.7865, 4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087,
   2.248087, 2.16193, 2.108827, 2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424,
   2.032049, 1.968507, 1.949759, 2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049, 3.685378, 3.090679, 3.348122 };
   graph = new TGraph(64,Graph2_fx304,Graph2_fy304);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2304 = new TH1F("Graph_Graph2304","Graph",100,0.76,10.84);
   Graph_Graph2304->SetMinimum(1.377724);
   Graph_Graph2304->SetMaximum(8.095854);
   Graph_Graph2304->SetDirectory(nullptr);
   Graph_Graph2304->SetStats(0);
   Graph_Graph2304->SetLineWidth(2);
   Graph_Graph2304->SetMarkerStyle(20);
   Graph_Graph2304->SetMarkerSize(0.9);
   Graph_Graph2304->GetXaxis()->SetLabelFont(42);
   Graph_Graph2304->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2304->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2304->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2304->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2304->GetXaxis()->SetTitleFont(42);
   Graph_Graph2304->GetYaxis()->SetLabelFont(42);
   Graph_Graph2304->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2304->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2304->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2304->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2304->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2304->GetYaxis()->SetTitleFont(42);
   Graph_Graph2304->GetZaxis()->SetLabelFont(42);
   Graph_Graph2304->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2304->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2304->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2304->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2304->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2304);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx305[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy305[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(31,Graph0_fx305,Graph0_fy305);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0305 = new TH1F("Graph_Graph0305","",100,0.76,10.84);
   Graph_Graph0305->SetMinimum(0.2);
   Graph_Graph0305->SetMaximum(100000);
   Graph_Graph0305->SetDirectory(nullptr);
   Graph_Graph0305->SetStats(0);
   Graph_Graph0305->SetLineWidth(2);
   Graph_Graph0305->SetMarkerStyle(20);
   Graph_Graph0305->SetMarkerSize(0.9);
   Graph_Graph0305->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0305->GetXaxis()->SetRange(4,92);
   Graph_Graph0305->GetXaxis()->SetLabelFont(42);
   Graph_Graph0305->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0305->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0305->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0305->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0305->GetXaxis()->SetTitleFont(42);
   Graph_Graph0305->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0305->GetYaxis()->SetLabelFont(42);
   Graph_Graph0305->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0305->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0305->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0305->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0305->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0305->GetYaxis()->SetTitleFont(42);
   Graph_Graph0305->GetZaxis()->SetLabelFont(42);
   Graph_Graph0305->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0305->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0305->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0305->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0305->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0305);
   
   graph->Draw("l");
   
   Double_t Graph_fx306[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy306[31] = { 1.084726e-207, 5.603747e-184, 5.155871e-165, 1.669831e-149, 1.391265e-136, 1.181607e-125, 2.734801e-116, 3.547404e-108, 4.428512e-101, 8.044919e-95, 2.933184e-89, 2.766544e-84, 8.26966e-80, 9.233317e-76, 4.404871e-72, 1.00332e-68, 1.196906e-65,
   8.082489e-63, 3.299505e-60, 8.611767e-58, 1.507717e-55, 1.845435e-53, 1.636812e-51, 2.217124e-46, 1.886253e-43, 1.22656e-39, 2.046379e-37, 1.795603e-34, 9.925908e-33, 2.168971e-30, 5.478693e-29 };
   graph = new TGraph(31,Graph_fx306,Graph_fy306);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph306 = new TH1F("Graph_Graph306","",100,0.76,10.84);
   Graph_Graph306->SetMinimum(9.762536e-208);
   Graph_Graph306->SetMaximum(6.026562e-29);
   Graph_Graph306->SetDirectory(nullptr);
   Graph_Graph306->SetStats(0);
   Graph_Graph306->SetLineWidth(2);
   Graph_Graph306->SetMarkerStyle(20);
   Graph_Graph306->SetMarkerSize(0.9);
   Graph_Graph306->GetXaxis()->SetLabelFont(42);
   Graph_Graph306->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph306->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph306->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph306->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph306->GetXaxis()->SetTitleFont(42);
   Graph_Graph306->GetYaxis()->SetLabelFont(42);
   Graph_Graph306->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph306->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph306->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph306->GetYaxis()->SetTickLength(0.02);
   Graph_Graph306->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph306->GetYaxis()->SetTitleFont(42);
   Graph_Graph306->GetZaxis()->SetLabelFont(42);
   Graph_Graph306->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph306->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph306->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph306->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph306->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph306);
   
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
   
   Double_t Graph_fx308[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy308[31] = { 1.193199e-207, 6.164122e-184, 5.671458e-165, 1.836814e-149, 1.530391e-136, 1.299768e-125, 3.008281e-116, 3.902145e-108, 4.871363e-101, 8.849411e-95, 3.226502e-89, 3.043198e-84, 9.096626e-80, 1.015665e-75, 4.845358e-72, 1.103652e-68, 1.316597e-65,
   8.890738e-63, 3.629455e-60, 9.472944e-58, 1.658489e-55, 2.029979e-53, 1.800493e-51, 2.438836e-46, 2.074879e-43, 1.349216e-39, 2.251017e-37, 1.975163e-34, 1.09185e-32, 2.385868e-30, 6.026562e-29 };
   graph = new TGraph(31,Graph_fx308,Graph_fy308);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph308 = new TH1F("Graph_Graph308","",100,0.76,10.84);
   Graph_Graph308->SetMinimum(1.073879e-207);
   Graph_Graph308->SetMaximum(6.629218e-29);
   Graph_Graph308->SetDirectory(nullptr);
   Graph_Graph308->SetStats(0);
   Graph_Graph308->SetLineWidth(2);
   Graph_Graph308->SetMarkerStyle(20);
   Graph_Graph308->SetMarkerSize(0.9);
   Graph_Graph308->GetXaxis()->SetLabelFont(42);
   Graph_Graph308->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph308->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph308->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph308->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph308->GetXaxis()->SetTitleFont(42);
   Graph_Graph308->GetYaxis()->SetLabelFont(42);
   Graph_Graph308->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph308->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph308->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph308->GetYaxis()->SetTickLength(0.02);
   Graph_Graph308->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph308->GetYaxis()->SetTitleFont(42);
   Graph_Graph308->GetZaxis()->SetLabelFont(42);
   Graph_Graph308->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph308->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph308->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph308->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph308->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph308);
   
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
