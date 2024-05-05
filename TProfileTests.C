// want to understand why errorbars are not really changing when the runs are cut in half -- maybe could be an effect of the TProfile bin averaging
// going to check:
// - for random (gaussian) noise-- w TProfile2D projected to TProfile, do error bars decrease in size?
// - if they DO -- but we don't see this in the actual data -- do we not see it bc the  noise is correlated?

void TProfileTests(){

  TRandom3* tr = new TRandom3;

  TProfile2D* full2Dprof = new TProfile2D("full2Dprof","profile",513,-256,256,56702,0.0,56702, "");  // ("","",xbins,xmin,xmax,ybins,ymin,ymax);
  //TProfile* fullprof;

  TProfile2D* half2Dprof = new TProfile2D("half2Dprof","profile",513,-256,256,28351,0.0,28351,"");
  //TProfile* halfprof;

  TProfile2D* qt2Dprof = new TProfile2D("qt2Dprof","profile",513,-256,256,14176,0.0,14176, "");
  //TProfile* qtprof;

  full2Dprof->Fill(1,15, 20);
  full2Dprof->Draw("LEGO");

}
