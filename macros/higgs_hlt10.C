#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>

float efficiency(TFile * theFile){
  TH1F * numerator = (TH1F*) (theFile->Get("higgsP_1"));
  TH1F * denominator = (TH1F*) (theFile->Get("higgsP_0"));
  return numerator->Integral()/denominator->Integral();
}

float error(TFile * theFile){
  TH1F * denominator = (TH1F*) (theFile->Get("higgsEta_0"));
  float eff = efficiency(theFile);
  return sqrt(eff*(1-eff)/denominator->Integral()); 
}

void higgs_hlt10(){

  //ggh_m80_8TeV_Fan
  //ggh_m85_8TeV_Fan


  float x[16], ex[16];
  float x2[18], ex2[18];

   TFile *_fileggh0 = TFile::Open("ggh_m80_8TeV_Fan/output.root");
   TFile *_fileggh1 = TFile::Open("ggh_m85_8TeV_Fan/output.root");
   TFile *_fileggh2 = TFile::Open("ggh_m90_8TeV/output.root");
   TFile *_fileggh3 = TFile::Open("ggh_m95_8TeV/output.root");
   TFile *_fileggh4 = TFile::Open("ggh_m100_8TeV/output.root");
   TFile *_fileggh5 = TFile::Open("ggh_m110_8TeV/output.root");
   TFile *_fileggh6 = TFile::Open("ggh_m120_8TeV/output.root");
   TFile *_fileggh7 = TFile::Open("ggh_m124_8TeV/output.root");
   TFile *_fileggh8 = TFile::Open("ggh_m126_8TeV/output.root");
   TFile *_fileggh9 = TFile::Open("ggh_m135_8TeV/output.root");
  TFile *_fileggh10 = TFile::Open("ggh_m145_8TeV/output.root");
  TFile *_fileggh11 = TFile::Open("ggh_m105_8TeV/output.root");
  TFile *_fileggh12 = TFile::Open("ggh_m115_8TeV/output.root");
  TFile *_fileggh13 = TFile::Open("ggh_m123_8TeV/output.root");
  TFile *_fileggh14 = TFile::Open("ggh_m125_8TeV/output.root");
  TFile *_fileggh15 = TFile::Open("ggh_m130_8TeV/output.root");
  TFile *_fileggh16 = TFile::Open("ggh_m140_8TeV/output.root");
  TFile *_fileggh17 = TFile::Open("ggh_m150_8TeV/output.root");


   TFile *_filetth0 = TFile::Open("tth_m90_8TeV/output.root");
   TFile *_filetth1 = TFile::Open("tth_m95_8TeV/output.root");
   TFile *_filetth2 = TFile::Open("tth_m100_8TeV/output.root");
   TFile *_filetth3 = TFile::Open("tth_m110_8TeV/output.root");
   TFile *_filetth4 = TFile::Open("tth_m120_8TeV/output.root");
   TFile *_filetth5 = TFile::Open("tth_m124_8TeV/output.root");
   TFile *_filetth6 = TFile::Open("tth_m126_8TeV/output.root");
   TFile *_filetth7 = TFile::Open("tth_m135_8TeV/output.root");
   TFile *_filetth8 = TFile::Open("tth_m145_8TeV/output.root");
   TFile *_filetth9 = TFile::Open("tth_m105_8TeV/output.root");
  TFile *_filetth10 = TFile::Open("tth_m115_8TeV/output.root");
  TFile *_filetth11 = TFile::Open("tth_m123_8TeV/output.root");
  TFile *_filetth12 = TFile::Open("tth_m125_8TeV/output.root");
  TFile *_filetth13 = TFile::Open("tth_m130_8TeV/output.root");
  TFile *_filetth14 = TFile::Open("tth_m140_8TeV/output.root");
  TFile *_filetth15 = TFile::Open("tth_m150_8TeV/output.root");

   TFile *_filevbf0 = TFile::Open("vbf_m80_8TeV_Fan/output.root");
   TFile *_filevbf1 = TFile::Open("vbf_m85_8TeV_Fan/output.root");
   TFile *_filevbf2 = TFile::Open("vbf_m90_8TeV/output.root"); 
   TFile *_filevbf3 = TFile::Open("vbf_m95_8TeV/output.root"); 
   TFile *_filevbf4 = TFile::Open("vbf_m100_8TeV/output.root");
   TFile *_filevbf5 = TFile::Open("vbf_m110_8TeV/output.root");
   TFile *_filevbf6 = TFile::Open("vbf_m120_8TeV/output.root");
   TFile *_filevbf7 = TFile::Open("vbf_m124_8TeV/output.root");
   TFile *_filevbf8 = TFile::Open("vbf_m126_8TeV/output.root");
   TFile *_filevbf9 = TFile::Open("vbf_m135_8TeV/output.root");
  TFile *_filevbf10 = TFile::Open("vbf_m145_8TeV/output.root");
  TFile *_filevbf11 = TFile::Open("vbf_m105_8TeV/output.root");
  TFile *_filevbf12 = TFile::Open("vbf_m115_8TeV/output.root");
  TFile *_filevbf13 = TFile::Open("vbf_m123_8TeV/output.root");
  TFile *_filevbf14 = TFile::Open("vbf_m125_8TeV/output.root");
  TFile *_filevbf15 = TFile::Open("vbf_m130_8TeV/output.root");
  TFile *_filevbf16 = TFile::Open("vbf_m140_8TeV/output.root");
  TFile *_filevbf17 = TFile::Open("vbf_m150_8TeV/output.root");

  
  TFile *_filewzh0 = TFile::Open("wzh_m90_8TeV/output.root");
   TFile *_filewzh1 = TFile::Open("wzh_m95_8TeV/output.root");
   TFile *_filewzh2 = TFile::Open("wzh_m100_8TeV/output.root");
   TFile *_filewzh3 = TFile::Open("wzh_m110_8TeV/output.root");
   TFile *_filewzh4 = TFile::Open("wzh_m120_8TeV/output.root");
   TFile *_filewzh5 = TFile::Open("wzh_m124_8TeV/output.root");
   TFile *_filewzh6 = TFile::Open("wzh_m126_8TeV/output.root");
   TFile *_filewzh7 = TFile::Open("wzh_m135_8TeV/output.root");
   TFile *_filewzh8 = TFile::Open("wzh_m145_8TeV/output.root");
   TFile *_filewzh9 = TFile::Open("wzh_m105_8TeV/output.root");
  TFile *_filewzh10 = TFile::Open("wzh_m115_8TeV/output.root");
  TFile *_filewzh11 = TFile::Open("wzh_m123_8TeV/output.root");
  TFile *_filewzh12 = TFile::Open("wzh_m125_8TeV/output.root");
  TFile *_filewzh13 = TFile::Open("wzh_m130_8TeV/output.root");
  TFile *_filewzh14 = TFile::Open("wzh_m140_8TeV/output.root");
  TFile *_filewzh15 = TFile::Open("wzh_m150_8TeV/output.root");
  
  float avEFFggh[18],avEFFtth[16],avEFFwzh[16],avEFFvbf[18];
  float avERRggh[18],avERRtth[16],avERRwzh[16],avERRvbf[18];
 
  x[0] = 90.0;
  x[1] = 95.0;
  x[2] = 100.0;
  x[3] = 110.0;
  x[4] = 120.0;
  x[5] = 124.0;
  x[6] = 126.0;
  x[7] = 135.0;
  x[8] = 145.0;
  x[9] = 105.0;
  x[10] = 115.0;
  x[11] = 123.0;
  x[12] = 125.0;
  x[13] = 130.0;
  x[14] = 140.0;
  x[15] = 150.0;

  x2[0]  = 80.0;
  x2[1]  = 85.0;
  x2[2]  = 90.0; 
  x2[3]  = 95.0; 
  x2[4]  = 100.0;
  x2[5]  = 110.0;
  x2[6]  = 120.0;
  x2[7]  = 124.0;
  x2[8]  = 126.0;
  x2[9]  = 135.0;
  x2[10] = 145.0;
  x2[11] = 105.0;
  x2[12] = 115.0;
  x2[13] = 123.0;
  x2[14] = 125.0;
  x2[15] = 130.0;
  x2[16] = 140.0;
  x2[17] = 150.0;

  for(int k=0;k<16;k++) ex[k] = 0;
  for(k=0;k<18;k++) ex2[k] = 0;
  
  avEFFggh[0] = efficiency(_fileggh0);
  avEFFggh[1] = efficiency(_fileggh1);
  avEFFggh[2] = efficiency(_fileggh2);
  avEFFggh[3] = efficiency(_fileggh3);
  avEFFggh[4] = efficiency(_fileggh4);
  avEFFggh[5] = efficiency(_fileggh5);
  avEFFggh[6] = efficiency(_fileggh6);
  avEFFggh[7] = efficiency(_fileggh7);
  avEFFggh[8] = efficiency(_fileggh8);
  avEFFggh[9] = efficiency(_fileggh9);
  avEFFggh[10] = efficiency(_fileggh10);
  avEFFggh[11] = efficiency(_fileggh11);
  avEFFggh[12] = efficiency(_fileggh12);
  avEFFggh[13] = efficiency(_fileggh13);
  avEFFggh[14] = efficiency(_fileggh14);
  avEFFggh[15] = efficiency(_fileggh15);
  avEFFggh[16] = efficiency(_fileggh16);
  avEFFggh[17] = efficiency(_fileggh17);

  avEFFtth[0] = efficiency(_filetth0);
  avEFFtth[1] = efficiency(_filetth1);
  avEFFtth[2] = efficiency(_filetth2);
  avEFFtth[3] = efficiency(_filetth3);
  avEFFtth[4] = efficiency(_filetth4);
  avEFFtth[5] = efficiency(_filetth5);
  avEFFtth[6] = efficiency(_filetth6);
  avEFFtth[7] = efficiency(_filetth7);
  avEFFtth[8] = efficiency(_filetth8);
  avEFFtth[9] = efficiency(_filetth9);
  avEFFtth[10] = efficiency(_filetth10);
  avEFFtth[11] = efficiency(_filetth11);
  avEFFtth[12] = efficiency(_filetth12);
  avEFFtth[13] = efficiency(_filetth13);
  avEFFtth[14] = efficiency(_filetth14);
  avEFFtth[15] = efficiency(_filetth15);

  avEFFvbf[0] = efficiency(_filevbf0);
  avEFFvbf[1] = efficiency(_filevbf1);
  avEFFvbf[2] = efficiency(_filevbf2);
  avEFFvbf[3] = efficiency(_filevbf3);
  avEFFvbf[4] = efficiency(_filevbf4);
  avEFFvbf[5] = efficiency(_filevbf5);
  avEFFvbf[6] = efficiency(_filevbf6);
  avEFFvbf[7] = efficiency(_filevbf7);
  avEFFvbf[8] = efficiency(_filevbf8);
  avEFFvbf[9] = efficiency(_filevbf9);
  avEFFvbf[10]= efficiency(_filevbf10);
  avEFFvbf[11]= efficiency(_filevbf11);
  avEFFvbf[12]= efficiency(_filevbf12);
  avEFFvbf[13]= efficiency(_filevbf13);
  avEFFvbf[14]= efficiency(_filevbf14);
  avEFFvbf[15]= efficiency(_filevbf15);
  avEFFvbf[16]= efficiency(_filevbf16);
  avEFFvbf[17]= efficiency(_filevbf17);


  avEFFwzh[0] = efficiency(_filewzh0);
  avEFFwzh[1] = efficiency(_filewzh1);
  avEFFwzh[2] = efficiency(_filewzh2);
  avEFFwzh[3] = efficiency(_filewzh3);
  avEFFwzh[4] = efficiency(_filewzh4);
  avEFFwzh[5] = efficiency(_filewzh5);
  avEFFwzh[6] = efficiency(_filewzh6);
  avEFFwzh[7] = efficiency(_filewzh7);
  avEFFwzh[8] = efficiency(_filewzh8);
  avEFFwzh[9] = efficiency(_filewzh9);
  avEFFwzh[10] = efficiency(_filewzh10);
  avEFFwzh[11] = efficiency(_filewzh11);
  avEFFwzh[12] = efficiency(_filewzh12);
  avEFFwzh[13] = efficiency(_filewzh13);
  avEFFwzh[14] = efficiency(_filewzh14);
  avEFFwzh[15] = efficiency(_filewzh15);

  avERRggh[0] = error(_fileggh0);
  avERRggh[1] = error(_fileggh1);
  avERRggh[2] = error(_fileggh2);
  avERRggh[3] = error(_fileggh3);
  avERRggh[4] = error(_fileggh4);
  avERRggh[5] = error(_fileggh5);
  avERRggh[6] = error(_fileggh6);
  avERRggh[7] = error(_fileggh7);
  avERRggh[8] = error(_fileggh8);
  avERRggh[9] = error(_fileggh9);
  avERRggh[10] = error(_fileggh10);
  avERRggh[11] = error(_fileggh11);
  avERRggh[12] = error(_fileggh12);
  avERRggh[13] = error(_fileggh13);
  avERRggh[14] = error(_fileggh14);
  avERRggh[15] = error(_fileggh15);
  avERRggh[16] = error(_fileggh16);
  avERRggh[17] = error(_fileggh17);

  avERRtth[0] = error(_filetth0);
  avERRtth[1] = error(_filetth1);
  avERRtth[2] = error(_filetth2);
  avERRtth[3] = error(_filetth3);
  avERRtth[4] = error(_filetth4);
  avERRtth[5] = error(_filetth5);
  avERRtth[6] = error(_filetth6);
  avERRtth[7] = error(_filetth7);
  avERRtth[8] = error(_filetth8);
  avERRtth[9] = error(_filetth9);
  avERRtth[10] = error(_filetth10);
  avERRtth[11] = error(_filetth11);
  avERRtth[12] = error(_filetth12);
  avERRtth[13] = error(_filetth13);
  avERRtth[14] = error(_filetth14);
  avERRtth[15] = error(_filetth15);

  avERRvbf[0] = error(_filevbf0);
  avERRvbf[1] = error(_filevbf1);
  avERRvbf[2] = error(_filevbf2);
  avERRvbf[3] = error(_filevbf3);
  avERRvbf[4] = error(_filevbf4);
  avERRvbf[5] = error(_filevbf5);
  avERRvbf[6] = error(_filevbf6);
  avERRvbf[7] = error(_filevbf7);
  avERRvbf[8] = error(_filevbf8);
  avERRvbf[9] = error(_filevbf9);
  avERRvbf[10] = error(_filevbf10);
  avERRvbf[11] = error(_filevbf11);
  avERRvbf[12] = error(_filevbf12);
  avERRvbf[13] = error(_filevbf13);
  avERRvbf[14] = error(_filevbf14);
  avERRvbf[15] = error(_filevbf15);


  avERRwzh[0] = error(_filewzh0);
  avERRwzh[1] = error(_filewzh1);
  avERRwzh[2] = error(_filewzh2);
  avERRwzh[3] = error(_filewzh3);
  avERRwzh[4] = error(_filewzh4);
  avERRwzh[5] = error(_filewzh5);
  avERRwzh[6] = error(_filewzh6);
  avERRwzh[7] = error(_filewzh7);
  avERRwzh[8] = error(_filewzh8);
  avERRwzh[9] = error(_filewzh9);
  avERRwzh[10] = error(_filewzh10);
  avERRwzh[11] = error(_filewzh11);
  avERRwzh[12] = error(_filewzh12);
  avERRwzh[13] = error(_filewzh13);
  avERRwzh[14] = error(_filewzh14);
  avERRwzh[15] = error(_filewzh15);

  cout << x[0] <<" : " << avEFFggh[0] << "------" << avERRggh[0] << endl;
  cout << x[1] <<" : " << avEFFggh[1] << "------" << avERRggh[1] << endl;
  cout << x[2] <<" : " << avEFFggh[2] << "------" << avERRggh[2] << endl;
  cout << x[3] <<" : " << avEFFggh[3] << "------" << avERRggh[3] << endl;
    
  TGraphErrors * ggh = new TGraphErrors(18,x2,avEFFggh,ex2,avERRggh);
  TGraphErrors * vbf = new TGraphErrors(18,x2,avEFFvbf,ex2,avERRvbf);
  TGraphErrors * wzh = new TGraphErrors(16,x,avEFFwzh,ex,avERRwzh);
  TGraphErrors * tth = new TGraphErrors(16,x,avEFFtth,ex,avERRtth);

  ggh->SetMarkerStyle(22);ggh->SetMarkerSize(2.0); 
  vbf->SetMarkerStyle(23);vbf->SetMarkerSize(2.0); 
  wzh->SetMarkerStyle(20);wzh->SetMarkerSize(2.0); 
  tth->SetMarkerStyle(21);tth->SetMarkerSize(2.0); 

  ggh->SetMarkerColor(kRed);
  vbf->SetMarkerColor(kBlue);
  wzh->SetMarkerColor(kGreen);
  tth->SetMarkerColor(kBlack);

  tth->GetXaxis()->SetTitle("M_{H} (GeV)");  tth->GetYaxis()->SetTitle("#epsilon");
  ggh->GetXaxis()->SetTitle("M_{H} (GeV)");  ggh->GetYaxis()->SetTitle("#epsilon");
  vbf->GetXaxis()->SetTitle("M_{H} (GeV)");  vbf->GetYaxis()->SetTitle("#epsilon");
  wzh->GetXaxis()->SetTitle("M_{H} (GeV)");  wzh->GetYaxis()->SetTitle("#epsilon");
  
  TCanvas *C1 = new TCanvas("C1","Global Efficiency",200,10,1200,800);
  C1->SetFillColor(10);
  C1->Draw();
  C1->cd();

  
  float min=0.0;
  float max=1.0;
  ggh->SetMinimum(min);ggh->SetMaximum(max);
  vbf->SetMinimum(min);vbf->SetMaximum(max);
  wzh->SetMinimum(min);wzh->SetMaximum(max);
  tth->SetMinimum(min);tth->SetMaximum(max);
  
  ggh->Draw("AP"); 
  vbf->Draw("Psame"); 
  wzh->Draw("Psame"); 
  tth->Draw("Psame"); 

  C1->Update();

  TLegend *leg = new TLegend(0.6,0.35,0.7,0.2);
  //leg->AddEntry(glui,"gluino split-SUSY","lp");                                                                                                               
  //leg->AddEntry(stop,"stop MSSM","lp");                                                                                                                       
  leg->AddEntry(ggh,"ggh","p");
  leg->AddEntry(vbf,"vbf","p");
  leg->AddEntry(tth,"tth","p");
  leg->AddEntry(wzh,"wzh","p");
  leg->SetFillColor(0);
  leg->Draw("same");
  
  C1->SaveAs("summary10.png");

  min=0.9;
  max=1.0;
  ggh->SetMinimum(min);ggh->SetMaximum(max);
  vbf->SetMinimum(min);vbf->SetMaximum(max);
  wzh->SetMinimum(min);wzh->SetMaximum(max);
  tth->SetMinimum(min);tth->SetMaximum(max);
  
  ggh->Draw("AP"); 
  vbf->Draw("Psame"); 
  wzh->Draw("Psame"); 
  tth->Draw("Psame"); 

  C1->Update();

  TLegend *leg = new TLegend(0.6,0.35,0.7,0.2);
  //leg->AddEntry(glui,"gluino split-SUSY","lp");                                                                                                               
  //leg->AddEntry(stop,"stop MSSM","lp");                                                                                                                       
  leg->AddEntry(ggh,"ggh","p");
  leg->AddEntry(vbf,"vbf","p");
  leg->AddEntry(tth,"tth","p");
  leg->AddEntry(wzh,"wzh","p");
  leg->SetFillColor(0);
  leg->Draw("same");
  
  C1->SaveAs("summary10_0p9.png");

  min=0.7;
  max=1.0;
  ggh->SetMinimum(min);ggh->SetMaximum(max);
  vbf->SetMinimum(min);vbf->SetMaximum(max);
  wzh->SetMinimum(min);wzh->SetMaximum(max);
  tth->SetMinimum(min);tth->SetMaximum(max);
  
  ggh->Draw("AP"); 
  vbf->Draw("Psame"); 
  wzh->Draw("Psame"); 
  tth->Draw("Psame"); 

  C1->Update();

  TLegend *leg = new TLegend(0.6,0.35,0.7,0.2);
  //leg->AddEntry(glui,"gluino split-SUSY","lp");                                                                                                               
  //leg->AddEntry(stop,"stop MSSM","lp");                                                                                                                       
  leg->AddEntry(ggh,"ggh","p");
  leg->AddEntry(vbf,"vbf","p");
  leg->AddEntry(tth,"tth","p");
  leg->AddEntry(wzh,"wzh","p");
  leg->SetFillColor(0);
  leg->Draw("same");
  
  C1->SaveAs("summary10_0p7.png");

  exit(0);
}
