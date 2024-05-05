// josie 20 apr 2024
// simple test of how to save code as a tstring from correlation

void testSavestring(){

  ifstream code;
  code.open("MultiThreadManyFiles_FreqDomain.cpp");

  TString codesave; // = new TStringObj;
  string bigstring;
  string line;

  while(getline(code, line)){
    bigstring += line;
  }

  code.close();

  codesave = bigstring;

  cout << codesave << endl;

  TFile* rootfile = new TFile("testCodeString.root","RECREATE");

  TTree* tree = new TTree;
  tree->Branch("code","TString",&codesave);
  tree->Fill();
  tree->Write("tree");


  //MainHeader->Branch("VersionBr",&Version,"Version/I");

  rootfile->Write(codesave);
}
