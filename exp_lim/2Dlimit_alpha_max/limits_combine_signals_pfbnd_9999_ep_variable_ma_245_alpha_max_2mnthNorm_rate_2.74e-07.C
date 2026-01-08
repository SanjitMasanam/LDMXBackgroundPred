#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_2.74e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Oct  1 19:53:55 2025) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx253[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy253[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   TGraph *graph = new TGraph(28,Graph0_fx253,Graph0_fy253);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0253 = new TH1F("Graph_Graph0253","",100,1.42,10.78);
   Graph_Graph0253->SetMinimum(0.2);
   Graph_Graph0253->SetMaximum(100000);
   Graph_Graph0253->SetDirectory(nullptr);
   Graph_Graph0253->SetStats(0);
   Graph_Graph0253->SetLineWidth(2);
   Graph_Graph0253->SetMarkerStyle(20);
   Graph_Graph0253->SetMarkerSize(0.9);
   Graph_Graph0253->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0253->GetXaxis()->SetRange(0,92);
   Graph_Graph0253->GetXaxis()->SetLabelFont(42);
   Graph_Graph0253->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0253->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0253->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0253->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0253->GetXaxis()->SetTitleFont(42);
   Graph_Graph0253->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0253->GetYaxis()->SetLabelFont(42);
   Graph_Graph0253->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0253->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0253->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0253->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0253->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0253->GetYaxis()->SetTitleFont(42);
   Graph_Graph0253->GetZaxis()->SetLabelFont(42);
   Graph_Graph0253->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0253->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0253->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0253->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0253->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0253);
   
   graph->Draw("al");
   
   Double_t Graph1_fx254[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph1_fy254[58] = { 58.779, 51.64776, 45.92929, 43.98549, 45.6157, 46.96366, 45.67817, 44.11966, 42.26104, 41.07864, 41.22047, 41.3882, 41.46952, 41.86501, 42.41551, 41.4595, 41.57227,
   40.74936, 41.49311, 44.80825, 40.66233, 40.35588, 41.43917, 41.70946, 42.87254, 44.21722, 46.20752, 49.26201, 49.26201, 6.848145, 6.848145, 6.60553, 6.4888,
   6.429291, 6.468201, 6.650925, 6.707764, 6.896973, 7.89299, 7.006836, 7.026291, 7.349396, 7.544708, 7.989883, 8.102417, 8.010864, 7.787323, 7.609749, 7.587433,
   7.967377, 8.674622, 9.602356, 10.23788, 9.626007, 8.935547, 9.307861, 10.86216, 13.86166 };
   graph = new TGraph(58,Graph1_fx254,Graph1_fy254);
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
   
   TH1F *Graph_Graph1254 = new TH1F("Graph_Graph1254","Graph",100,1.42,10.78);
   Graph_Graph1254->SetMinimum(1.19432);
   Graph_Graph1254->SetMaximum(64.01397);
   Graph_Graph1254->SetDirectory(nullptr);
   Graph_Graph1254->SetStats(0);
   Graph_Graph1254->SetLineWidth(2);
   Graph_Graph1254->SetMarkerStyle(20);
   Graph_Graph1254->SetMarkerSize(0.9);
   Graph_Graph1254->GetXaxis()->SetLabelFont(42);
   Graph_Graph1254->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1254->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1254->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1254->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1254->GetXaxis()->SetTitleFont(42);
   Graph_Graph1254->GetYaxis()->SetLabelFont(42);
   Graph_Graph1254->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1254->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1254->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1254->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1254->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1254->GetYaxis()->SetTitleFont(42);
   Graph_Graph1254->GetZaxis()->SetLabelFont(42);
   Graph_Graph1254->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1254->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1254->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1254->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1254->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1254);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx255[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph2_fy255[58] = { 41.08932, 34.68272, 30.43059, 29.10126, 30.56705, 31.66236, 30.49195, 28.98051, 27.44781, 26.52774, 26.5394, 26.79385, 26.96737, 27.20667, 27.4908, 26.67214, 26.60195,
   25.87957, 26.19794, 28.60487, 25.59011, 25.23252, 25.72039, 25.66032, 26.23477, 26.91895, 27.92595, 29.65634, 29.65634, 10.4023, 10.4023, 9.924173, 9.696507,
   9.556746, 9.515142, 9.685409, 9.739733, 9.96542, 11.42623, 10.17399, 10.187, 10.6393, 10.81706, 11.34792, 11.40246, 11.27362, 11.06023, 10.7881, 10.82689,
   11.31595, 12.20772, 13.27584, 14.11645, 13.38859, 12.46262, 13.06176, 15.17487, 19.31883 };
   graph = new TGraph(58,Graph2_fx255,Graph2_fy255);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2255 = new TH1F("Graph_Graph2255","Graph",100,1.42,10.78);
   Graph_Graph2255->SetMinimum(6.357724);
   Graph_Graph2255->SetMaximum(44.24674);
   Graph_Graph2255->SetDirectory(nullptr);
   Graph_Graph2255->SetStats(0);
   Graph_Graph2255->SetLineWidth(2);
   Graph_Graph2255->SetMarkerStyle(20);
   Graph_Graph2255->SetMarkerSize(0.9);
   Graph_Graph2255->GetXaxis()->SetLabelFont(42);
   Graph_Graph2255->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2255->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2255->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2255->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2255->GetXaxis()->SetTitleFont(42);
   Graph_Graph2255->GetYaxis()->SetLabelFont(42);
   Graph_Graph2255->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2255->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2255->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2255->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2255->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2255->GetYaxis()->SetTitleFont(42);
   Graph_Graph2255->GetZaxis()->SetLabelFont(42);
   Graph_Graph2255->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2255->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2255->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2255->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2255->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2255);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx256[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy256[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   graph = new TGraph(28,Graph0_fx256,Graph0_fy256);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0256 = new TH1F("Graph_Graph0256","",100,1.42,10.78);
   Graph_Graph0256->SetMinimum(0.2);
   Graph_Graph0256->SetMaximum(100000);
   Graph_Graph0256->SetDirectory(nullptr);
   Graph_Graph0256->SetStats(0);
   Graph_Graph0256->SetLineWidth(2);
   Graph_Graph0256->SetMarkerStyle(20);
   Graph_Graph0256->SetMarkerSize(0.9);
   Graph_Graph0256->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0256->GetXaxis()->SetRange(0,92);
   Graph_Graph0256->GetXaxis()->SetLabelFont(42);
   Graph_Graph0256->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0256->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0256->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0256->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0256->GetXaxis()->SetTitleFont(42);
   Graph_Graph0256->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0256->GetYaxis()->SetLabelFont(42);
   Graph_Graph0256->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0256->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0256->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0256->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0256->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0256->GetYaxis()->SetTitleFont(42);
   Graph_Graph0256->GetZaxis()->SetLabelFont(42);
   Graph_Graph0256->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0256->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0256->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0256->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0256->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0256);
   
   graph->Draw("l");
   
   Double_t Graph_fx257[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy257[28] = { 7.457258e-175, 8.256481e-160, 4.391855e-147, 3.525382e-136, 9.884384e-127, 1.816395e-118, 3.539862e-111, 1.063689e-104, 6.622191e-99, 1.081886e-93, 5.616052e-89, 1.083216e-84, 8.834313e-81, 3.392987e-77, 6.717889e-74, 7.402294e-71, 4.845033e-68,
   1.992007e-65, 5.398412e-63, 1.005424e-60, 9.627922e-55, 2.504434e-51, 6.983175e-47, 2.723738e-44, 7.366884e-41, 7.935222e-39, 4.249593e-36, 1.838034e-34 };
   graph = new TGraph(28,Graph_fx257,Graph_fy257);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph257 = new TH1F("Graph_Graph257","",100,1.42,10.78);
   Graph_Graph257->SetMinimum(6.711532e-175);
   Graph_Graph257->SetMaximum(2.021837e-34);
   Graph_Graph257->SetDirectory(nullptr);
   Graph_Graph257->SetStats(0);
   Graph_Graph257->SetLineWidth(2);
   Graph_Graph257->SetMarkerStyle(20);
   Graph_Graph257->SetMarkerSize(0.9);
   Graph_Graph257->GetXaxis()->SetLabelFont(42);
   Graph_Graph257->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph257->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph257->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph257->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph257->GetXaxis()->SetTitleFont(42);
   Graph_Graph257->GetYaxis()->SetLabelFont(42);
   Graph_Graph257->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph257->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph257->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph257->GetYaxis()->SetTickLength(0.02);
   Graph_Graph257->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph257->GetYaxis()->SetTitleFont(42);
   Graph_Graph257->GetZaxis()->SetLabelFont(42);
   Graph_Graph257->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph257->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph257->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph257->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph257->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph257);
   
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
   
   Double_t Graph_fx259[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy259[28] = { 8.202983e-175, 9.082129e-160, 4.83104e-147, 3.877921e-136, 1.087282e-126, 1.998035e-118, 3.893848e-111, 1.170058e-104, 7.284411e-99, 1.190075e-93, 6.177657e-89, 1.191538e-84, 9.717745e-81, 3.732286e-77, 7.389678e-74, 8.142523e-71, 5.329536e-68,
   2.191207e-65, 5.938253e-63, 1.105966e-60, 1.059071e-54, 2.754878e-51, 7.681493e-47, 2.996112e-44, 8.103572e-41, 8.728744e-39, 4.674553e-36, 2.021837e-34 };
   graph = new TGraph(28,Graph_fx259,Graph_fy259);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph259 = new TH1F("Graph_Graph259","",100,1.42,10.78);
   Graph_Graph259->SetMinimum(7.382685e-175);
   Graph_Graph259->SetMaximum(2.224021e-34);
   Graph_Graph259->SetDirectory(nullptr);
   Graph_Graph259->SetStats(0);
   Graph_Graph259->SetLineWidth(2);
   Graph_Graph259->SetMarkerStyle(20);
   Graph_Graph259->SetMarkerSize(0.9);
   Graph_Graph259->GetXaxis()->SetLabelFont(42);
   Graph_Graph259->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph259->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph259->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph259->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph259->GetXaxis()->SetTitleFont(42);
   Graph_Graph259->GetYaxis()->SetLabelFont(42);
   Graph_Graph259->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph259->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph259->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph259->GetYaxis()->SetTickLength(0.02);
   Graph_Graph259->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph259->GetYaxis()->SetTitleFont(42);
   Graph_Graph259->GetZaxis()->SetLabelFont(42);
   Graph_Graph259->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph259->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph259->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph259->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph259->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph259);
   
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
