#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_1.24e-07()
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
   
   Double_t Graph0_fx148[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy148[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   TGraph *graph = new TGraph(28,Graph0_fx148,Graph0_fy148);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0148 = new TH1F("Graph_Graph0148","",100,1.42,10.78);
   Graph_Graph0148->SetMinimum(0.2);
   Graph_Graph0148->SetMaximum(100000);
   Graph_Graph0148->SetDirectory(nullptr);
   Graph_Graph0148->SetStats(0);
   Graph_Graph0148->SetLineWidth(2);
   Graph_Graph0148->SetMarkerStyle(20);
   Graph_Graph0148->SetMarkerSize(0.9);
   Graph_Graph0148->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0148->GetXaxis()->SetRange(0,92);
   Graph_Graph0148->GetXaxis()->SetLabelFont(42);
   Graph_Graph0148->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0148->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0148->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0148->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0148->GetXaxis()->SetTitleFont(42);
   Graph_Graph0148->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0148->GetYaxis()->SetLabelFont(42);
   Graph_Graph0148->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0148->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0148->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0148->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0148->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0148->GetYaxis()->SetTitleFont(42);
   Graph_Graph0148->GetZaxis()->SetLabelFont(42);
   Graph_Graph0148->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0148->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0148->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0148->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0148->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0148);
   
   graph->Draw("al");
   
   Double_t Graph1_fx149[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph1_fy149[58] = { 58.779, 51.64776, 45.92929, 43.98549, 45.6157, 46.96366, 45.67817, 44.11966, 42.26104, 41.07864, 41.22047, 41.3882, 41.46952, 41.86501, 42.41551, 41.4595, 41.57227,
   40.74936, 41.49311, 44.80825, 40.66233, 40.35588, 41.43917, 41.70946, 42.87254, 44.21722, 46.20752, 49.26201, 49.26201, 6.848145, 6.848145, 6.60553, 6.4888,
   6.429291, 6.468201, 6.650925, 6.707764, 6.896973, 7.89299, 7.006836, 7.026291, 7.349396, 7.544708, 7.989883, 8.102417, 8.010864, 7.787323, 7.609749, 7.587433,
   7.967377, 8.674622, 9.602356, 10.23788, 9.626007, 8.935547, 9.307861, 10.86216, 13.86166 };
   graph = new TGraph(58,Graph1_fx149,Graph1_fy149);
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
   
   TH1F *Graph_Graph1149 = new TH1F("Graph_Graph1149","Graph",100,1.42,10.78);
   Graph_Graph1149->SetMinimum(1.19432);
   Graph_Graph1149->SetMaximum(64.01397);
   Graph_Graph1149->SetDirectory(nullptr);
   Graph_Graph1149->SetStats(0);
   Graph_Graph1149->SetLineWidth(2);
   Graph_Graph1149->SetMarkerStyle(20);
   Graph_Graph1149->SetMarkerSize(0.9);
   Graph_Graph1149->GetXaxis()->SetLabelFont(42);
   Graph_Graph1149->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1149->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1149->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1149->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1149->GetXaxis()->SetTitleFont(42);
   Graph_Graph1149->GetYaxis()->SetLabelFont(42);
   Graph_Graph1149->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1149->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1149->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1149->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1149->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1149->GetYaxis()->SetTitleFont(42);
   Graph_Graph1149->GetZaxis()->SetLabelFont(42);
   Graph_Graph1149->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1149->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1149->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1149->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1149->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1149);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx150[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph2_fy150[58] = { 41.08932, 34.68272, 30.43059, 29.10126, 30.56705, 31.66236, 30.49195, 28.98051, 27.44781, 26.52774, 26.5394, 26.79385, 26.96737, 27.20667, 27.4908, 26.67214, 26.60195,
   25.87957, 26.19794, 28.60487, 25.59011, 25.23252, 25.72039, 25.66032, 26.23477, 26.91895, 27.92595, 29.65634, 29.65634, 10.4023, 10.4023, 9.924173, 9.696507,
   9.556746, 9.515142, 9.685409, 9.739733, 9.96542, 11.42623, 10.17399, 10.187, 10.6393, 10.81706, 11.34792, 11.40246, 11.27362, 11.06023, 10.7881, 10.82689,
   11.31595, 12.20772, 13.27584, 14.11645, 13.38859, 12.46262, 13.06176, 15.17487, 19.31883 };
   graph = new TGraph(58,Graph2_fx150,Graph2_fy150);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2150 = new TH1F("Graph_Graph2150","Graph",100,1.42,10.78);
   Graph_Graph2150->SetMinimum(6.357724);
   Graph_Graph2150->SetMaximum(44.24674);
   Graph_Graph2150->SetDirectory(nullptr);
   Graph_Graph2150->SetStats(0);
   Graph_Graph2150->SetLineWidth(2);
   Graph_Graph2150->SetMarkerStyle(20);
   Graph_Graph2150->SetMarkerSize(0.9);
   Graph_Graph2150->GetXaxis()->SetLabelFont(42);
   Graph_Graph2150->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2150->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2150->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2150->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2150->GetXaxis()->SetTitleFont(42);
   Graph_Graph2150->GetYaxis()->SetLabelFont(42);
   Graph_Graph2150->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2150->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2150->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2150->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2150->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2150->GetYaxis()->SetTitleFont(42);
   Graph_Graph2150->GetZaxis()->SetLabelFont(42);
   Graph_Graph2150->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2150->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2150->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2150->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2150->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2150);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx151[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy151[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   graph = new TGraph(28,Graph0_fx151,Graph0_fy151);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0151 = new TH1F("Graph_Graph0151","",100,1.42,10.78);
   Graph_Graph0151->SetMinimum(0.2);
   Graph_Graph0151->SetMaximum(100000);
   Graph_Graph0151->SetDirectory(nullptr);
   Graph_Graph0151->SetStats(0);
   Graph_Graph0151->SetLineWidth(2);
   Graph_Graph0151->SetMarkerStyle(20);
   Graph_Graph0151->SetMarkerSize(0.9);
   Graph_Graph0151->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0151->GetXaxis()->SetRange(0,92);
   Graph_Graph0151->GetXaxis()->SetLabelFont(42);
   Graph_Graph0151->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0151->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0151->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0151->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0151->GetXaxis()->SetTitleFont(42);
   Graph_Graph0151->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0151->GetYaxis()->SetLabelFont(42);
   Graph_Graph0151->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0151->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0151->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0151->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0151->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0151->GetYaxis()->SetTitleFont(42);
   Graph_Graph0151->GetZaxis()->SetLabelFont(42);
   Graph_Graph0151->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0151->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0151->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0151->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0151->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0151);
   
   graph->Draw("l");
   
   Double_t Graph_fx152[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy152[28] = { 3.581967e-32, 3.921374e-29, 1.449769e-26, 2.28563e-24, 1.823103e-22, 8.363262e-21, 2.433565e-19, 4.847141e-18, 7.017801e-17, 7.749192e-16, 6.784783e-15, 4.862361e-14, 2.928131e-13, 1.514474e-12, 6.852249e-12, 2.754529e-11, 9.968848e-11,
   3.285068e-10, 9.953667e-10, 2.796611e-09, 4.225255e-08, 1.981761e-07, 1.472316e-06, 4.72118e-06, 2.199118e-05, 5.453116e-05, 0.0001838795, 0.0003801889 };
   graph = new TGraph(28,Graph_fx152,Graph_fy152);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph152 = new TH1F("Graph_Graph152","",100,1.42,10.78);
   Graph_Graph152->SetMinimum(3.223771e-32);
   Graph_Graph152->SetMaximum(0.0004182078);
   Graph_Graph152->SetDirectory(nullptr);
   Graph_Graph152->SetStats(0);
   Graph_Graph152->SetLineWidth(2);
   Graph_Graph152->SetMarkerStyle(20);
   Graph_Graph152->SetMarkerSize(0.9);
   Graph_Graph152->GetXaxis()->SetLabelFont(42);
   Graph_Graph152->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph152->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph152->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph152->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph152->GetXaxis()->SetTitleFont(42);
   Graph_Graph152->GetYaxis()->SetLabelFont(42);
   Graph_Graph152->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph152->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph152->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph152->GetYaxis()->SetTickLength(0.02);
   Graph_Graph152->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph152->GetYaxis()->SetTitleFont(42);
   Graph_Graph152->GetZaxis()->SetLabelFont(42);
   Graph_Graph152->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph152->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph152->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph152->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph152->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph152);
   
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
   
   Double_t Graph_fx154[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy154[28] = { 3.940164e-32, 4.313512e-29, 1.594746e-26, 2.514193e-24, 2.005413e-22, 9.199588e-21, 2.676921e-19, 5.331855e-18, 7.719581e-17, 8.524111e-16, 7.463261e-15, 5.348597e-14, 3.220944e-13, 1.665921e-12, 7.537474e-12, 3.029982e-11, 1.096573e-10,
   3.613575e-10, 1.094903e-09, 3.076272e-09, 4.64778e-08, 2.179937e-07, 1.619548e-06, 5.193298e-06, 2.419029e-05, 5.998428e-05, 0.0002022674, 0.0004182078 };
   graph = new TGraph(28,Graph_fx154,Graph_fy154);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph154 = new TH1F("Graph_Graph154","",100,1.42,10.78);
   Graph_Graph154->SetMinimum(3.546148e-32);
   Graph_Graph154->SetMaximum(0.0004600286);
   Graph_Graph154->SetDirectory(nullptr);
   Graph_Graph154->SetStats(0);
   Graph_Graph154->SetLineWidth(2);
   Graph_Graph154->SetMarkerStyle(20);
   Graph_Graph154->SetMarkerSize(0.9);
   Graph_Graph154->GetXaxis()->SetLabelFont(42);
   Graph_Graph154->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph154->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph154->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph154->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph154->GetXaxis()->SetTitleFont(42);
   Graph_Graph154->GetYaxis()->SetLabelFont(42);
   Graph_Graph154->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph154->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph154->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph154->GetYaxis()->SetTickLength(0.02);
   Graph_Graph154->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph154->GetYaxis()->SetTitleFont(42);
   Graph_Graph154->GetZaxis()->SetLabelFont(42);
   Graph_Graph154->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph154->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph154->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph154->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph154->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph154);
   
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
