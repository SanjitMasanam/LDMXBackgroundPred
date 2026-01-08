#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_thermal_2mnthNorm_rate_8.4e-08()
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
   
   Double_t Graph0_fx120[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy120[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
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
   Graph_Graph0120->GetXaxis()->SetTitle("m(#Chi) [TeV]");
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
   Double_t Graph1_fy121[58] = { 58.779, 51.64776, 45.92929, 43.98549, 45.6157, 46.96366, 45.67817, 44.11966, 42.26104, 41.07864, 41.22047, 41.3882, 41.46952, 41.86501, 42.41551, 41.4595, 41.57227,
   40.74936, 41.49311, 44.80825, 40.66233, 40.35588, 41.43917, 41.70946, 42.87254, 44.21722, 46.20752, 49.26201, 49.26201, 6.848145, 6.848145, 6.60553, 6.4888,
   6.429291, 6.468201, 6.650925, 6.707764, 6.896973, 7.89299, 7.006836, 7.026291, 7.349396, 7.544708, 7.989883, 8.102417, 8.010864, 7.787323, 7.609749, 7.587433,
   7.967377, 8.674622, 9.602356, 10.23788, 9.626007, 8.935547, 9.307861, 10.86216, 13.86166 };
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
   Graph_Graph1121->SetMinimum(1.19432);
   Graph_Graph1121->SetMaximum(64.01397);
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
   Double_t Graph2_fy122[58] = { 41.08932, 34.68272, 30.43059, 29.10126, 30.56705, 31.66236, 30.49195, 28.98051, 27.44781, 26.52774, 26.5394, 26.79385, 26.96737, 27.20667, 27.4908, 26.67214, 26.60195,
   25.87957, 26.19794, 28.60487, 25.59011, 25.23252, 25.72039, 25.66032, 26.23477, 26.91895, 27.92595, 29.65634, 29.65634, 10.4023, 10.4023, 9.924173, 9.696507,
   9.556746, 9.515142, 9.685409, 9.739733, 9.96542, 11.42623, 10.17399, 10.187, 10.6393, 10.81706, 11.34792, 11.40246, 11.27362, 11.06023, 10.7881, 10.82689,
   11.31595, 12.20772, 13.27584, 14.11645, 13.38859, 12.46262, 13.06176, 15.17487, 19.31883 };
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
   Graph_Graph2122->SetMinimum(6.357724);
   Graph_Graph2122->SetMaximum(44.24674);
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
   Double_t Graph0_fy123[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
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
   Graph_Graph0123->GetXaxis()->SetTitle("m(#Chi) [TeV]");
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
   Double_t Graph_fy124[28] = { 1.370402e-68, 1.410304e-62, 1.702997e-57, 3.822574e-53, 2.234647e-49, 4.381125e-46, 3.494863e-43, 1.318283e-40, 2.647455e-38, 3.112294e-36, 2.312584e-34, 1.156489e-32, 4.099456e-31, 1.075487e-29, 2.165339e-28, 3.449918e-27, 4.464742e-26,
   4.799624e-25, 4.369348e-24, 3.425155e-23, 7.71137e-21, 1.688837e-19, 9.30792e-18, 9.587518e-17, 2.092029e-15, 1.293314e-14, 1.485246e-13, 6.397822e-13 };
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
   Graph_Graph124->SetMinimum(1.233362e-68);
   Graph_Graph124->SetMaximum(7.037604e-13);
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
   Double_t Graph_fy126[28] = { 1.507442e-68, 1.551334e-62, 1.873297e-57, 4.204831e-53, 2.458111e-49, 4.819237e-46, 3.84435e-43, 1.450112e-40, 2.912201e-38, 3.423523e-36, 2.543842e-34, 1.272138e-32, 4.509401e-31, 1.183035e-29, 2.381873e-28, 3.79491e-27, 4.911216e-26,
   5.279587e-25, 4.806283e-24, 3.767671e-23, 8.482507e-21, 1.85772e-19, 1.023871e-17, 1.054627e-16, 2.301232e-15, 1.422646e-14, 1.633771e-13, 7.037604e-13 };
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
   Graph_Graph126->SetMinimum(1.356698e-68);
   Graph_Graph126->SetMaximum(7.741364e-13);
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
