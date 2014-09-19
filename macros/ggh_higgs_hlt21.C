#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>

float efficiency(TFile * theFile){
  TH1F * numerator = (TH1F*) (theFile->Get("higgsP_2"));
  TH1F * denominator = (TH1F*) (theFile->Get("higgsP_1"));
  return numerator->Integral()/denominator->Integral();
}

float error(TFile * theFile){
  TH1F * denominator = (TH1F*) (theFile->Get("higgsEta_1"));
  float eff = efficiency(theFile);
  return sqrt(eff*(1-eff)/denominator->Integral()); 
}

void ggh_higgs_hlt21(){

  float x[16], ex[16];
  float x2[18], ex2[18];


   TFile *_fileggh0 = TFile::Open("ggh_m70_8TeV/output.root");
   TFile *_fileggh1 = TFile::Open("ggh_m75_8TeV/output.root");
   TFile *_fileggh2 = TFile::Open("ggh_m85_8TeV/output.root");
   TFile *_fileggh3 = TFile::Open("ggh_m90_8TeV/output.root");
   TFile *_fileggh4 = TFile::Open("ggh_m100_8TeV/output.root");
   TFile *_fileggh5 = TFile::Open("ggh_m105_8TeV/output.root");
   TFile *_fileggh6 = TFile::Open("ggh_m110_8TeV/output.root");
   TFile *_fileggh7 = TFile::Open("ggh_m115_8TeV/output.root");
   TFile *_fileggh8 = TFile::Open("ggh_m120_8TeV/output.root");
   TFile *_fileggh9 = TFile::Open("ggh_m123_8TeV/output.root");
  TFile *_fileggh10 = TFile::Open("ggh_m124_8TeV/output.root");
  TFile *_fileggh11 = TFile::Open("ggh_m125_8TeV/output.root");
  TFile *_fileggh12 = TFile::Open("ggh_m126_8TeV/output.root");
  TFile *_fileggh13 = TFile::Open("ggh_m130_8TeV/output.root");
  TFile *_fileggh14 = TFile::Open("ggh_m135_8TeV/output.root");
  TFile *_fileggh15 = TFile::Open("ggh_m140_8TeV/output.root");
  TFile *_fileggh16 = TFile::Open("ggh_m145_8TeV/output.root");
  TFile *_fileggh17 = TFile::Open("ggh_m150_8TeV/output.root");




  
  
  float avEFFggh[18];
  float avERRggh[18];

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

  x2[0]  = 70.0;
  x2[1]  = 75.0;
  x2[2]  = 85.0; 
  x2[3]  = 90.0; 
  x2[4]  = 100.0;
  x2[5]  = 105.0;
  x2[6]  = 110.0;
  x2[7]  = 115.0;
  x2[8]  = 120.0;
  x2[9]  = 123.0;
  x2[10] = 124.0;
  x2[11] = 125.0;
  x2[12] = 126.0;
  x2[13] = 130.0;
  x2[14] = 135.0;
  x2[15] = 140.0;
  x2[16] = 145.0;
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





  cout << x[0] <<" : " << avEFFggh[0] << "------" << avERRggh[0] << endl;
  cout << x[1] <<" : " << avEFFggh[1] << "------" << avERRggh[1] << endl;
  cout << x[2] <<" : " << avEFFggh[2] << "------" << avERRggh[2] << endl;
  cout << x[3] <<" : " << avEFFggh[3] << "------" << avERRggh[3] << endl;
    
  TGraphErrors * ggh = new TGraphErrors(18,x2,avEFFggh,ex2,avERRggh);

  ggh->SetMarkerStyle(22);ggh->SetMarkerSize(2.0); 

  ggh->SetMarkerColor(kRed);

  ggh->GetXaxis()->SetTitle("M_{H} (GeV)");  ggh->GetYaxis()->SetTitle("#epsilon");
  
  TCanvas *C1 = new TCanvas("C1","Global Efficiency",200,10,1200,800);
  C1->SetFillColor(10);
  C1->Draw();
  C1->cd();

  
  float min=0.0;
  float max=1.0;
  ggh->SetMinimum(min);ggh->SetMaximum(max);
  
  ggh->Draw("AP"); 

  C1->Update();

  TLegend *leg = new TLegend(0.6,0.35,0.7,0.2);
  //leg->AddEntry(glui,"gluino split-SUSY","lp");                                                                                                               
  //leg->AddEntry(stop,"stop MSSM","lp");                                                                                                                       
  leg->AddEntry(ggh,"ggh","p");
  leg->SetFillColor(0);
  leg->Draw("same");
  
  C1->SaveAs("summary21.png");

  min=0.9;
  max=1.0;
  ggh->SetMinimum(min);ggh->SetMaximum(max);
  
  ggh->Draw("AP"); 

  C1->Update();

  TLegend *leg = new TLegend(0.6,0.35,0.7,0.2);
  //leg->AddEntry(glui,"gluino split-SUSY","lp");                                                                                                               
  //leg->AddEntry(stop,"stop MSSM","lp");                                                                                                                       
  leg->AddEntry(ggh,"ggh","p");
  leg->SetFillColor(0);
  leg->Draw("same");
  
  C1->SaveAs("summary21_0p9.png");

  min=0.7;
  max=1.0;
  ggh->SetMinimum(min);ggh->SetMaximum(max);
  
  ggh->Draw("AP"); 

  C1->Update();

  TLegend *leg = new TLegend(0.6,0.35,0.7,0.2);
  //leg->AddEntry(glui,"gluino split-SUSY","lp");                                                                                                               
  //leg->AddEntry(stop,"stop MSSM","lp");                                                                                                                       
  leg->AddEntry(ggh,"ggh","p");
  leg->SetFillColor(0);
  leg->Draw("same");
  
  C1->SaveAs("summary21_0p7.png")

  exit(0);
}
