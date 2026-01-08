#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_2.24e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Nov  5 21:49:51 2025) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-0.30575,-1.838764,10.57525,5.759863);
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
   
   Double_t Graph0_fx218[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy218[28] = { 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488, 3.23373, 3.106641, 3.064277,
   2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(28,Graph0_fx218,Graph0_fy218);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0218 = new TH1F("Graph_Graph0218","",100,1.42,10.78);
   Graph_Graph0218->SetMinimum(0.2);
   Graph_Graph0218->SetMaximum(100000);
   Graph_Graph0218->SetDirectory(nullptr);
   Graph_Graph0218->SetStats(0);
   Graph_Graph0218->SetLineWidth(2);
   Graph_Graph0218->SetMarkerStyle(20);
   Graph_Graph0218->SetMarkerSize(0.9);
   Graph_Graph0218->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0218->GetXaxis()->SetRange(0,92);
   Graph_Graph0218->GetXaxis()->SetLabelFont(42);
   Graph_Graph0218->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0218->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0218->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0218->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0218->GetXaxis()->SetTitleFont(42);
   Graph_Graph0218->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0218->GetYaxis()->SetLabelFont(42);
   Graph_Graph0218->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0218->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0218->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0218->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0218->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0218->GetYaxis()->SetTitleFont(42);
   Graph_Graph0218->GetZaxis()->SetLabelFont(42);
   Graph_Graph0218->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0218->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0218->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0218->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0218->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0218);
   
   graph->Draw("al");
   
   Double_t Graph1_fx219[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph1_fy219[58] = { 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828, 7.470015, 7.27591, 7.273525,
   7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183, 1.62183, 1.573178, 1.541047,
   1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213, 1.456955, 1.390045, 1.376807,
   1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478 };
   graph = new TGraph(58,Graph1_fx219,Graph1_fy219);
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
   
   TH1F *Graph_Graph1219 = new TH1F("Graph_Graph1219","Graph",100,1.42,10.78);
   Graph_Graph1219->SetMinimum(0.4577757);
   Graph_Graph1219->SetMaximum(11.44511);
   Graph_Graph1219->SetDirectory(nullptr);
   Graph_Graph1219->SetStats(0);
   Graph_Graph1219->SetLineWidth(2);
   Graph_Graph1219->SetMarkerStyle(20);
   Graph_Graph1219->SetMarkerSize(0.9);
   Graph_Graph1219->GetXaxis()->SetLabelFont(42);
   Graph_Graph1219->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1219->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1219->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1219->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1219->GetXaxis()->SetTitleFont(42);
   Graph_Graph1219->GetYaxis()->SetLabelFont(42);
   Graph_Graph1219->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1219->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1219->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1219->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1219->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1219->GetYaxis()->SetTitleFont(42);
   Graph_Graph1219->GetZaxis()->SetLabelFont(42);
   Graph_Graph1219->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1219->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1219->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1219->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1219->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1219);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx220[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph2_fy220[58] = { 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635, 4.973852, 4.815523, 4.7865,
   4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087, 2.248087, 2.16193, 2.108827,
   2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424, 2.032049, 1.968507, 1.949759,
   2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049 };
   graph = new TGraph(58,Graph2_fx220,Graph2_fy220);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2220 = new TH1F("Graph_Graph2220","Graph",100,1.42,10.78);
   Graph_Graph2220->SetMinimum(1.381747);
   Graph_Graph2220->SetMaximum(8.051608);
   Graph_Graph2220->SetDirectory(nullptr);
   Graph_Graph2220->SetStats(0);
   Graph_Graph2220->SetLineWidth(2);
   Graph_Graph2220->SetMarkerStyle(20);
   Graph_Graph2220->SetMarkerSize(0.9);
   Graph_Graph2220->GetXaxis()->SetLabelFont(42);
   Graph_Graph2220->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2220->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2220->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2220->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2220->GetXaxis()->SetTitleFont(42);
   Graph_Graph2220->GetYaxis()->SetLabelFont(42);
   Graph_Graph2220->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2220->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2220->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2220->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2220->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2220->GetYaxis()->SetTitleFont(42);
   Graph_Graph2220->GetZaxis()->SetLabelFont(42);
   Graph_Graph2220->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2220->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2220->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2220->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2220->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2220);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx221[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy221[28] = { 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488, 3.23373, 3.106641, 3.064277,
   2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(28,Graph0_fx221,Graph0_fy221);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0221 = new TH1F("Graph_Graph0221","",100,1.42,10.78);
   Graph_Graph0221->SetMinimum(0.2);
   Graph_Graph0221->SetMaximum(100000);
   Graph_Graph0221->SetDirectory(nullptr);
   Graph_Graph0221->SetStats(0);
   Graph_Graph0221->SetLineWidth(2);
   Graph_Graph0221->SetMarkerStyle(20);
   Graph_Graph0221->SetMarkerSize(0.9);
   Graph_Graph0221->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0221->GetXaxis()->SetRange(0,92);
   Graph_Graph0221->GetXaxis()->SetLabelFont(42);
   Graph_Graph0221->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0221->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0221->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0221->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0221->GetXaxis()->SetTitleFont(42);
   Graph_Graph0221->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0221->GetYaxis()->SetLabelFont(42);
   Graph_Graph0221->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0221->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0221->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0221->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0221->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0221->GetYaxis()->SetTitleFont(42);
   Graph_Graph0221->GetZaxis()->SetLabelFont(42);
   Graph_Graph0221->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0221->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0221->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0221->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0221->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0221);
   
   graph->Draw("l");
   
   Double_t Graph_fx222[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy222[28] = { 4.049556e-115, 4.411199e-105, 1.360381e-96, 2.551051e-89, 5.095216e-83, 1.650197e-77, 1.195118e-72, 2.485004e-68, 1.807012e-64, 5.380755e-61, 7.454907e-58, 5.335005e-55, 2.149812e-52, 5.241637e-50, 8.21414e-48, 8.707132e-46, 6.520864e-44,
   3.581367e-42, 1.48959e-40, 4.824544e-39, 4.589986e-35, 8.560815e-33, 7.709587e-30, 4.059703e-28, 7.723637e-26, 1.725686e-24, 1.116315e-22, 1.358361e-21 };
   graph = new TGraph(28,Graph_fx222,Graph_fy222);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph222 = new TH1F("Graph_Graph222","",100,1.42,10.78);
   Graph_Graph222->SetMinimum(3.6446e-115);
   Graph_Graph222->SetMaximum(1.494197e-21);
   Graph_Graph222->SetDirectory(nullptr);
   Graph_Graph222->SetStats(0);
   Graph_Graph222->SetLineWidth(2);
   Graph_Graph222->SetMarkerStyle(20);
   Graph_Graph222->SetMarkerSize(0.9);
   Graph_Graph222->GetXaxis()->SetLabelFont(42);
   Graph_Graph222->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph222->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph222->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph222->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph222->GetXaxis()->SetTitleFont(42);
   Graph_Graph222->GetYaxis()->SetLabelFont(42);
   Graph_Graph222->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph222->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph222->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph222->GetYaxis()->SetTickLength(0.02);
   Graph_Graph222->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph222->GetYaxis()->SetTitleFont(42);
   Graph_Graph222->GetZaxis()->SetLabelFont(42);
   Graph_Graph222->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph222->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph222->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph222->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph222->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph222);
   
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
   
   Double_t Graph_fx224[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy224[28] = { 4.454511e-115, 4.852318e-105, 1.496419e-96, 2.806156e-89, 5.604738e-83, 1.815217e-77, 1.31463e-72, 2.733505e-68, 1.987713e-64, 5.91883e-61, 8.200398e-58, 5.868506e-55, 2.364793e-52, 5.765801e-50, 9.035554e-48, 9.577846e-46, 7.17295e-44,
   3.939503e-42, 1.638549e-40, 5.306999e-39, 5.048985e-35, 9.416896e-33, 8.480546e-30, 4.465673e-28, 8.496001e-26, 1.898254e-24, 1.227947e-22, 1.494197e-21 };
   graph = new TGraph(28,Graph_fx224,Graph_fy224);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph224 = new TH1F("Graph_Graph224","",100,1.42,10.78);
   Graph_Graph224->SetMinimum(4.00906e-115);
   Graph_Graph224->SetMaximum(1.643616e-21);
   Graph_Graph224->SetDirectory(nullptr);
   Graph_Graph224->SetStats(0);
   Graph_Graph224->SetLineWidth(2);
   Graph_Graph224->SetMarkerStyle(20);
   Graph_Graph224->SetMarkerSize(0.9);
   Graph_Graph224->GetXaxis()->SetLabelFont(42);
   Graph_Graph224->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph224->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph224->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph224->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph224->GetXaxis()->SetTitleFont(42);
   Graph_Graph224->GetYaxis()->SetLabelFont(42);
   Graph_Graph224->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph224->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph224->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph224->GetYaxis()->SetTickLength(0.02);
   Graph_Graph224->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph224->GetYaxis()->SetTitleFont(42);
   Graph_Graph224->GetZaxis()->SetLabelFont(42);
   Graph_Graph224->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph224->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph224->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph224->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph224->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph224);
   
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
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,1.42,10.78);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_copy->GetXaxis()->SetRange(0,92);
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
      tex = new TLatex(0.95,0.915,"2023D Cosmics");
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
