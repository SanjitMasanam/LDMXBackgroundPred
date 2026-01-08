#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_8.4e-08()
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
   
   Double_t Graph0_fx120[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy120[28] = { 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488, 3.23373, 3.106641, 3.064277,
   2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   TGraph *graph = new TGraph(28,Graph0_fx120,Graph0_fy120);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0120 = new TH1F("Graph_Graph0120","",100,1.42,10.78);
   Graph_Graph0120->SetMinimum(0.2);
   Graph_Graph0120->SetMaximum(100000);
   Graph_Graph0120->SetDirectory(nullptr);
   Graph_Graph0120->SetStats(0);
   Graph_Graph0120->SetLineWidth(2);
   Graph_Graph0120->SetMarkerStyle(20);
   Graph_Graph0120->SetMarkerSize(0.9);
   Graph_Graph0120->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0120->GetXaxis()->SetRange(0,92);
   Graph_Graph0120->GetXaxis()->SetLabelFont(42);
   Graph_Graph0120->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0120->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0120->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0120->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0120->GetXaxis()->SetTitleFont(42);
   Graph_Graph0120->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0120->GetYaxis()->SetLabelFont(42);
   Graph_Graph0120->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0120->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0120->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0120->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0120->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0120->GetYaxis()->SetTitleFont(42);
   Graph_Graph0120->GetZaxis()->SetLabelFont(42);
   Graph_Graph0120->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0120->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0120->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0120->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0120->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0120);
   
   graph->Draw("al");
   
   Double_t Graph1_fx121[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph1_fy121[58] = { 10.5295, 8.999737, 7.890887, 7.541231, 7.944484, 8.272706, 7.989387, 7.610503, 7.223642, 6.994062, 7.04746, 7.155706, 7.232473, 7.360828, 7.470015, 7.27591, 7.273525,
   7.114378, 7.241053, 7.099592, 7.160175, 7.143899, 7.345257, 7.379629, 7.583706, 7.809992, 8.123136, 8.610247, 8.610247, 1.62183, 1.62183, 1.573178, 1.541047,
   1.510019, 1.46716, 1.473999, 1.45006, 1.4569, 1.376807, 1.373387, 1.375179, 1.430395, 1.468373, 1.553706, 1.552658, 1.506213, 1.456955, 1.390045, 1.376807,
   1.43638, 1.58763, 1.744176, 1.891454, 1.754794, 1.621057, 1.706529, 2.008615, 2.679478 };
   graph = new TGraph(58,Graph1_fx121,Graph1_fy121);
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
   
   TH1F *Graph_Graph1121 = new TH1F("Graph_Graph1121","Graph",100,1.42,10.78);
   Graph_Graph1121->SetMinimum(0.4577757);
   Graph_Graph1121->SetMaximum(11.44511);
   Graph_Graph1121->SetDirectory(nullptr);
   Graph_Graph1121->SetStats(0);
   Graph_Graph1121->SetLineWidth(2);
   Graph_Graph1121->SetMarkerStyle(20);
   Graph_Graph1121->SetMarkerSize(0.9);
   Graph_Graph1121->GetXaxis()->SetLabelFont(42);
   Graph_Graph1121->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1121->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1121->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1121->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1121->GetXaxis()->SetTitleFont(42);
   Graph_Graph1121->GetYaxis()->SetLabelFont(42);
   Graph_Graph1121->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1121->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1121->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1121->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1121->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1121->GetYaxis()->SetTitleFont(42);
   Graph_Graph1121->GetZaxis()->SetLabelFont(42);
   Graph_Graph1121->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1121->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1121->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1121->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1121->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1121);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx122[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph2_fy122[58] = { 7.495786, 6.163175, 5.319945, 5.094251, 5.413108, 5.689595, 5.438096, 5.095623, 4.774285, 4.599689, 4.632096, 4.738912, 4.821813, 4.917635, 4.973852, 4.815523, 4.7865,
   4.656444, 4.707599, 4.628958, 4.68628, 4.664279, 4.771608, 4.767576, 4.879922, 4.999065, 5.176817, 5.458317, 5.458317, 2.248087, 2.248087, 2.16193, 2.108827,
   2.066367, 2.016235, 2.037893, 2.004795, 2.014252, 1.937569, 1.950602, 1.944138, 2.017572, 2.057125, 2.17059, 2.159557, 2.10424, 2.032049, 1.968507, 1.949759,
   2.034124, 2.217983, 2.440439, 2.61192, 2.444428, 2.254692, 2.363222, 2.785758, 3.643049 };
   graph = new TGraph(58,Graph2_fx122,Graph2_fy122);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2122 = new TH1F("Graph_Graph2122","Graph",100,1.42,10.78);
   Graph_Graph2122->SetMinimum(1.381747);
   Graph_Graph2122->SetMaximum(8.051608);
   Graph_Graph2122->SetDirectory(nullptr);
   Graph_Graph2122->SetStats(0);
   Graph_Graph2122->SetLineWidth(2);
   Graph_Graph2122->SetMarkerStyle(20);
   Graph_Graph2122->SetMarkerSize(0.9);
   Graph_Graph2122->GetXaxis()->SetLabelFont(42);
   Graph_Graph2122->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2122->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2122->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2122->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2122->GetXaxis()->SetTitleFont(42);
   Graph_Graph2122->GetYaxis()->SetLabelFont(42);
   Graph_Graph2122->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2122->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2122->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2122->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2122->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2122->GetYaxis()->SetTitleFont(42);
   Graph_Graph2122->GetZaxis()->SetLabelFont(42);
   Graph_Graph2122->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2122->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2122->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2122->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2122->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2122);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx123[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy123[28] = { 5.196563, 4.080996, 3.494971, 3.346699, 3.593818, 3.812695, 3.600879, 3.304336, 3.064277, 2.937188, 2.96543, 3.057217, 3.134883, 3.205488, 3.23373, 3.106641, 3.064277,
   2.958369, 2.979551, 2.937188, 3.007793, 2.993672, 3.043096, 3.028975, 3.09252, 3.156064, 3.247852, 3.403184 };
   graph = new TGraph(28,Graph0_fx123,Graph0_fy123);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0123 = new TH1F("Graph_Graph0123","",100,1.42,10.78);
   Graph_Graph0123->SetMinimum(0.2);
   Graph_Graph0123->SetMaximum(100000);
   Graph_Graph0123->SetDirectory(nullptr);
   Graph_Graph0123->SetStats(0);
   Graph_Graph0123->SetLineWidth(2);
   Graph_Graph0123->SetMarkerStyle(20);
   Graph_Graph0123->SetMarkerSize(0.9);
   Graph_Graph0123->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0123->GetXaxis()->SetRange(0,92);
   Graph_Graph0123->GetXaxis()->SetLabelFont(42);
   Graph_Graph0123->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0123->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0123->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0123->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0123->GetXaxis()->SetTitleFont(42);
   Graph_Graph0123->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0123->GetYaxis()->SetLabelFont(42);
   Graph_Graph0123->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0123->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0123->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0123->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0123->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0123->GetYaxis()->SetTitleFont(42);
   Graph_Graph0123->GetZaxis()->SetLabelFont(42);
   Graph_Graph0123->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0123->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0123->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0123->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0123->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0123);
   
   graph->Draw("l");
   
   Double_t Graph_fx124[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy124[28] = { 8.997133e-13, 2.091101e-11, 2.968803e-10, 2.863325e-09, 2.027902e-08, 1.117986e-07, 5.016307e-07, 1.89636e-06, 6.207248e-06, 1.798006e-05, 4.690901e-05, 0.000111829, 0.0002465193, 0.0005075114, 0.0009838913, 0.001808857, 0.003172576,
   0.005335711, 0.008642871, 0.01353523, 0.04379938, 0.08516394, 0.2009396, 0.3300147, 0.6332009, 0.9282764, 1.544688, 2.090604 };
   graph = new TGraph(28,Graph_fx124,Graph_fy124);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph124 = new TH1F("Graph_Graph124","",100,1.42,10.78);
   Graph_Graph124->SetMinimum(8.09742e-13);
   Graph_Graph124->SetMaximum(2.299664);
   Graph_Graph124->SetDirectory(nullptr);
   Graph_Graph124->SetStats(0);
   Graph_Graph124->SetLineWidth(2);
   Graph_Graph124->SetMarkerStyle(20);
   Graph_Graph124->SetMarkerSize(0.9);
   Graph_Graph124->GetXaxis()->SetLabelFont(42);
   Graph_Graph124->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph124->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph124->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph124->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph124->GetXaxis()->SetTitleFont(42);
   Graph_Graph124->GetYaxis()->SetLabelFont(42);
   Graph_Graph124->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph124->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph124->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph124->GetYaxis()->SetTickLength(0.02);
   Graph_Graph124->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph124->GetYaxis()->SetTitleFont(42);
   Graph_Graph124->GetZaxis()->SetLabelFont(42);
   Graph_Graph124->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph124->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph124->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph124->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph124->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph124);
   
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
   
   Double_t Graph_fx126[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy126[28] = { 9.896847e-13, 2.300211e-11, 3.265684e-10, 3.149657e-09, 2.230692e-08, 1.229784e-07, 5.517938e-07, 2.085996e-06, 6.827973e-06, 1.977807e-05, 5.159991e-05, 0.0001230119, 0.0002711712, 0.0005582626, 0.00108228, 0.001989743, 0.003489834,
   0.005869282, 0.009507158, 0.01488875, 0.04817931, 0.09368033, 0.2210335, 0.3630162, 0.696521, 1.021104, 1.699156, 2.299664 };
   graph = new TGraph(28,Graph_fx126,Graph_fy126);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph126 = new TH1F("Graph_Graph126","",100,1.42,10.78);
   Graph_Graph126->SetMinimum(8.907162e-13);
   Graph_Graph126->SetMaximum(2.529631);
   Graph_Graph126->SetDirectory(nullptr);
   Graph_Graph126->SetStats(0);
   Graph_Graph126->SetLineWidth(2);
   Graph_Graph126->SetMarkerStyle(20);
   Graph_Graph126->SetMarkerSize(0.9);
   Graph_Graph126->GetXaxis()->SetLabelFont(42);
   Graph_Graph126->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph126->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph126->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph126->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph126->GetXaxis()->SetTitleFont(42);
   Graph_Graph126->GetYaxis()->SetLabelFont(42);
   Graph_Graph126->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph126->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph126->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph126->GetYaxis()->SetTickLength(0.02);
   Graph_Graph126->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph126->GetYaxis()->SetTitleFont(42);
   Graph_Graph126->GetZaxis()->SetLabelFont(42);
   Graph_Graph126->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph126->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph126->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph126->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph126->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph126);
   
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
