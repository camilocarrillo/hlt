#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>

float efficiency(TFile * theFile){
  if(!theFile) return -1;
  TH1F * numerator = (TH1F*) (theFile->Get("higgsP_4"));
  TH1F * denominator = (TH1F*) (theFile->Get("higgsP_3"));
  if(!numerator||!denominator)return -1;
  return numerator->Integral()/denominator->Integral();
}

float error(TFile * theFile){
  if(!theFile) return 0;
  TH1F * denominator = (TH1F*) (theFile->Get("higgsEta_3"));
  if(!denominator)return 0;
  float eff = efficiency(theFile);
  return sqrt(eff*(1-eff)/denominator->Integral()); 
}

void ggh_higgs_hlt43(){

  float x[16], ex[16];
  float x2[18], ex2[18];
  float x3[19], ex3[19];

  TFile *_fileggh[19];
  _fileggh[0] = TFile::Open("ggh_m60_8TeV/output.root"); 
  _fileggh[1] = TFile::Open("ggh_m65_8TeV/output.root"); 
  _fileggh[2] = TFile::Open("ggh_m70_8TeV/output.root"); 
  _fileggh[3] = TFile::Open("ggh_m75_8TeV/output.root"); 
  _fileggh[4] = TFile::Open("ggh_m80_8TeV/output.root"); 
  _fileggh[5] = TFile::Open("ggh_m85_8TeV/output.root"); 
  _fileggh[6] = TFile::Open("ggh_m90_8TeV/output.root");
  _fileggh[7] = TFile::Open("ggh_m95_8TeV/output.root");
  _fileggh[8] = TFile::Open("ggh_m100_8TeV/output.root");
  _fileggh[9] = TFile::Open("ggh_m105_8TeV/output.root");
  _fileggh[10] = TFile::Open("ggh_m110_8TeV/output.root");
  _fileggh[11] = TFile::Open("ggh_m115_8TeV/output.root");
  _fileggh[12] = TFile::Open("ggh_m120_8TeV/output.root");
  _fileggh[13] = TFile::Open("ggh_m125_8TeV/output.root");
  _fileggh[14] = TFile::Open("ggh_m130_8TeV/output.root");
  _fileggh[15] = TFile::Open("ggh_m135_8TeV/output.root");
  _fileggh[16] = TFile::Open("ggh_m140_8TeV/output.root");
  _fileggh[17] = TFile::Open("ggh_m145_8TeV/output.root");
  _fileggh[18] = TFile::Open("ggh_m150_8TeV/output.root");
  



  float avEFFggh[19];
  float avERRggh[19];

  float mass_value=55.;
  
  for(int k=0;k<19;k++){
    mass_value=mass_value+5.;
    x3[k]  = mass_value;
    ex3[k] = 0;
    avEFFggh[k] = efficiency(_fileggh[k]);

    avERRggh[k] = error(_fileggh[k]);
  }
 
  cout << x3[0] <<" : " << avEFFggh[0] << "------" << avERRggh[0] << endl;
  cout << x3[1] <<" : " << avEFFggh[1] << "------" << avERRggh[1] << endl;
  cout << x3[2] <<" : " << avEFFggh[2] << "------" << avERRggh[2] << endl;
  cout << x3[3] <<" : " << avEFFggh[3] << "------" << avERRggh[3] << endl;
    
  TGraphErrors * ggh = new TGraphErrors(19,x3,avEFFggh,ex3,avERRggh);

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
  
  C1->SaveAs("summary43.png");

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
  
  C1->SaveAs("summary43_0p9.png");

  min=0.7;
  max=1.0;
  
  ggh->SetMinimum(min);ggh->SetMaximum(max);
  
  ggh->Draw("AP"); 

  C1->Update();

  TLegend *leg = new TLegend(0.6,0.35,0.7,0.2);
  leg->AddEntry(ggh,"ggh","p");
  leg->SetFillColor(0);
  leg->Draw("same");
  
  C1->SaveAs("summary43_0p7.png");

  exit(0);
}
