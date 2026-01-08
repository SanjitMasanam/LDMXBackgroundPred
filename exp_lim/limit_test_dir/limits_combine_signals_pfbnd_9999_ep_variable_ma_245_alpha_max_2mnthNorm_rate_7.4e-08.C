#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_7.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Oct  1 19:51:20 2025) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx113[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy113[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   TGraph *graph = new TGraph(28,Graph0_fx113,Graph0_fy113);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0113 = new TH1F("Graph_Graph0113","",100,1.42,10.78);
   Graph_Graph0113->SetMinimum(0.2);
   Graph_Graph0113->SetMaximum(100000);
   Graph_Graph0113->SetDirectory(nullptr);
   Graph_Graph0113->SetStats(0);
   Graph_Graph0113->SetLineWidth(2);
   Graph_Graph0113->SetMarkerStyle(20);
   Graph_Graph0113->SetMarkerSize(0.9);
   Graph_Graph0113->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0113->GetXaxis()->SetRange(0,92);
   Graph_Graph0113->GetXaxis()->SetLabelFont(42);
   Graph_Graph0113->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0113->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0113->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0113->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0113->GetXaxis()->SetTitleFont(42);
   Graph_Graph0113->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0113->GetYaxis()->SetLabelFont(42);
   Graph_Graph0113->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0113->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0113->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0113->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0113->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0113->GetYaxis()->SetTitleFont(42);
   Graph_Graph0113->GetZaxis()->SetLabelFont(42);
   Graph_Graph0113->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0113->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0113->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0113->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0113->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0113);
   
   graph->Draw("al");
   
   Double_t Graph1_fx114[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph1_fy114[58] = { 58.779, 51.64776, 45.92929, 43.98549, 45.6157, 46.96366, 45.67817, 44.11966, 42.26104, 41.07864, 41.22047, 41.3882, 41.46952, 41.86501, 42.41551, 41.4595, 41.57227,
   40.74936, 41.49311, 44.80825, 40.66233, 40.35588, 41.43917, 41.70946, 42.87254, 44.21722, 46.20752, 49.26201, 49.26201, 6.848145, 6.848145, 6.60553, 6.4888,
   6.429291, 6.468201, 6.650925, 6.707764, 6.896973, 7.89299, 7.006836, 7.026291, 7.349396, 7.544708, 7.989883, 8.102417, 8.010864, 7.787323, 7.609749, 7.587433,
   7.967377, 8.674622, 9.602356, 10.23788, 9.626007, 8.935547, 9.307861, 10.86216, 13.86166 };
   graph = new TGraph(58,Graph1_fx114,Graph1_fy114);
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
   
   TH1F *Graph_Graph1114 = new TH1F("Graph_Graph1114","Graph",100,1.42,10.78);
   Graph_Graph1114->SetMinimum(1.19432);
   Graph_Graph1114->SetMaximum(64.01397);
   Graph_Graph1114->SetDirectory(nullptr);
   Graph_Graph1114->SetStats(0);
   Graph_Graph1114->SetLineWidth(2);
   Graph_Graph1114->SetMarkerStyle(20);
   Graph_Graph1114->SetMarkerSize(0.9);
   Graph_Graph1114->GetXaxis()->SetLabelFont(42);
   Graph_Graph1114->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1114->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1114->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1114->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1114->GetXaxis()->SetTitleFont(42);
   Graph_Graph1114->GetYaxis()->SetLabelFont(42);
   Graph_Graph1114->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1114->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1114->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1114->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1114->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1114->GetYaxis()->SetTitleFont(42);
   Graph_Graph1114->GetZaxis()->SetLabelFont(42);
   Graph_Graph1114->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1114->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1114->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1114->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1114->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1114);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx115[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph2_fy115[58] = { 41.08932, 34.68272, 30.43059, 29.10126, 30.56705, 31.66236, 30.49195, 28.98051, 27.44781, 26.52774, 26.5394, 26.79385, 26.96737, 27.20667, 27.4908, 26.67214, 26.60195,
   25.87957, 26.19794, 28.60487, 25.59011, 25.23252, 25.72039, 25.66032, 26.23477, 26.91895, 27.92595, 29.65634, 29.65634, 10.4023, 10.4023, 9.924173, 9.696507,
   9.556746, 9.515142, 9.685409, 9.739733, 9.96542, 11.42623, 10.17399, 10.187, 10.6393, 10.81706, 11.34792, 11.40246, 11.27362, 11.06023, 10.7881, 10.82689,
   11.31595, 12.20772, 13.27584, 14.11645, 13.38859, 12.46262, 13.06176, 15.17487, 19.31883 };
   graph = new TGraph(58,Graph2_fx115,Graph2_fy115);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2115 = new TH1F("Graph_Graph2115","Graph",100,1.42,10.78);
   Graph_Graph2115->SetMinimum(6.357724);
   Graph_Graph2115->SetMaximum(44.24674);
   Graph_Graph2115->SetDirectory(nullptr);
   Graph_Graph2115->SetStats(0);
   Graph_Graph2115->SetLineWidth(2);
   Graph_Graph2115->SetMarkerStyle(20);
   Graph_Graph2115->SetMarkerSize(0.9);
   Graph_Graph2115->GetXaxis()->SetLabelFont(42);
   Graph_Graph2115->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2115->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2115->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2115->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2115->GetXaxis()->SetTitleFont(42);
   Graph_Graph2115->GetYaxis()->SetLabelFont(42);
   Graph_Graph2115->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2115->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2115->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2115->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2115->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2115->GetYaxis()->SetTitleFont(42);
   Graph_Graph2115->GetZaxis()->SetLabelFont(42);
   Graph_Graph2115->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2115->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2115->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2115->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2115->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2115);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx116[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy116[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   graph = new TGraph(28,Graph0_fx116,Graph0_fy116);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0116 = new TH1F("Graph_Graph0116","",100,1.42,10.78);
   Graph_Graph0116->SetMinimum(0.2);
   Graph_Graph0116->SetMaximum(100000);
   Graph_Graph0116->SetDirectory(nullptr);
   Graph_Graph0116->SetStats(0);
   Graph_Graph0116->SetLineWidth(2);
   Graph_Graph0116->SetMarkerStyle(20);
   Graph_Graph0116->SetMarkerSize(0.9);
   Graph_Graph0116->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0116->GetXaxis()->SetRange(0,92);
   Graph_Graph0116->GetXaxis()->SetLabelFont(42);
   Graph_Graph0116->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0116->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0116->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0116->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0116->GetXaxis()->SetTitleFont(42);
   Graph_Graph0116->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0116->GetYaxis()->SetLabelFont(42);
   Graph_Graph0116->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0116->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0116->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0116->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0116->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0116->GetYaxis()->SetTitleFont(42);
   Graph_Graph0116->GetZaxis()->SetLabelFont(42);
   Graph_Graph0116->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0116->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0116->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0116->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0116->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0116);
   
   graph->Draw("l");
   
   Double_t Graph_fx117[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy117[28] = { 3.519886e-09, 3.93624e-08, 3.009191e-07, 1.707286e-06, 7.634387e-06, 2.814613e-05, 8.854823e-05, 0.0002441528, 0.0006025764, 0.001353752, 0.002806402, 0.005428395, 0.009887467, 0.0170885, 0.02820378, 0.04469339, 0.06831394,
   0.1011149, 0.1454226, 0.203814, 0.4922087, 0.8096846, 1.53648, 2.222348, 3.603059, 4.780348, 6.956242, 8.68674 };
   graph = new TGraph(28,Graph_fx117,Graph_fy117);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph117 = new TH1F("Graph_Graph117","",100,1.42,10.78);
   Graph_Graph117->SetMinimum(3.167897e-09);
   Graph_Graph117->SetMaximum(9.555414);
   Graph_Graph117->SetDirectory(nullptr);
   Graph_Graph117->SetStats(0);
   Graph_Graph117->SetLineWidth(2);
   Graph_Graph117->SetMarkerStyle(20);
   Graph_Graph117->SetMarkerSize(0.9);
   Graph_Graph117->GetXaxis()->SetLabelFont(42);
   Graph_Graph117->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph117->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph117->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph117->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph117->GetXaxis()->SetTitleFont(42);
   Graph_Graph117->GetYaxis()->SetLabelFont(42);
   Graph_Graph117->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph117->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph117->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph117->GetYaxis()->SetTickLength(0.02);
   Graph_Graph117->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph117->GetYaxis()->SetTitleFont(42);
   Graph_Graph117->GetZaxis()->SetLabelFont(42);
   Graph_Graph117->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph117->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph117->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph117->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph117->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph117);
   
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
   
   Double_t Graph_fx119[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy119[28] = { 3.871874e-09, 4.329864e-08, 3.31011e-07, 1.878014e-06, 8.397825e-06, 3.096074e-05, 9.740306e-05, 0.0002685681, 0.0006628341, 0.001489127, 0.003087042, 0.005971234, 0.01087621, 0.01879735, 0.03102416, 0.04916273, 0.07514533,
   0.1112263, 0.1599649, 0.2241954, 0.5414296, 0.890653, 1.690128, 2.444583, 3.963365, 5.258383, 7.651866, 9.555414 };
   graph = new TGraph(28,Graph_fx119,Graph_fy119);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph119 = new TH1F("Graph_Graph119","",100,1.42,10.78);
   Graph_Graph119->SetMinimum(3.484687e-09);
   Graph_Graph119->SetMaximum(10.51095);
   Graph_Graph119->SetDirectory(nullptr);
   Graph_Graph119->SetStats(0);
   Graph_Graph119->SetLineWidth(2);
   Graph_Graph119->SetMarkerStyle(20);
   Graph_Graph119->SetMarkerSize(0.9);
   Graph_Graph119->GetXaxis()->SetLabelFont(42);
   Graph_Graph119->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph119->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph119->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph119->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph119->GetXaxis()->SetTitleFont(42);
   Graph_Graph119->GetYaxis()->SetLabelFont(42);
   Graph_Graph119->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph119->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph119->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph119->GetYaxis()->SetTickLength(0.02);
   Graph_Graph119->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph119->GetYaxis()->SetTitleFont(42);
   Graph_Graph119->GetZaxis()->SetLabelFont(42);
   Graph_Graph119->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph119->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph119->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph119->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph119->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph119);
   
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
