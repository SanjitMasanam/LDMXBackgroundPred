#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_14mnthNorm_rate_2.14e-07()
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
   
   Double_t Graph0_fx274[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy274[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(31,Graph0_fx274,Graph0_fy274);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0274 = new TH1F("Graph_Graph0274","",100,0.76,10.84);
   Graph_Graph0274->SetMinimum(0.2);
   Graph_Graph0274->SetMaximum(100000);
   Graph_Graph0274->SetDirectory(nullptr);
   Graph_Graph0274->SetStats(0);
   Graph_Graph0274->SetLineWidth(2);
   Graph_Graph0274->SetMarkerStyle(20);
   Graph_Graph0274->SetMarkerSize(0.9);
   Graph_Graph0274->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0274->GetXaxis()->SetRange(4,92);
   Graph_Graph0274->GetXaxis()->SetLabelFont(42);
   Graph_Graph0274->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0274->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0274->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0274->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0274->GetXaxis()->SetTitleFont(42);
   Graph_Graph0274->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0274->GetYaxis()->SetLabelFont(42);
   Graph_Graph0274->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0274->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0274->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0274->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0274->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0274->GetYaxis()->SetTitleFont(42);
   Graph_Graph0274->GetZaxis()->SetLabelFont(42);
   Graph_Graph0274->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0274->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0274->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0274->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0274->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0274);
   
   graph->Draw("al");
   
   Double_t Graph1_fx275[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy275[64] = { 9.981168, 9.272051, 10.55289, 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828,
   7.470015, 7.27591, 7.273525, 7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183,
   1.62183, 1.573178, 1.541047, 1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213,
   1.456955, 1.390045, 1.376807, 1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478, 2.721786, 2.276199, 2.407628 };
   graph = new TGraph(64,Graph1_fx275,Graph1_fy275);
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
   
   TH1F *Graph_Graph1275 = new TH1F("Graph_Graph1275","Graph",100,0.76,10.84);
   Graph_Graph1275->SetMinimum(0.4554363);
   Graph_Graph1275->SetMaximum(11.47084);
   Graph_Graph1275->SetDirectory(nullptr);
   Graph_Graph1275->SetStats(0);
   Graph_Graph1275->SetLineWidth(2);
   Graph_Graph1275->SetMarkerStyle(20);
   Graph_Graph1275->SetMarkerSize(0.9);
   Graph_Graph1275->GetXaxis()->SetLabelFont(42);
   Graph_Graph1275->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1275->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1275->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1275->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1275->GetXaxis()->SetTitleFont(42);
   Graph_Graph1275->GetYaxis()->SetLabelFont(42);
   Graph_Graph1275->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1275->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1275->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1275->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1275->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1275->GetYaxis()->SetTitleFont(42);
   Graph_Graph1275->GetZaxis()->SetLabelFont(42);
   Graph_Graph1275->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1275->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1275->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1275->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1275->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1275);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx276[64] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10,
   10, 9.5, 9, 8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6,
   4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy276[64] = { 7.041793, 6.522612, 7.53601, 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635,
   4.973852, 4.815523, 4.7865, 4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087,
   2.248087, 2.16193, 2.108827, 2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424,
   2.032049, 1.968507, 1.949759, 2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049, 3.685378, 3.090679, 3.348122 };
   graph = new TGraph(64,Graph2_fx276,Graph2_fy276);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2276 = new TH1F("Graph_Graph2276","Graph",100,0.76,10.84);
   Graph_Graph2276->SetMinimum(1.377724);
   Graph_Graph2276->SetMaximum(8.095854);
   Graph_Graph2276->SetDirectory(nullptr);
   Graph_Graph2276->SetStats(0);
   Graph_Graph2276->SetLineWidth(2);
   Graph_Graph2276->SetMarkerStyle(20);
   Graph_Graph2276->SetMarkerSize(0.9);
   Graph_Graph2276->GetXaxis()->SetLabelFont(42);
   Graph_Graph2276->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2276->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2276->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2276->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2276->GetXaxis()->SetTitleFont(42);
   Graph_Graph2276->GetYaxis()->SetLabelFont(42);
   Graph_Graph2276->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2276->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2276->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2276->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2276->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2276->GetYaxis()->SetTitleFont(42);
   Graph_Graph2276->GetZaxis()->SetLabelFont(42);
   Graph_Graph2276->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2276->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2276->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2276->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2276->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2276);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx277[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy277[31] = { 4.815293, 4.448145, 5.238926, 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488,
   3.23373, 3.106641, 3.064277, 2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(31,Graph0_fx277,Graph0_fy277);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0277 = new TH1F("Graph_Graph0277","",100,0.76,10.84);
   Graph_Graph0277->SetMinimum(0.2);
   Graph_Graph0277->SetMaximum(100000);
   Graph_Graph0277->SetDirectory(nullptr);
   Graph_Graph0277->SetStats(0);
   Graph_Graph0277->SetLineWidth(2);
   Graph_Graph0277->SetMarkerStyle(20);
   Graph_Graph0277->SetMarkerSize(0.9);
   Graph_Graph0277->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0277->GetXaxis()->SetRange(4,92);
   Graph_Graph0277->GetXaxis()->SetLabelFont(42);
   Graph_Graph0277->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0277->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0277->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0277->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0277->GetXaxis()->SetTitleFont(42);
   Graph_Graph0277->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0277->GetYaxis()->SetLabelFont(42);
   Graph_Graph0277->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0277->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0277->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0277->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0277->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0277->GetYaxis()->SetTitleFont(42);
   Graph_Graph0277->GetZaxis()->SetLabelFont(42);
   Graph_Graph0277->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0277->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0277->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0277->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0277->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0277);
   
   graph->Draw("l");
   
   Double_t Graph_fx278[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy278[31] = { 7.070136e-146, 4.584392e-129, 1.270752e-115, 1.250871e-104, 1.793082e-95, 9.941328e-88, 4.282615e-81, 2.390732e-75, 2.537962e-70, 6.869604e-66, 5.95541e-62, 1.979714e-58, 2.91431e-55, 2.134637e-52, 8.557961e-50, 2.031758e-47, 3.050152e-45,
   3.05949e-43, 2.148323e-41, 1.098794e-39, 4.235221e-38, 1.266823e-36, 3.016287e-35, 1.275038e-31, 1.495925e-29, 7.365187e-27, 2.72692e-25, 3.25252e-23, 5.510536e-22, 2.457797e-20, 2.392712e-19 };
   graph = new TGraph(31,Graph_fx278,Graph_fy278);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph278 = new TH1F("Graph_Graph278","",100,0.76,10.84);
   Graph_Graph278->SetMinimum(6.363123e-146);
   Graph_Graph278->SetMaximum(2.631983e-19);
   Graph_Graph278->SetDirectory(nullptr);
   Graph_Graph278->SetStats(0);
   Graph_Graph278->SetLineWidth(2);
   Graph_Graph278->SetMarkerStyle(20);
   Graph_Graph278->SetMarkerSize(0.9);
   Graph_Graph278->GetXaxis()->SetLabelFont(42);
   Graph_Graph278->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph278->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph278->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph278->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph278->GetXaxis()->SetTitleFont(42);
   Graph_Graph278->GetYaxis()->SetLabelFont(42);
   Graph_Graph278->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph278->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph278->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph278->GetYaxis()->SetTickLength(0.02);
   Graph_Graph278->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph278->GetYaxis()->SetTitleFont(42);
   Graph_Graph278->GetZaxis()->SetLabelFont(42);
   Graph_Graph278->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph278->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph278->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph278->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph278->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph278);
   
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
   
   Double_t Graph_fx280[31] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy280[31] = { 7.77715e-146, 5.042832e-129, 1.397827e-115, 1.375958e-104, 1.972391e-95, 1.093546e-87, 4.710876e-81, 2.629805e-75, 2.791759e-70, 7.556564e-66, 6.550951e-62, 2.177685e-58, 3.205741e-55, 2.3481e-52, 9.413758e-50, 2.234933e-47, 3.355167e-45,
   3.365439e-43, 2.363156e-41, 1.208673e-39, 4.658744e-38, 1.393506e-36, 3.317916e-35, 1.402542e-31, 1.645517e-29, 8.101706e-27, 2.999613e-25, 3.577772e-23, 6.06159e-22, 2.703577e-20, 2.631983e-19 };
   graph = new TGraph(31,Graph_fx280,Graph_fy280);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph280 = new TH1F("Graph_Graph280","",100,0.76,10.84);
   Graph_Graph280->SetMinimum(6.999435e-146);
   Graph_Graph280->SetMaximum(2.895181e-19);
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
