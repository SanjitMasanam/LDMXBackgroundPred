#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_1.64e-07()
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
   
   Double_t Graph0_fx176[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy176[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   TGraph *graph = new TGraph(28,Graph0_fx176,Graph0_fy176);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0176 = new TH1F("Graph_Graph0176","",100,1.42,10.78);
   Graph_Graph0176->SetMinimum(0.2);
   Graph_Graph0176->SetMaximum(100000);
   Graph_Graph0176->SetDirectory(nullptr);
   Graph_Graph0176->SetStats(0);
   Graph_Graph0176->SetLineWidth(2);
   Graph_Graph0176->SetMarkerStyle(20);
   Graph_Graph0176->SetMarkerSize(0.9);
   Graph_Graph0176->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0176->GetXaxis()->SetRange(0,92);
   Graph_Graph0176->GetXaxis()->SetLabelFont(42);
   Graph_Graph0176->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0176->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0176->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0176->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0176->GetXaxis()->SetTitleFont(42);
   Graph_Graph0176->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0176->GetYaxis()->SetLabelFont(42);
   Graph_Graph0176->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0176->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0176->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0176->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0176->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0176->GetYaxis()->SetTitleFont(42);
   Graph_Graph0176->GetZaxis()->SetLabelFont(42);
   Graph_Graph0176->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0176->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0176->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0176->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0176->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0176);
   
   graph->Draw("al");
   
   Double_t Graph1_fx177[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph1_fy177[58] = { 58.779, 51.64776, 45.92929, 43.98549, 45.6157, 46.96366, 45.67817, 44.11966, 42.26104, 41.07864, 41.22047, 41.3882, 41.46952, 41.86501, 42.41551, 41.4595, 41.57227,
   40.74936, 41.49311, 44.80825, 40.66233, 40.35588, 41.43917, 41.70946, 42.87254, 44.21722, 46.20752, 49.26201, 49.26201, 6.848145, 6.848145, 6.60553, 6.4888,
   6.429291, 6.468201, 6.650925, 6.707764, 6.896973, 7.89299, 7.006836, 7.026291, 7.349396, 7.544708, 7.989883, 8.102417, 8.010864, 7.787323, 7.609749, 7.587433,
   7.967377, 8.674622, 9.602356, 10.23788, 9.626007, 8.935547, 9.307861, 10.86216, 13.86166 };
   graph = new TGraph(58,Graph1_fx177,Graph1_fy177);
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
   
   TH1F *Graph_Graph1177 = new TH1F("Graph_Graph1177","Graph",100,1.42,10.78);
   Graph_Graph1177->SetMinimum(1.19432);
   Graph_Graph1177->SetMaximum(64.01397);
   Graph_Graph1177->SetDirectory(nullptr);
   Graph_Graph1177->SetStats(0);
   Graph_Graph1177->SetLineWidth(2);
   Graph_Graph1177->SetMarkerStyle(20);
   Graph_Graph1177->SetMarkerSize(0.9);
   Graph_Graph1177->GetXaxis()->SetLabelFont(42);
   Graph_Graph1177->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1177->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1177->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1177->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1177->GetXaxis()->SetTitleFont(42);
   Graph_Graph1177->GetYaxis()->SetLabelFont(42);
   Graph_Graph1177->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1177->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1177->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1177->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1177->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1177->GetYaxis()->SetTitleFont(42);
   Graph_Graph1177->GetZaxis()->SetLabelFont(42);
   Graph_Graph1177->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1177->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1177->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1177->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1177->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1177);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx178[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph2_fy178[58] = { 41.08932, 34.68272, 30.43059, 29.10126, 30.56705, 31.66236, 30.49195, 28.98051, 27.44781, 26.52774, 26.5394, 26.79385, 26.96737, 27.20667, 27.4908, 26.67214, 26.60195,
   25.87957, 26.19794, 28.60487, 25.59011, 25.23252, 25.72039, 25.66032, 26.23477, 26.91895, 27.92595, 29.65634, 29.65634, 10.4023, 10.4023, 9.924173, 9.696507,
   9.556746, 9.515142, 9.685409, 9.739733, 9.96542, 11.42623, 10.17399, 10.187, 10.6393, 10.81706, 11.34792, 11.40246, 11.27362, 11.06023, 10.7881, 10.82689,
   11.31595, 12.20772, 13.27584, 14.11645, 13.38859, 12.46262, 13.06176, 15.17487, 19.31883 };
   graph = new TGraph(58,Graph2_fx178,Graph2_fy178);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2178 = new TH1F("Graph_Graph2178","Graph",100,1.42,10.78);
   Graph_Graph2178->SetMinimum(6.357724);
   Graph_Graph2178->SetMaximum(44.24674);
   Graph_Graph2178->SetDirectory(nullptr);
   Graph_Graph2178->SetStats(0);
   Graph_Graph2178->SetLineWidth(2);
   Graph_Graph2178->SetMarkerStyle(20);
   Graph_Graph2178->SetMarkerSize(0.9);
   Graph_Graph2178->GetXaxis()->SetLabelFont(42);
   Graph_Graph2178->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2178->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2178->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2178->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2178->GetXaxis()->SetTitleFont(42);
   Graph_Graph2178->GetYaxis()->SetLabelFont(42);
   Graph_Graph2178->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2178->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2178->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2178->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2178->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2178->GetYaxis()->SetTitleFont(42);
   Graph_Graph2178->GetZaxis()->SetLabelFont(42);
   Graph_Graph2178->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2178->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2178->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2178->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2178->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2178);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx179[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy179[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   graph = new TGraph(28,Graph0_fx179,Graph0_fy179);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0179 = new TH1F("Graph_Graph0179","",100,1.42,10.78);
   Graph_Graph0179->SetMinimum(0.2);
   Graph_Graph0179->SetMaximum(100000);
   Graph_Graph0179->SetDirectory(nullptr);
   Graph_Graph0179->SetStats(0);
   Graph_Graph0179->SetLineWidth(2);
   Graph_Graph0179->SetMarkerStyle(20);
   Graph_Graph0179->SetMarkerSize(0.9);
   Graph_Graph0179->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0179->GetXaxis()->SetRange(0,92);
   Graph_Graph0179->GetXaxis()->SetLabelFont(42);
   Graph_Graph0179->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0179->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0179->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0179->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0179->GetXaxis()->SetTitleFont(42);
   Graph_Graph0179->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0179->GetYaxis()->SetLabelFont(42);
   Graph_Graph0179->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0179->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0179->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0179->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0179->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0179->GetYaxis()->SetTitleFont(42);
   Graph_Graph0179->GetZaxis()->SetLabelFont(42);
   Graph_Graph0179->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0179->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0179->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0179->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0179->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0179);
   
   graph->Draw("l");
   
   Double_t Graph_fx180[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy180[28] = { 1.743855e-59, 3.956868e-54, 1.334591e-49, 1.007331e-45, 2.296564e-42, 1.980304e-39, 7.669991e-37, 1.525186e-34, 1.730356e-32, 1.218649e-30, 5.704384e-29, 1.876654e-27, 4.544001e-26, 8.415139e-25, 1.231029e-23, 1.461892e-22, 1.442443e-21,
   1.206343e-20, 8.699364e-20, 5.490467e-19, 7.005516e-17, 1.112064e-15, 4.044009e-14, 3.274956e-13, 5.208862e-12, 2.67419e-11, 2.397602e-10, 8.913762e-10 };
   graph = new TGraph(28,Graph_fx180,Graph_fy180);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph180 = new TH1F("Graph_Graph180","",100,1.42,10.78);
   Graph_Graph180->SetMinimum(1.56947e-59);
   Graph_Graph180->SetMaximum(9.805138e-10);
   Graph_Graph180->SetDirectory(nullptr);
   Graph_Graph180->SetStats(0);
   Graph_Graph180->SetLineWidth(2);
   Graph_Graph180->SetMarkerStyle(20);
   Graph_Graph180->SetMarkerSize(0.9);
   Graph_Graph180->GetXaxis()->SetLabelFont(42);
   Graph_Graph180->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph180->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph180->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph180->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph180->GetXaxis()->SetTitleFont(42);
   Graph_Graph180->GetYaxis()->SetLabelFont(42);
   Graph_Graph180->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph180->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph180->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph180->GetYaxis()->SetTickLength(0.02);
   Graph_Graph180->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph180->GetYaxis()->SetTitleFont(42);
   Graph_Graph180->GetZaxis()->SetLabelFont(42);
   Graph_Graph180->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph180->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph180->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph180->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph180->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph180);
   
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
   
   Double_t Graph_fx182[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy182[28] = { 1.918241e-59, 4.352555e-54, 1.468051e-49, 1.108064e-45, 2.526221e-42, 2.178334e-39, 8.43699e-37, 1.677705e-34, 1.903392e-32, 1.340513e-30, 6.274822e-29, 2.064319e-27, 4.998401e-26, 9.256652e-25, 1.354132e-23, 1.608081e-22, 1.586688e-21,
   1.326977e-20, 9.5693e-20, 6.039513e-19, 7.706067e-17, 1.223271e-15, 4.448409e-14, 3.602451e-13, 5.729748e-12, 2.941609e-11, 2.637362e-10, 9.805138e-10 };
   graph = new TGraph(28,Graph_fx182,Graph_fy182);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph182 = new TH1F("Graph_Graph182","",100,1.42,10.78);
   Graph_Graph182->SetMinimum(1.726417e-59);
   Graph_Graph182->SetMaximum(1.078565e-09);
   Graph_Graph182->SetDirectory(nullptr);
   Graph_Graph182->SetStats(0);
   Graph_Graph182->SetLineWidth(2);
   Graph_Graph182->SetMarkerStyle(20);
   Graph_Graph182->SetMarkerSize(0.9);
   Graph_Graph182->GetXaxis()->SetLabelFont(42);
   Graph_Graph182->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph182->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph182->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph182->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph182->GetXaxis()->SetTitleFont(42);
   Graph_Graph182->GetYaxis()->SetLabelFont(42);
   Graph_Graph182->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph182->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph182->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph182->GetYaxis()->SetTickLength(0.02);
   Graph_Graph182->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph182->GetYaxis()->SetTitleFont(42);
   Graph_Graph182->GetZaxis()->SetLabelFont(42);
   Graph_Graph182->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph182->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph182->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph182->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph182->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph182);
   
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
