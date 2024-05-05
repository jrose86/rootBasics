void testmacro(){

  /*TRandom3* tr = new TRandom3();
  for (int i=0; i<100; i++){
    cout << tr->Rndm()*5.0 << endl;
    }*/
  /*const int size(10);
  double arrx[10] = {1.0, 2.0, 3.0, 4.0, 5.0};
  double arry[10] = {1.0, 1.414, 1.732, 2.0, 2.236};
  //arrx = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
  //arry = {2.1, 3.5, 6.2, 4.5, 6.8, 9.0, 3.3, 5.4, 6.3, 1.5};

  TGraph* test = new TGraph(5, arrx, arry);
  test->SetLineWidth(2);
  test->SetTitle("TestGraph;test x axis title;test y axis title");
  test->GetXaxis()->SetTitleSize(0.05);
  test->SetMinimum(0.0);
  cout << test->GetYaxis()->GetTitleSize() << endl;
  test->Draw();*/

  /*
  double arrx[10] = {1,2,3,4,5,6,7,8,9,10};
  double arry[10] = {1,4,9,16,25,36,49,64,81,100};
  TGraph* graph = new TGraph(10,arrx,arry);
  TSpline3* spline = new TSpline3("spline",graph);

  graph->Draw();
  spline->SetLineColor(2);
  spline->Draw("SAME");
  spline->Eval(3);
  cout << spline->Eval(3.5) << endl;
  cout << spline->Eval(1) << endl;
    cout << graph->GetPointX(0) << endl;
  */

  /*
  TProfile2D* prof = new TProfile2D("prof","test 2D profile", 20,-10,10, 15,0,15);
  prof->Fill(2,5,10);
  prof->Fill(3,7,2);
  prof->Fill(-4,1,-3);


  prof->Draw("COLZ");
  */
  /*
  gStyle->SetOptFit(1);


  TGraphErrors* tg = new TGraphErrors();
  tg->SetMarkerStyle(20);
  tg->AddPoint(2,3);
  tg->AddPoint(1,4);
  tg->AddPoint(6,8);
  tg->SetPointError(0,2,1);
  tg->SetPointError(1,2,1);
  tg->SetPointError(2,2,1);

  TF1* ff = new TF1("ff","[0]+[1]*x",0,20);
  ff->SetParameter(0,0);
  ff->SetParameter(1,1);

  tg->Fit("ff","EX0");

  tg->Draw("AP");

  */

  TH1D* hist = new TH1D("hist","test",10,0,10);
  hist->SetBinContent(1,0.1);
  hist->SetBinContent(3,20);
  hist->SetBinContent(9,3);

  hist->Draw();
  cout << hist->GetEntries() << endl;

}
