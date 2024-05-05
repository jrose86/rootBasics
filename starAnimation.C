// josie 28 june 2023
// this is an attempt to make an animation of where a star is in the sky over one night of observing
// for now - this is a copy of the root tutorial to make an animation, for me to learn how it works

void starAnimation(){
  /* TCanvas* c1 = new TCanvas("c1","",400,400);
  TEllipse* circle = new TEllipse(0.5, 0.5, 0.1, 0.1);
  TEllipse* circle2 = new TEllipse(0.2,0.2,0.1,0.1);
  circle2->SetFillColor(2);

  circle2->Draw();

  for(int i=0; i<20; i++){
    circle->SetX1(0.5+i*0.01);
    circle->Draw("SAME");
    c1->Update();
    sleep(1);
    }*/

  TCanvas* c1 = new TCanvas("","",800,600);
    TGraph2D* stargraph = new TGraph2D();   stargraph->SetMarkerStyle(20);  stargraph->SetMarkerColor(2);
    stargraph->AddPoint(2,2,2);

    // draw the telescopes and E/W, N/S coordinates
    double telEW[5] = {0, 135.49, 45.145, 28.86, -36.112};
    double telNS[5] = {0, -8.72, -49.115, 60.73, 12.696};
    double telUD[5] = {0, 7.23, -0.94, 4.51, 1.63};
    TGraph2D* telescopes = new TGraph2D(5,telEW,telNS,telUD);   telescopes->SetMarkerStyle(20);     telescopes->SetMarkerColor(2);
    telescopes->Draw("P");
    telescopes->AddPoint(1,1,1);
    telescopes->AddPoint(5,5,5);
    telescopes->Draw("P");

    stargraph->Draw("SAME");
      for(int i=1; i<10; i++){
      stargraph->SetPoint(i,i+0.1,i+0.1,i+0.1);
      stargraph->SetMarkerColor(2); stargraph->SetMarkerStyle(20);
      stargraph->Draw("SAME");
      //c1->Paint();
      //c1->Modified();
      c1->Update();
      //stargraph->Draw("P");
      //gPad->Modified();
      //gPad->Update();
      sleep(1);
      }
    stargraph->Draw("SAME");

    //cout << stargraph->GetXmax() << endl;;
    //cout << stargraph->GetPoint(2) << endl;;
    //cout << stargraph->GetPointX(3) << endl;


}
