// josie 19 nov 2023
// very short macro to check version of versii files, see which need to be corrected still

void checkVersion(TString filename){

    TFile* zippedFile = new TFile(filename.Data(),"READONLY");
    TTree* header = new TTree;
    int version;
    zippedFile->GetObject("Header",header);
    header->SetBranchAddress("VersionBr",&version);
    header->GetEvent(0);

    cout << "version " << version << endl;

}
