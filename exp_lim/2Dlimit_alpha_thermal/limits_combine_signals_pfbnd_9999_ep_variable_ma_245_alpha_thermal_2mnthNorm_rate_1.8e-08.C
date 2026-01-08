#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_thermal_2mnthNorm_rate_1.8e-08()
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
   
   Double_t Graph0_fx36[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy36[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   TGraph *graph = new TGraph(28,Graph0_fx36,Graph0_fy36);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph036 = new TH1F("Graph_Graph036","",100,1.42,10.78);
   Graph_Graph036->SetMinimum(0.2);
   Graph_Graph036->SetMaximum(100000);
   Graph_Graph036->SetDirectory(nullptr);
   Graph_Graph036->SetStats(0);
   Graph_Graph036->SetLineWidth(2);
   Graph_Graph036->SetMarkerStyle(20);
   Graph_Graph036->SetMarkerSize(0.9);
   Graph_Graph036->GetXaxis()->SetTitle("m(#Chi) [TeV]");
   Graph_Graph036->GetXaxis()->SetRange(0,92);
   Graph_Graph036->GetXaxis()->SetLabelFont(42);
   Graph_Graph036->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph036->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph036->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph036->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph036->GetXaxis()->SetTitleFont(42);
   Graph_Graph036->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph036->GetYaxis()->SetLabelFont(42);
   Graph_Graph036->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph036->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph036->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph036->GetYaxis()->SetTickLength(0.02);
   Graph_Graph036->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph036->GetYaxis()->SetTitleFont(42);
   Graph_Graph036->GetZaxis()->SetLabelFont(42);
   Graph_Graph036->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph036->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph036->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph036->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph036->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph036);
   
   graph->Draw("al");
   
   Double_t Graph1_fx37[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph1_fy37[58] = { 58.779, 51.64776, 45.92929, 43.98549, 45.6157, 46.96366, 45.67817, 44.11966, 42.26104, 41.07864, 41.22047, 41.3882, 41.46952, 41.86501, 42.41551, 41.4595, 41.57227,
   40.74936, 41.49311, 44.80825, 40.66233, 40.35588, 41.43917, 41.70946, 42.87254, 44.21722, 46.20752, 49.26201, 49.26201, 6.848145, 6.848145, 6.60553, 6.4888,
   6.429291, 6.468201, 6.650925, 6.707764, 6.896973, 7.89299, 7.006836, 7.026291, 7.349396, 7.544708, 7.989883, 8.102417, 8.010864, 7.787323, 7.609749, 7.587433,
   7.967377, 8.674622, 9.602356, 10.23788, 9.626007, 8.935547, 9.307861, 10.86216, 13.86166 };
   graph = new TGraph(58,Graph1_fx37,Graph1_fy37);
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
   
   TH1F *Graph_Graph137 = new TH1F("Graph_Graph137","Graph",100,1.42,10.78);
   Graph_Graph137->SetMinimum(1.19432);
   Graph_Graph137->SetMaximum(64.01397);
   Graph_Graph137->SetDirectory(nullptr);
   Graph_Graph137->SetStats(0);
   Graph_Graph137->SetLineWidth(2);
   Graph_Graph137->SetMarkerStyle(20);
   Graph_Graph137->SetMarkerSize(0.9);
   Graph_Graph137->GetXaxis()->SetLabelFont(42);
   Graph_Graph137->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph137->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph137->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph137->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph137->GetXaxis()->SetTitleFont(42);
   Graph_Graph137->GetYaxis()->SetLabelFont(42);
   Graph_Graph137->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph137->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph137->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph137->GetYaxis()->SetTickLength(0.02);
   Graph_Graph137->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph137->GetYaxis()->SetTitleFont(42);
   Graph_Graph137->GetZaxis()->SetLabelFont(42);
   Graph_Graph137->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph137->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph137->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph137->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph137->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph137);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx38[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph2_fy38[58] = { 41.08932, 34.68272, 30.43059, 29.10126, 30.56705, 31.66236, 30.49195, 28.98051, 27.44781, 26.52774, 26.5394, 26.79385, 26.96737, 27.20667, 27.4908, 26.67214, 26.60195,
   25.87957, 26.19794, 28.60487, 25.59011, 25.23252, 25.72039, 25.66032, 26.23477, 26.91895, 27.92595, 29.65634, 29.65634, 10.4023, 10.4023, 9.924173, 9.696507,
   9.556746, 9.515142, 9.685409, 9.739733, 9.96542, 11.42623, 10.17399, 10.187, 10.6393, 10.81706, 11.34792, 11.40246, 11.27362, 11.06023, 10.7881, 10.82689,
   11.31595, 12.20772, 13.27584, 14.11645, 13.38859, 12.46262, 13.06176, 15.17487, 19.31883 };
   graph = new TGraph(58,Graph2_fx38,Graph2_fy38);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph238 = new TH1F("Graph_Graph238","Graph",100,1.42,10.78);
   Graph_Graph238->SetMinimum(6.357724);
   Graph_Graph238->SetMaximum(44.24674);
   Graph_Graph238->SetDirectory(nullptr);
   Graph_Graph238->SetStats(0);
   Graph_Graph238->SetLineWidth(2);
   Graph_Graph238->SetMarkerStyle(20);
   Graph_Graph238->SetMarkerSize(0.9);
   Graph_Graph238->GetXaxis()->SetLabelFont(42);
   Graph_Graph238->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph238->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph238->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph238->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph238->GetXaxis()->SetTitleFont(42);
   Graph_Graph238->GetYaxis()->SetLabelFont(42);
   Graph_Graph238->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph238->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph238->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph238->GetYaxis()->SetTickLength(0.02);
   Graph_Graph238->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph238->GetYaxis()->SetTitleFont(42);
   Graph_Graph238->GetZaxis()->SetLabelFont(42);
   Graph_Graph238->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph238->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph238->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph238->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph238->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph238);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx39[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy39[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   graph = new TGraph(28,Graph0_fx39,Graph0_fy39);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph039 = new TH1F("Graph_Graph039","",100,1.42,10.78);
   Graph_Graph039->SetMinimum(0.2);
   Graph_Graph039->SetMaximum(100000);
   Graph_Graph039->SetDirectory(nullptr);
   Graph_Graph039->SetStats(0);
   Graph_Graph039->SetLineWidth(2);
   Graph_Graph039->SetMarkerStyle(20);
   Graph_Graph039->SetMarkerSize(0.9);
   Graph_Graph039->GetXaxis()->SetTitle("m(#Chi) [TeV]");
   Graph_Graph039->GetXaxis()->SetRange(0,92);
   Graph_Graph039->GetXaxis()->SetLabelFont(42);
   Graph_Graph039->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph039->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph039->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph039->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph039->GetXaxis()->SetTitleFont(42);
   Graph_Graph039->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph039->GetYaxis()->SetLabelFont(42);
   Graph_Graph039->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph039->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph039->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph039->GetYaxis()->SetTickLength(0.02);
   Graph_Graph039->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph039->GetYaxis()->SetTitleFont(42);
   Graph_Graph039->GetZaxis()->SetLabelFont(42);
   Graph_Graph039->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph039->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph039->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph039->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph039->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph039);
   
   graph->Draw("l");
   
   Double_t Graph_fx40[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy40[28] = { 0.000133411, 0.0004324061, 0.001154748, 0.002650646, 0.005394653, 0.00996277, 0.01699257, 0.02713535, 0.04100851, 0.05915518, 0.08201421, 0.109902, 0.1430052, 0.1813825, 0.2249738, 0.2736131, 0.3270452,
   0.3849428, 0.4469231, 0.5125646, 0.7269439, 0.8798622, 1.115746, 1.27307, 1.503254, 1.650223, 1.857733, 1.986208 };
   graph = new TGraph(28,Graph_fx40,Graph_fy40);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph40 = new TH1F("Graph_Graph40","",100,1.42,10.78);
   Graph_Graph40->SetMinimum(0.0001200699);
   Graph_Graph40->SetMaximum(2.184816);
   Graph_Graph40->SetDirectory(nullptr);
   Graph_Graph40->SetStats(0);
   Graph_Graph40->SetLineWidth(2);
   Graph_Graph40->SetMarkerStyle(20);
   Graph_Graph40->SetMarkerSize(0.9);
   Graph_Graph40->GetXaxis()->SetLabelFont(42);
   Graph_Graph40->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph40->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph40->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph40->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph40->GetXaxis()->SetTitleFont(42);
   Graph_Graph40->GetYaxis()->SetLabelFont(42);
   Graph_Graph40->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph40->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph40->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph40->GetYaxis()->SetTickLength(0.02);
   Graph_Graph40->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph40->GetYaxis()->SetTitleFont(42);
   Graph_Graph40->GetZaxis()->SetLabelFont(42);
   Graph_Graph40->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph40->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph40->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph40->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph40->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph40);
   
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
   
   Double_t Graph_fx42[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy42[28] = { 0.0001467521, 0.0004756467, 0.001270223, 0.002915711, 0.005934118, 0.01095905, 0.01869183, 0.02984888, 0.04510936, 0.06507069, 0.09021563, 0.1208922, 0.1573057, 0.1995208, 0.2474711, 0.3009744, 0.3597498,
   0.423437, 0.4916154, 0.563821, 0.7996383, 0.9678485, 1.227321, 1.400377, 1.653579, 1.815246, 2.043506, 2.184829 };
   graph = new TGraph(28,Graph_fx42,Graph_fy42);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph42 = new TH1F("Graph_Graph42","",100,1.42,10.78);
   Graph_Graph42->SetMinimum(0.0001320769);
   Graph_Graph42->SetMaximum(2.403297);
   Graph_Graph42->SetDirectory(nullptr);
   Graph_Graph42->SetStats(0);
   Graph_Graph42->SetLineWidth(2);
   Graph_Graph42->SetMarkerStyle(20);
   Graph_Graph42->SetMarkerSize(0.9);
   Graph_Graph42->GetXaxis()->SetLabelFont(42);
   Graph_Graph42->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph42->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph42->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph42->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph42->GetXaxis()->SetTitleFont(42);
   Graph_Graph42->GetYaxis()->SetLabelFont(42);
   Graph_Graph42->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph42->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph42->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph42->GetYaxis()->SetTickLength(0.02);
   Graph_Graph42->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph42->GetYaxis()->SetTitleFont(42);
   Graph_Graph42->GetZaxis()->SetLabelFont(42);
   Graph_Graph42->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph42->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph42->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph42->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph42->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph42);
   
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
