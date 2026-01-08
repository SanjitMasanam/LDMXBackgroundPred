#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_thermal_2mnthNorm_rate_9.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Oct  1 19:55:48 2025) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx127[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy127[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   TGraph *graph = new TGraph(28,Graph0_fx127,Graph0_fy127);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0127 = new TH1F("Graph_Graph0127","",100,1.42,10.78);
   Graph_Graph0127->SetMinimum(0.2);
   Graph_Graph0127->SetMaximum(100000);
   Graph_Graph0127->SetDirectory(nullptr);
   Graph_Graph0127->SetStats(0);
   Graph_Graph0127->SetLineWidth(2);
   Graph_Graph0127->SetMarkerStyle(20);
   Graph_Graph0127->SetMarkerSize(0.9);
   Graph_Graph0127->GetXaxis()->SetTitle("m(#Chi) [TeV]");
   Graph_Graph0127->GetXaxis()->SetRange(0,92);
   Graph_Graph0127->GetXaxis()->SetLabelFont(42);
   Graph_Graph0127->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0127->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0127->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0127->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0127->GetXaxis()->SetTitleFont(42);
   Graph_Graph0127->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0127->GetYaxis()->SetLabelFont(42);
   Graph_Graph0127->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0127->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0127->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0127->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0127->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0127->GetYaxis()->SetTitleFont(42);
   Graph_Graph0127->GetZaxis()->SetLabelFont(42);
   Graph_Graph0127->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0127->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0127->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0127->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0127->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0127);
   
   graph->Draw("al");
   
   Double_t Graph1_fx128[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph1_fy128[58] = { 58.779, 51.64776, 45.92929, 43.98549, 45.6157, 46.96366, 45.67817, 44.11966, 42.26104, 41.07864, 41.22047, 41.3882, 41.46952, 41.86501, 42.41551, 41.4595, 41.57227,
   40.74936, 41.49311, 44.80825, 40.66233, 40.35588, 41.43917, 41.70946, 42.87254, 44.21722, 46.20752, 49.26201, 49.26201, 6.848145, 6.848145, 6.60553, 6.4888,
   6.429291, 6.468201, 6.650925, 6.707764, 6.896973, 7.89299, 7.006836, 7.026291, 7.349396, 7.544708, 7.989883, 8.102417, 8.010864, 7.787323, 7.609749, 7.587433,
   7.967377, 8.674622, 9.602356, 10.23788, 9.626007, 8.935547, 9.307861, 10.86216, 13.86166 };
   graph = new TGraph(58,Graph1_fx128,Graph1_fy128);
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
   
   TH1F *Graph_Graph1128 = new TH1F("Graph_Graph1128","Graph",100,1.42,10.78);
   Graph_Graph1128->SetMinimum(1.19432);
   Graph_Graph1128->SetMaximum(64.01397);
   Graph_Graph1128->SetDirectory(nullptr);
   Graph_Graph1128->SetStats(0);
   Graph_Graph1128->SetLineWidth(2);
   Graph_Graph1128->SetMarkerStyle(20);
   Graph_Graph1128->SetMarkerSize(0.9);
   Graph_Graph1128->GetXaxis()->SetLabelFont(42);
   Graph_Graph1128->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1128->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1128->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1128->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1128->GetXaxis()->SetTitleFont(42);
   Graph_Graph1128->GetYaxis()->SetLabelFont(42);
   Graph_Graph1128->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1128->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1128->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1128->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1128->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1128->GetYaxis()->SetTitleFont(42);
   Graph_Graph1128->GetZaxis()->SetLabelFont(42);
   Graph_Graph1128->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1128->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1128->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1128->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1128->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1128);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx129[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph2_fy129[58] = { 41.08932, 34.68272, 30.43059, 29.10126, 30.56705, 31.66236, 30.49195, 28.98051, 27.44781, 26.52774, 26.5394, 26.79385, 26.96737, 27.20667, 27.4908, 26.67214, 26.60195,
   25.87957, 26.19794, 28.60487, 25.59011, 25.23252, 25.72039, 25.66032, 26.23477, 26.91895, 27.92595, 29.65634, 29.65634, 10.4023, 10.4023, 9.924173, 9.696507,
   9.556746, 9.515142, 9.685409, 9.739733, 9.96542, 11.42623, 10.17399, 10.187, 10.6393, 10.81706, 11.34792, 11.40246, 11.27362, 11.06023, 10.7881, 10.82689,
   11.31595, 12.20772, 13.27584, 14.11645, 13.38859, 12.46262, 13.06176, 15.17487, 19.31883 };
   graph = new TGraph(58,Graph2_fx129,Graph2_fy129);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2129 = new TH1F("Graph_Graph2129","Graph",100,1.42,10.78);
   Graph_Graph2129->SetMinimum(6.357724);
   Graph_Graph2129->SetMaximum(44.24674);
   Graph_Graph2129->SetDirectory(nullptr);
   Graph_Graph2129->SetStats(0);
   Graph_Graph2129->SetLineWidth(2);
   Graph_Graph2129->SetMarkerStyle(20);
   Graph_Graph2129->SetMarkerSize(0.9);
   Graph_Graph2129->GetXaxis()->SetLabelFont(42);
   Graph_Graph2129->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2129->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2129->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2129->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2129->GetXaxis()->SetTitleFont(42);
   Graph_Graph2129->GetYaxis()->SetLabelFont(42);
   Graph_Graph2129->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2129->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2129->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2129->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2129->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2129->GetYaxis()->SetTitleFont(42);
   Graph_Graph2129->GetZaxis()->SetLabelFont(42);
   Graph_Graph2129->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2129->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2129->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2129->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2129->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2129);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx130[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy130[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   graph = new TGraph(28,Graph0_fx130,Graph0_fy130);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0130 = new TH1F("Graph_Graph0130","",100,1.42,10.78);
   Graph_Graph0130->SetMinimum(0.2);
   Graph_Graph0130->SetMaximum(100000);
   Graph_Graph0130->SetDirectory(nullptr);
   Graph_Graph0130->SetStats(0);
   Graph_Graph0130->SetLineWidth(2);
   Graph_Graph0130->SetMarkerStyle(20);
   Graph_Graph0130->SetMarkerSize(0.9);
   Graph_Graph0130->GetXaxis()->SetTitle("m(#Chi) [TeV]");
   Graph_Graph0130->GetXaxis()->SetRange(0,92);
   Graph_Graph0130->GetXaxis()->SetLabelFont(42);
   Graph_Graph0130->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0130->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0130->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0130->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0130->GetXaxis()->SetTitleFont(42);
   Graph_Graph0130->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0130->GetYaxis()->SetLabelFont(42);
   Graph_Graph0130->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0130->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0130->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0130->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0130->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0130->GetYaxis()->SetTitleFont(42);
   Graph_Graph0130->GetZaxis()->SetLabelFont(42);
   Graph_Graph0130->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0130->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0130->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0130->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0130->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0130);
   
   graph->Draw("l");
   
   Double_t Graph_fx131[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy131[28] = { 3.937455e-77, 2.126044e-70, 1.043789e-64, 7.796046e-60, 1.291906e-55, 6.303016e-52, 1.123964e-48, 8.667078e-46, 3.300241e-43, 6.900259e-41, 8.632451e-39, 6.932052e-37, 3.786556e-35, 1.476629e-33, 4.281229e-32, 9.550913e-31, 1.688095e-29,
   2.423836e-28, 2.888946e-27, 2.912246e-26, 1.272437e-23, 4.070419e-22, 3.674921e-20, 5.048188e-19, 1.613391e-17, 1.25053e-16, 1.946115e-15, 1.005982e-14 };
   graph = new TGraph(28,Graph_fx131,Graph_fy131);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph131 = new TH1F("Graph_Graph131","",100,1.42,10.78);
   Graph_Graph131->SetMinimum(3.543709e-77);
   Graph_Graph131->SetMaximum(1.106581e-14);
   Graph_Graph131->SetDirectory(nullptr);
   Graph_Graph131->SetStats(0);
   Graph_Graph131->SetLineWidth(2);
   Graph_Graph131->SetMarkerStyle(20);
   Graph_Graph131->SetMarkerSize(0.9);
   Graph_Graph131->GetXaxis()->SetLabelFont(42);
   Graph_Graph131->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph131->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph131->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph131->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph131->GetXaxis()->SetTitleFont(42);
   Graph_Graph131->GetYaxis()->SetLabelFont(42);
   Graph_Graph131->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph131->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph131->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph131->GetYaxis()->SetTickLength(0.02);
   Graph_Graph131->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph131->GetYaxis()->SetTitleFont(42);
   Graph_Graph131->GetZaxis()->SetLabelFont(42);
   Graph_Graph131->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph131->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph131->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph131->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph131->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph131);
   
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
   
   Double_t Graph_fx133[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy133[28] = { 4.3312e-77, 2.338649e-70, 1.148168e-64, 8.575651e-60, 1.421097e-55, 6.933317e-52, 1.23636e-48, 9.533786e-46, 3.630265e-43, 7.590285e-41, 9.495696e-39, 7.625257e-37, 4.165211e-35, 1.624292e-33, 4.709352e-32, 1.0506e-30, 1.856904e-29,
   2.666219e-28, 3.17784e-27, 3.203471e-26, 1.399681e-23, 4.477461e-22, 4.042413e-20, 5.553007e-19, 1.774731e-17, 1.375583e-16, 2.140727e-15, 1.106581e-14 };
   graph = new TGraph(28,Graph_fx133,Graph_fy133);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph133 = new TH1F("Graph_Graph133","",100,1.42,10.78);
   Graph_Graph133->SetMinimum(3.89808e-77);
   Graph_Graph133->SetMaximum(1.217239e-14);
   Graph_Graph133->SetDirectory(nullptr);
   Graph_Graph133->SetStats(0);
   Graph_Graph133->SetLineWidth(2);
   Graph_Graph133->SetMarkerStyle(20);
   Graph_Graph133->SetMarkerSize(0.9);
   Graph_Graph133->GetXaxis()->SetLabelFont(42);
   Graph_Graph133->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph133->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph133->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph133->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph133->GetXaxis()->SetTitleFont(42);
   Graph_Graph133->GetYaxis()->SetLabelFont(42);
   Graph_Graph133->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph133->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph133->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph133->GetYaxis()->SetTickLength(0.02);
   Graph_Graph133->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph133->GetYaxis()->SetTitleFont(42);
   Graph_Graph133->GetZaxis()->SetLabelFont(42);
   Graph_Graph133->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph133->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph133->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph133->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph133->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph133);
   
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
   Graph_copy->GetXaxis()->SetTitle("m(#Chi) [TeV]");
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
