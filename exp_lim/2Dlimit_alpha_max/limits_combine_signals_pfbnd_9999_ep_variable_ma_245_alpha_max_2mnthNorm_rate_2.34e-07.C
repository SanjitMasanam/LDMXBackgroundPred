#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_2.34e-07()
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
   
   Double_t Graph0_fx225[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy225[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   TGraph *graph = new TGraph(28,Graph0_fx225,Graph0_fy225);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0225 = new TH1F("Graph_Graph0225","",100,1.42,10.78);
   Graph_Graph0225->SetMinimum(0.2);
   Graph_Graph0225->SetMaximum(100000);
   Graph_Graph0225->SetDirectory(nullptr);
   Graph_Graph0225->SetStats(0);
   Graph_Graph0225->SetLineWidth(2);
   Graph_Graph0225->SetMarkerStyle(20);
   Graph_Graph0225->SetMarkerSize(0.9);
   Graph_Graph0225->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0225->GetXaxis()->SetRange(0,92);
   Graph_Graph0225->GetXaxis()->SetLabelFont(42);
   Graph_Graph0225->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0225->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0225->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0225->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0225->GetXaxis()->SetTitleFont(42);
   Graph_Graph0225->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0225->GetYaxis()->SetLabelFont(42);
   Graph_Graph0225->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0225->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0225->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0225->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0225->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0225->GetYaxis()->SetTitleFont(42);
   Graph_Graph0225->GetZaxis()->SetLabelFont(42);
   Graph_Graph0225->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0225->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0225->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0225->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0225->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0225);
   
   graph->Draw("al");
   
   Double_t Graph1_fx226[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph1_fy226[58] = { 58.779, 51.64776, 45.92929, 43.98549, 45.6157, 46.96366, 45.67817, 44.11966, 42.26104, 41.07864, 41.22047, 41.3882, 41.46952, 41.86501, 42.41551, 41.4595, 41.57227,
   40.74936, 41.49311, 44.80825, 40.66233, 40.35588, 41.43917, 41.70946, 42.87254, 44.21722, 46.20752, 49.26201, 49.26201, 6.848145, 6.848145, 6.60553, 6.4888,
   6.429291, 6.468201, 6.650925, 6.707764, 6.896973, 7.89299, 7.006836, 7.026291, 7.349396, 7.544708, 7.989883, 8.102417, 8.010864, 7.787323, 7.609749, 7.587433,
   7.967377, 8.674622, 9.602356, 10.23788, 9.626007, 8.935547, 9.307861, 10.86216, 13.86166 };
   graph = new TGraph(58,Graph1_fx226,Graph1_fy226);
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
   
   TH1F *Graph_Graph1226 = new TH1F("Graph_Graph1226","Graph",100,1.42,10.78);
   Graph_Graph1226->SetMinimum(1.19432);
   Graph_Graph1226->SetMaximum(64.01397);
   Graph_Graph1226->SetDirectory(nullptr);
   Graph_Graph1226->SetStats(0);
   Graph_Graph1226->SetLineWidth(2);
   Graph_Graph1226->SetMarkerStyle(20);
   Graph_Graph1226->SetMarkerSize(0.9);
   Graph_Graph1226->GetXaxis()->SetLabelFont(42);
   Graph_Graph1226->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1226->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1226->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1226->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1226->GetXaxis()->SetTitleFont(42);
   Graph_Graph1226->GetYaxis()->SetLabelFont(42);
   Graph_Graph1226->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1226->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1226->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1226->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1226->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1226->GetYaxis()->SetTitleFont(42);
   Graph_Graph1226->GetZaxis()->SetLabelFont(42);
   Graph_Graph1226->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1226->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1226->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1226->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1226->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1226);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx227[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph2_fy227[58] = { 41.08932, 34.68272, 30.43059, 29.10126, 30.56705, 31.66236, 30.49195, 28.98051, 27.44781, 26.52774, 26.5394, 26.79385, 26.96737, 27.20667, 27.4908, 26.67214, 26.60195,
   25.87957, 26.19794, 28.60487, 25.59011, 25.23252, 25.72039, 25.66032, 26.23477, 26.91895, 27.92595, 29.65634, 29.65634, 10.4023, 10.4023, 9.924173, 9.696507,
   9.556746, 9.515142, 9.685409, 9.739733, 9.96542, 11.42623, 10.17399, 10.187, 10.6393, 10.81706, 11.34792, 11.40246, 11.27362, 11.06023, 10.7881, 10.82689,
   11.31595, 12.20772, 13.27584, 14.11645, 13.38859, 12.46262, 13.06176, 15.17487, 19.31883 };
   graph = new TGraph(58,Graph2_fx227,Graph2_fy227);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2227 = new TH1F("Graph_Graph2227","Graph",100,1.42,10.78);
   Graph_Graph2227->SetMinimum(6.357724);
   Graph_Graph2227->SetMaximum(44.24674);
   Graph_Graph2227->SetDirectory(nullptr);
   Graph_Graph2227->SetStats(0);
   Graph_Graph2227->SetLineWidth(2);
   Graph_Graph2227->SetMarkerStyle(20);
   Graph_Graph2227->SetMarkerSize(0.9);
   Graph_Graph2227->GetXaxis()->SetLabelFont(42);
   Graph_Graph2227->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2227->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2227->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2227->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2227->GetXaxis()->SetTitleFont(42);
   Graph_Graph2227->GetYaxis()->SetLabelFont(42);
   Graph_Graph2227->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2227->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2227->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2227->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2227->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2227->GetYaxis()->SetTitleFont(42);
   Graph_Graph2227->GetZaxis()->SetLabelFont(42);
   Graph_Graph2227->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2227->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2227->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2227->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2227->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2227);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx228[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy228[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   graph = new TGraph(28,Graph0_fx228,Graph0_fy228);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0228 = new TH1F("Graph_Graph0228","",100,1.42,10.78);
   Graph_Graph0228->SetMinimum(0.2);
   Graph_Graph0228->SetMaximum(100000);
   Graph_Graph0228->SetDirectory(nullptr);
   Graph_Graph0228->SetStats(0);
   Graph_Graph0228->SetLineWidth(2);
   Graph_Graph0228->SetMarkerStyle(20);
   Graph_Graph0228->SetMarkerSize(0.9);
   Graph_Graph0228->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0228->GetXaxis()->SetRange(0,92);
   Graph_Graph0228->GetXaxis()->SetLabelFont(42);
   Graph_Graph0228->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0228->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0228->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0228->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0228->GetXaxis()->SetTitleFont(42);
   Graph_Graph0228->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0228->GetYaxis()->SetLabelFont(42);
   Graph_Graph0228->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0228->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0228->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0228->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0228->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0228->GetYaxis()->SetTitleFont(42);
   Graph_Graph0228->GetZaxis()->SetLabelFont(42);
   Graph_Graph0228->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0228->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0228->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0228->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0228->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0228);
   
   graph->Draw("l");
   
   Double_t Graph_fx229[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy229[28] = { 4.280831e-126, 3.887371e-115, 7.211899e-106, 6.296091e-98, 4.76887e-91, 4.958236e-85, 1.004958e-79, 5.216141e-75, 8.599018e-71, 5.348722e-67, 1.443111e-63, 1.892907e-60, 1.326326e-57, 5.369711e-55, 1.341719e-52, 2.187783e-50, 2.441236e-48,
   1.941598e-46, 1.139969e-44, 5.093514e-43, 1.131786e-38, 3.427502e-36, 5.803769e-33, 4.417055e-31, 1.369304e-28, 4.085948e-27, 3.899099e-25, 5.991012e-24 };
   graph = new TGraph(28,Graph_fx229,Graph_fy229);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph229 = new TH1F("Graph_Graph229","",100,1.42,10.78);
   Graph_Graph229->SetMinimum(3.852748e-126);
   Graph_Graph229->SetMaximum(6.590113e-24);
   Graph_Graph229->SetDirectory(nullptr);
   Graph_Graph229->SetStats(0);
   Graph_Graph229->SetLineWidth(2);
   Graph_Graph229->SetMarkerStyle(20);
   Graph_Graph229->SetMarkerSize(0.9);
   Graph_Graph229->GetXaxis()->SetLabelFont(42);
   Graph_Graph229->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph229->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph229->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph229->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph229->GetXaxis()->SetTitleFont(42);
   Graph_Graph229->GetYaxis()->SetLabelFont(42);
   Graph_Graph229->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph229->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph229->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph229->GetYaxis()->SetTickLength(0.02);
   Graph_Graph229->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph229->GetYaxis()->SetTitleFont(42);
   Graph_Graph229->GetZaxis()->SetLabelFont(42);
   Graph_Graph229->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph229->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph229->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph229->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph229->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph229);
   
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
   
   Double_t Graph_fx231[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy231[28] = { 4.708914e-126, 4.276108e-115, 7.933089e-106, 6.9257e-98, 5.245757e-91, 5.454059e-85, 1.105454e-79, 5.737755e-75, 9.45892e-71, 5.883595e-67, 1.587422e-63, 2.082197e-60, 1.458958e-57, 5.906682e-55, 1.475891e-52, 2.406561e-50, 2.68536e-48,
   2.135758e-46, 1.253966e-44, 5.602866e-43, 1.244965e-38, 3.770252e-36, 6.384146e-33, 4.858761e-31, 1.506235e-28, 4.494543e-27, 4.289009e-25, 6.590113e-24 };
   graph = new TGraph(28,Graph_fx231,Graph_fy231);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph231 = new TH1F("Graph_Graph231","",100,1.42,10.78);
   Graph_Graph231->SetMinimum(4.238022e-126);
   Graph_Graph231->SetMaximum(7.249125e-24);
   Graph_Graph231->SetDirectory(nullptr);
   Graph_Graph231->SetStats(0);
   Graph_Graph231->SetLineWidth(2);
   Graph_Graph231->SetMarkerStyle(20);
   Graph_Graph231->SetMarkerSize(0.9);
   Graph_Graph231->GetXaxis()->SetLabelFont(42);
   Graph_Graph231->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetXaxis()->SetTitleFont(42);
   Graph_Graph231->GetYaxis()->SetLabelFont(42);
   Graph_Graph231->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetYaxis()->SetTickLength(0.02);
   Graph_Graph231->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetYaxis()->SetTitleFont(42);
   Graph_Graph231->GetZaxis()->SetLabelFont(42);
   Graph_Graph231->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph231);
   
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
