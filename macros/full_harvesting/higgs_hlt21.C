#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>

float efficiency(TFile * theFile){
  if(!theFile) return -1;
  TH1F * numerator = (TH1F*) (theFile->Get("higgsP_2"));
  TH1F * denominator = (TH1F*) (theFile->Get("higgsP_1"));
  if(!numerator||!denominator)return -1;
  return numerator->Integral()/denominator->Integral();
}

float error(TFile * theFile){
  if(!theFile) return 0;
  TH1F * denominator = (TH1F*) (theFile->Get("higgsEta_1"));
  if(!denominator)return 0;
  float eff = efficiency(theFile);
  return sqrt(eff*(1-eff)/denominator->Integral()); 
}

void higgs_hlt21(){

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
  
  TFile *_filetth[19];
  _filetth[0] = TFile::Open("tth_m60_8TeV/output.root"); 
  _filetth[1] = TFile::Open("tth_m65_8TeV/output.root"); 
  _filetth[2] = TFile::Open("tth_m70_8TeV/output.root"); 
  _filetth[3] = TFile::Open("tth_m75_8TeV/output.root"); 
  _filetth[4] = TFile::Open("tth_m80_8TeV/output.root"); 
  _filetth[5] = TFile::Open("tth_m85_8TeV/output.root"); 
  _filetth[6] = TFile::Open("tth_m90_8TeV/output.root");
  _filetth[7] = TFile::Open("tth_m95_8TeV/output.root");
  _filetth[8] = TFile::Open("tth_m100_8TeV/output.root");
  _filetth[9] = TFile::Open("tth_m105_8TeV/output.root");
  _filetth[10] = TFile::Open("tth_m110_8TeV/output.root");
  _filetth[11] = TFile::Open("tth_m115_8TeV/output.root");
  _filetth[12] = TFile::Open("tth_m120_8TeV/output.root");
  _filetth[13] = TFile::Open("tth_m125_8TeV/output.root");
  _filetth[14] = TFile::Open("tth_m130_8TeV/output.root");
  _filetth[15] = TFile::Open("tth_m135_8TeV/output.root");
  _filetth[16] = TFile::Open("tth_m140_8TeV/output.root");
  _filetth[17] = TFile::Open("tth_m145_8TeV/output.root");
  _filetth[18] = TFile::Open("tth_m150_8TeV/output.root");

  TFile *_filevbf[19];
  _filevbf[0] = TFile::Open("vbf_m60_8TeV/output.root"); 
  _filevbf[1] = TFile::Open("vbf_m65_8TeV/output.root"); 
  _filevbf[2] = TFile::Open("vbf_m70_8TeV/output.root"); 
  _filevbf[3] = TFile::Open("vbf_m75_8TeV/output.root"); 
  _filevbf[4] = TFile::Open("vbf_m80_8TeV/output.root"); 
  _filevbf[5] = TFile::Open("vbf_m85_8TeV/output.root"); 
  _filevbf[6] = TFile::Open("vbf_m90_8TeV/output.root");
  _filevbf[7] = TFile::Open("vbf_m95_8TeV/output.root");
  _filevbf[8] = TFile::Open("vbf_m100_8TeV/output.root");
  _filevbf[9] = TFile::Open("vbf_m105_8TeV/output.root");
  _filevbf[10] = TFile::Open("vbf_m110_8TeV/output.root");
  _filevbf[11] = TFile::Open("vbf_m115_8TeV/output.root");
  _filevbf[12] = TFile::Open("vbf_m120_8TeV/output.root");
  _filevbf[13] = TFile::Open("vbf_m125_8TeV/output.root");
  _filevbf[14] = TFile::Open("vbf_m130_8TeV/output.root");
  _filevbf[15] = TFile::Open("vbf_m135_8TeV/output.root");
  _filevbf[16] = TFile::Open("vbf_m140_8TeV/output.root");
  _filevbf[17] = TFile::Open("vbf_m145_8TeV/output.root");
  _filevbf[18] = TFile::Open("vbf_m150_8TeV/output.root");

  TFile *_filewzh[19];
  _filewzh[0] = TFile::Open("wzh_m60_8TeV/output.root"); 
  _filewzh[1] = TFile::Open("wzh_m65_8TeV/output.root"); 
  _filewzh[2] = TFile::Open("wzh_m70_8TeV/output.root"); 
  _filewzh[3] = TFile::Open("wzh_m75_8TeV/output.root"); 
  _filewzh[4] = TFile::Open("wzh_m80_8TeV/output.root"); 
  _filewzh[5] = TFile::Open("wzh_m85_8TeV/output.root"); 
  _filewzh[6] = TFile::Open("wzh_m90_8TeV/output.root");
  _filewzh[7] = TFile::Open("wzh_m95_8TeV/output.root");
  _filewzh[8] = TFile::Open("wzh_m100_8TeV/output.root");
  _filewzh[9] = TFile::Open("wzh_m105_8TeV/output.root");
  _filewzh[10] = TFile::Open("wzh_m110_8TeV/output.root");
  _filewzh[11] = TFile::Open("wzh_m115_8TeV/output.root");
  _filewzh[12] = TFile::Open("wzh_m120_8TeV/output.root");
  _filewzh[13] = TFile::Open("wzh_m125_8TeV/output.root");
  _filewzh[14] = TFile::Open("wzh_m130_8TeV/output.root");
  _filewzh[15] = TFile::Open("wzh_m135_8TeV/output.root");
  _filewzh[16] = TFile::Open("wzh_m140_8TeV/output.root");
  _filewzh[17] = TFile::Open("wzh_m140_8TeV/output.root");
  _filewzh[18] = TFile::Open("wzh_m145_8TeV/output.root");

  float avEFFggh[19];
  float avEFFtth[19];
  float avEFFwzh[19];
  float avEFFvbf[19];
  float avERRggh[19];
  float avERRtth[19];
  float avERRwzh[19];
  float avERRvbf[19];

  float mass_value=55.;
  
  for(int k=0;k<19;k++){
    mass_value=mass_value+5.;
    x3[k]  = mass_value;
    ex3[k] = 0;
    avEFFggh[k] = efficiency(_fileggh[k]);
    avEFFtth[k] = efficiency(_filetth[k]);
    avEFFvbf[k] = efficiency(_filevbf[k]);
    avEFFwzh[k] = efficiency(_filewzh[k]);

    avERRggh[k] = error(_fileggh[k]);
    avERRwzh[k] = error(_filewzh[k]);
    avERRtth[k] = error(_filetth[k]);
    avERRvbf[k] = error(_filevbf[k]);
  }
 
  cout << x3[0] <<" : " << avEFFggh[0] << "------" << avERRggh[0] << endl;
  cout << x3[1] <<" : " << avEFFggh[1] << "------" << avERRggh[1] << endl;
  cout << x3[2] <<" : " << avEFFggh[2] << "------" << avERRggh[2] << endl;
  cout << x3[3] <<" : " << avEFFggh[3] << "------" << avERRggh[3] << endl;
    
  TGraphErrors * ggh = new TGraphErrors(19,x3,avEFFggh,ex3,avERRggh);
  TGraphErrors * vbf = new TGraphErrors(19,x3,avEFFvbf,ex3,avERRvbf);
  TGraphErrors * wzh = new TGraphErrors(19,x3,avEFFwzh,ex3,avERRwzh);
  TGraphErrors * tth = new TGraphErrors(19,x3,avEFFtth,ex3,avERRtth);

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
  
  C1->SaveAs("summary21.png");

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
  
  C1->SaveAs("summary21_0p9.png");

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
  leg->AddEntry(ggh,"ggh","p");
  leg->AddEntry(vbf,"vbf","p");
  leg->AddEntry(tth,"tth","p");
  leg->AddEntry(wzh,"wzh","p");
  leg->SetFillColor(0);
  leg->Draw("same");
  
  C1->SaveAs("summary21_0p7.png");

  exit(0);
}
