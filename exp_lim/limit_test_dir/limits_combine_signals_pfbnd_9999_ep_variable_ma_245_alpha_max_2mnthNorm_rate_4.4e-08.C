#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_4.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Oct  1 19:51:19 2025) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx92[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy92[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   TGraph *graph = new TGraph(28,Graph0_fx92,Graph0_fy92);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph092 = new TH1F("Graph_Graph092","",100,1.42,10.78);
   Graph_Graph092->SetMinimum(0.2);
   Graph_Graph092->SetMaximum(100000);
   Graph_Graph092->SetDirectory(nullptr);
   Graph_Graph092->SetStats(0);
   Graph_Graph092->SetLineWidth(2);
   Graph_Graph092->SetMarkerStyle(20);
   Graph_Graph092->SetMarkerSize(0.9);
   Graph_Graph092->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph092->GetXaxis()->SetRange(0,92);
   Graph_Graph092->GetXaxis()->SetLabelFont(42);
   Graph_Graph092->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph092->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph092->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph092->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph092->GetXaxis()->SetTitleFont(42);
   Graph_Graph092->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph092->GetYaxis()->SetLabelFont(42);
   Graph_Graph092->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph092->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph092->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph092->GetYaxis()->SetTickLength(0.02);
   Graph_Graph092->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph092->GetYaxis()->SetTitleFont(42);
   Graph_Graph092->GetZaxis()->SetLabelFont(42);
   Graph_Graph092->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph092->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph092->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph092->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph092->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph092);
   
   graph->Draw("al");
   
   Double_t Graph1_fx93[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph1_fy93[58] = { 58.779, 51.64776, 45.92929, 43.98549, 45.6157, 46.96366, 45.67817, 44.11966, 42.26104, 41.07864, 41.22047, 41.3882, 41.46952, 41.86501, 42.41551, 41.4595, 41.57227,
   40.74936, 41.49311, 44.80825, 40.66233, 40.35588, 41.43917, 41.70946, 42.87254, 44.21722, 46.20752, 49.26201, 49.26201, 6.848145, 6.848145, 6.60553, 6.4888,
   6.429291, 6.468201, 6.650925, 6.707764, 6.896973, 7.89299, 7.006836, 7.026291, 7.349396, 7.544708, 7.989883, 8.102417, 8.010864, 7.787323, 7.609749, 7.587433,
   7.967377, 8.674622, 9.602356, 10.23788, 9.626007, 8.935547, 9.307861, 10.86216, 13.86166 };
   graph = new TGraph(58,Graph1_fx93,Graph1_fy93);
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
   
   TH1F *Graph_Graph193 = new TH1F("Graph_Graph193","Graph",100,1.42,10.78);
   Graph_Graph193->SetMinimum(1.19432);
   Graph_Graph193->SetMaximum(64.01397);
   Graph_Graph193->SetDirectory(nullptr);
   Graph_Graph193->SetStats(0);
   Graph_Graph193->SetLineWidth(2);
   Graph_Graph193->SetMarkerStyle(20);
   Graph_Graph193->SetMarkerSize(0.9);
   Graph_Graph193->GetXaxis()->SetLabelFont(42);
   Graph_Graph193->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph193->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph193->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph193->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph193->GetXaxis()->SetTitleFont(42);
   Graph_Graph193->GetYaxis()->SetLabelFont(42);
   Graph_Graph193->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph193->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph193->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph193->GetYaxis()->SetTickLength(0.02);
   Graph_Graph193->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph193->GetYaxis()->SetTitleFont(42);
   Graph_Graph193->GetZaxis()->SetLabelFont(42);
   Graph_Graph193->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph193->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph193->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph193->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph193->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph193);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx94[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph2_fy94[58] = { 41.08932, 34.68272, 30.43059, 29.10126, 30.56705, 31.66236, 30.49195, 28.98051, 27.44781, 26.52774, 26.5394, 26.79385, 26.96737, 27.20667, 27.4908, 26.67214, 26.60195,
   25.87957, 26.19794, 28.60487, 25.59011, 25.23252, 25.72039, 25.66032, 26.23477, 26.91895, 27.92595, 29.65634, 29.65634, 10.4023, 10.4023, 9.924173, 9.696507,
   9.556746, 9.515142, 9.685409, 9.739733, 9.96542, 11.42623, 10.17399, 10.187, 10.6393, 10.81706, 11.34792, 11.40246, 11.27362, 11.06023, 10.7881, 10.82689,
   11.31595, 12.20772, 13.27584, 14.11645, 13.38859, 12.46262, 13.06176, 15.17487, 19.31883 };
   graph = new TGraph(58,Graph2_fx94,Graph2_fy94);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph294 = new TH1F("Graph_Graph294","Graph",100,1.42,10.78);
   Graph_Graph294->SetMinimum(6.357724);
   Graph_Graph294->SetMaximum(44.24674);
   Graph_Graph294->SetDirectory(nullptr);
   Graph_Graph294->SetStats(0);
   Graph_Graph294->SetLineWidth(2);
   Graph_Graph294->SetMarkerStyle(20);
   Graph_Graph294->SetMarkerSize(0.9);
   Graph_Graph294->GetXaxis()->SetLabelFont(42);
   Graph_Graph294->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph294->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph294->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph294->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph294->GetXaxis()->SetTitleFont(42);
   Graph_Graph294->GetYaxis()->SetLabelFont(42);
   Graph_Graph294->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph294->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph294->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph294->GetYaxis()->SetTickLength(0.02);
   Graph_Graph294->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph294->GetYaxis()->SetTitleFont(42);
   Graph_Graph294->GetZaxis()->SetLabelFont(42);
   Graph_Graph294->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph294->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph294->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph294->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph294->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph294);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx95[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy95[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   graph = new TGraph(28,Graph0_fx95,Graph0_fy95);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph095 = new TH1F("Graph_Graph095","",100,1.42,10.78);
   Graph_Graph095->SetMinimum(0.2);
   Graph_Graph095->SetMaximum(100000);
   Graph_Graph095->SetDirectory(nullptr);
   Graph_Graph095->SetStats(0);
   Graph_Graph095->SetLineWidth(2);
   Graph_Graph095->SetMarkerStyle(20);
   Graph_Graph095->SetMarkerSize(0.9);
   Graph_Graph095->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph095->GetXaxis()->SetRange(0,92);
   Graph_Graph095->GetXaxis()->SetLabelFont(42);
   Graph_Graph095->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph095->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph095->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph095->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph095->GetXaxis()->SetTitleFont(42);
   Graph_Graph095->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph095->GetYaxis()->SetLabelFont(42);
   Graph_Graph095->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph095->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph095->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph095->GetYaxis()->SetTickLength(0.02);
   Graph_Graph095->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph095->GetYaxis()->SetTitleFont(42);
   Graph_Graph095->GetZaxis()->SetLabelFont(42);
   Graph_Graph095->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph095->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph095->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph095->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph095->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph095);
   
   graph->Draw("l");
   
   Double_t Graph_fx96[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy96[28] = { 0.1533204, 0.3328925, 0.6358264, 1.098775, 1.753594, 2.62456, 3.727019, 5.067239, 6.643135, 8.445514, 10.45955, 12.66628, 15.04399, 17.56941, 20.21873, 22.96834, 25.79549,
   28.67862, 31.59774, 34.53452, 43.29413, 48.96517, 57.03604, 62.05798, 68.9868, 73.18697, 78.85754, 82.22842 };
   graph = new TGraph(28,Graph_fx96,Graph_fy96);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph96 = new TH1F("Graph_Graph96","",100,1.42,10.78);
   Graph_Graph96->SetMinimum(0.1379884);
   Graph_Graph96->SetMaximum(90.43593);
   Graph_Graph96->SetDirectory(nullptr);
   Graph_Graph96->SetStats(0);
   Graph_Graph96->SetLineWidth(2);
   Graph_Graph96->SetMarkerStyle(20);
   Graph_Graph96->SetMarkerSize(0.9);
   Graph_Graph96->GetXaxis()->SetLabelFont(42);
   Graph_Graph96->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph96->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph96->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph96->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph96->GetXaxis()->SetTitleFont(42);
   Graph_Graph96->GetYaxis()->SetLabelFont(42);
   Graph_Graph96->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph96->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph96->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph96->GetYaxis()->SetTickLength(0.02);
   Graph_Graph96->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph96->GetYaxis()->SetTitleFont(42);
   Graph_Graph96->GetZaxis()->SetLabelFont(42);
   Graph_Graph96->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph96->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph96->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph96->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph96->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph96);
   
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
   
   Double_t Graph_fx98[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy98[28] = { 0.1686525, 0.3661818, 0.699409, 1.208653, 1.928953, 2.887016, 4.099721, 5.573963, 7.307449, 9.290066, 11.50551, 13.93291, 16.54839, 19.32635, 22.2406, 25.26518, 28.37504,
   31.54649, 34.75752, 37.98797, 47.62355, 53.86169, 62.73964, 68.26378, 75.88548, 80.50566, 86.74329, 90.45127 };
   graph = new TGraph(28,Graph_fx98,Graph_fy98);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph98 = new TH1F("Graph_Graph98","",100,1.42,10.78);
   Graph_Graph98->SetMinimum(0.1517872);
   Graph_Graph98->SetMaximum(99.47953);
   Graph_Graph98->SetDirectory(nullptr);
   Graph_Graph98->SetStats(0);
   Graph_Graph98->SetLineWidth(2);
   Graph_Graph98->SetMarkerStyle(20);
   Graph_Graph98->SetMarkerSize(0.9);
   Graph_Graph98->GetXaxis()->SetLabelFont(42);
   Graph_Graph98->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph98->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph98->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph98->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph98->GetXaxis()->SetTitleFont(42);
   Graph_Graph98->GetYaxis()->SetLabelFont(42);
   Graph_Graph98->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph98->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph98->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph98->GetYaxis()->SetTickLength(0.02);
   Graph_Graph98->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph98->GetYaxis()->SetTitleFont(42);
   Graph_Graph98->GetZaxis()->SetLabelFont(42);
   Graph_Graph98->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph98->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph98->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph98->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph98->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph98);
   
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
   line = new TLine(4.777317,0,4.777317,17.26289);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(4.772317,0,"  4.78 TeV");

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
