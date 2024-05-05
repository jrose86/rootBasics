// josie 28 sept 2023

// simply mess with color and aspect ratio of heatmap for the paper

void paperHeatmap(){
  // read in heatmap from analysis file
  TCanvas* c1 = new TCanvas("","",1600,400);
  TFile* rootfile = new TFile("Analysis.root","READONLY");
  TProfile2D* heatmap = new TProfile2D();
  rootfile->GetObject("HeatMap",heatmap);

  TGraph* opd = new TGraph();
  rootfile->GetObject("OPDGraph",opd);
  opd->SetLineWidth(2);
  for(int i=0; i<opd->GetN(); i++){
    opd->SetPoint(i, opd->GetPointX(i+100), opd->GetPointY(i));
  }

  heatmap->RebinY(2);
  heatmap->SetTitle("");
  heatmap->GetXaxis()->SetLabelSize(0.06);
  heatmap->GetXaxis()->SetTitleSize(0.06);
  heatmap->GetYaxis()->SetLabelSize(0.06);
  heatmap->GetYaxis()->SetTitleSize(0.06);
  heatmap->GetXaxis()->SetTitleOffset(0.85);
  heatmap->GetYaxis()->SetTitleOffset(0.5);
  heatmap->GetZaxis()->SetLabelSize(0.06);

  heatmap->SetMaximum(1.2e-6);
  heatmap->SetMinimum(-2.2e-6);

  gStyle->SetPalette(75);
  heatmap->Draw("COLZ");
  //opd->Draw("SAME");

}
