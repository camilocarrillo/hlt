#include <iostream>
#include "Riostream.h"
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
#include <TEfficiency.h>
#include "TLegend"
#include "<TGraphAsymmErrors.h>"

//#define Maxselection 1
//#define Nhltpaths 442

void ggh_matrix(){
  gROOT->Reset();
  //gStyle->SetOptStat(1111);
  gStyle->SetOptStat(0);

  system("mkdir ggh_matrix");

  TCanvas * Ca0 = new TCanvas("Ca0","bit0",1200,800);
  TLegend * leg = new TLegend(0.65,0.73,0.89,0.5); 
  TFile *theFile; 


  //21
  
  //Lead
  
  Ca0->cd();
  theFile= TFile::Open("ggh_m70_8TeV/output.root");binomialEfficiency1D(theFile,2,true,"70",leg,"2","1","Lead");
  theFile= TFile::Open("ggh_m90_8TeV/output.root");    binomialEfficiency1D(theFile,4,false,"90",leg,"2","1","Lead");
  theFile= TFile::Open("ggh_m110_8TeV/output.root");   binomialEfficiency1D(theFile,5,false,"110",leg,"2","1","Lead");
  theFile= TFile::Open("ggh_m130_8TeV/output.root");   binomialEfficiency1D(theFile,6,false,"130",leg,"2","1","Lead");
  theFile= TFile::Open("ggh_m150_8TeV/output.root");   binomialEfficiency1D(theFile,1,false,"150",leg,"2","1","Lead");
  leg->SetFillColor(0); leg->Draw("same"); Ca0->SaveAs(("ggh_matrix/gghLead21.png"));
  leg->Clear();
  Ca0->Clear();

  Ca0->cd();
  leg->Clear();
  Ca0->Clear();
  
  Ca0->cd();
  leg->Clear();
  Ca0->Clear();
  
  Ca0->cd();
  leg->Clear();
  Ca0->Clear();

  //Trail
  
  Ca0->cd();
  theFile= TFile::Open("ggh_m70_8TeV/output.root");binomialEfficiency1D(theFile,2,true,"70",leg,"2","1","Trail");
  theFile= TFile::Open("ggh_m90_8TeV/output.root");    binomialEfficiency1D(theFile,4,false,"90",leg,"2","1","Trail");
  theFile= TFile::Open("ggh_m110_8TeV/output.root");   binomialEfficiency1D(theFile,5,false,"110",leg,"2","1","Trail");
  theFile= TFile::Open("ggh_m130_8TeV/output.root");   binomialEfficiency1D(theFile,6,false,"130",leg,"2","1","Trail");
  theFile= TFile::Open("ggh_m150_8TeV/output.root");   binomialEfficiency1D(theFile,1,false,"150",leg,"2","1","Trail");
  leg->SetFillColor(0); leg->Draw("same"); Ca0->SaveAs(("ggh_matrix/gghTrail21.png"));
  leg->Clear();
  Ca0->Clear();

  Ca0->cd();
  leg->Clear();
  Ca0->Clear();
  
  Ca0->cd();
  leg->Clear();
  Ca0->Clear();

  Ca0->cd();
  leg->Clear();
  Ca0->Clear();
  

  //43
  
  //Lead
  
  Ca0->cd();
  theFile= TFile::Open("ggh_m70_8TeV/output.root");binomialEfficiency1D(theFile,2,true,"70",leg,"4","3","Lead");
  theFile= TFile::Open("ggh_m90_8TeV/output.root");    binomialEfficiency1D(theFile,4,false,"90",leg,"4","3","Lead");
  theFile= TFile::Open("ggh_m110_8TeV/output.root");   binomialEfficiency1D(theFile,5,false,"110",leg,"4","3","Lead");
  theFile= TFile::Open("ggh_m130_8TeV/output.root");   binomialEfficiency1D(theFile,6,false,"130",leg,"4","3","Lead");
  theFile= TFile::Open("ggh_m150_8TeV/output.root");   binomialEfficiency1D(theFile,1,false,"150",leg,"4","3","Lead");
  leg->SetFillColor(0); leg->Draw("same"); Ca0->SaveAs(("ggh_matrix/gghLead43.png"));
  leg->Clear();
  Ca0->Clear();

  Ca0->cd();
  leg->Clear();
  Ca0->Clear();
  
  Ca0->cd();
  leg->Clear();
  Ca0->Clear();
  
  Ca0->cd();
  leg->Clear();
  Ca0->Clear();

  //Trail
  
  Ca0->cd();
  theFile= TFile::Open("ggh_m70_8TeV/output.root");binomialEfficiency1D(theFile,2,true,"70",leg,"4","3","Trail");
  theFile= TFile::Open("ggh_m90_8TeV/output.root");    binomialEfficiency1D(theFile,4,false,"90",leg,"4","3","Trail");
  theFile= TFile::Open("ggh_m110_8TeV/output.root");   binomialEfficiency1D(theFile,5,false,"110",leg,"4","3","Trail");
  theFile= TFile::Open("ggh_m130_8TeV/output.root");   binomialEfficiency1D(theFile,6,false,"130",leg,"4","3","Trail");
  theFile= TFile::Open("ggh_m150_8TeV/output.root");   binomialEfficiency1D(theFile,1,false,"150",leg,"4","3","Trail");
  leg->SetFillColor(0); leg->Draw("same"); Ca0->SaveAs(("ggh_matrix/gghTrail43.png"));
  leg->Clear();
  Ca0->Clear();

  Ca0->cd();
  leg->Clear();
  Ca0->Clear();
  
  Ca0->cd();
  leg->Clear();
  Ca0->Clear();

  Ca0->cd();
  leg->Clear();
  Ca0->Clear();
  

  //65
  
  //Lead
  
  Ca0->cd();
  theFile= TFile::Open("ggh_m70_8TeV/output.root");binomialEfficiency1D(theFile,2,true,"70",leg,"6","5","Lead");
  theFile= TFile::Open("ggh_m90_8TeV/output.root");    binomialEfficiency1D(theFile,4,false,"90",leg,"6","5","Lead");
  theFile= TFile::Open("ggh_m110_8TeV/output.root");   binomialEfficiency1D(theFile,5,false,"110",leg,"6","5","Lead");
  theFile= TFile::Open("ggh_m130_8TeV/output.root");   binomialEfficiency1D(theFile,6,false,"130",leg,"6","5","Lead");
  theFile= TFile::Open("ggh_m150_8TeV/output.root");   binomialEfficiency1D(theFile,1,false,"150",leg,"6","5","Lead");
  leg->SetFillColor(0); leg->Draw("same"); Ca0->SaveAs(("ggh_matrix/gghLead65.png"));
  leg->Clear();
  Ca0->Clear();

  Ca0->cd();
  leg->Clear();
  Ca0->Clear();
  
  Ca0->cd();
  leg->Clear();
  Ca0->Clear();
  
  Ca0->cd();
  leg->Clear();
  Ca0->Clear();

  //Trail
  
  Ca0->cd();
  theFile= TFile::Open("ggh_m70_8TeV/output.root");binomialEfficiency1D(theFile,2,true,"70",leg,"6","5","Trail");
  theFile= TFile::Open("ggh_m90_8TeV/output.root");    binomialEfficiency1D(theFile,4,false,"90",leg,"6","5","Trail");
  theFile= TFile::Open("ggh_m110_8TeV/output.root");   binomialEfficiency1D(theFile,5,false,"110",leg,"6","5","Trail");
  theFile= TFile::Open("ggh_m130_8TeV/output.root");   binomialEfficiency1D(theFile,6,false,"130",leg,"6","5","Trail");
  theFile= TFile::Open("ggh_m150_8TeV/output.root");   binomialEfficiency1D(theFile,1,false,"150",leg,"6","5","Trail");
  leg->SetFillColor(0); leg->Draw("same"); Ca0->SaveAs(("ggh_matrix/gghTrail65.png"));
  leg->Clear();
  Ca0->Clear();

  Ca0->cd();
  leg->Clear();
  Ca0->Clear();
  
  Ca0->cd();
  leg->Clear();
  Ca0->Clear();

  Ca0->cd();
  leg->Clear();
  Ca0->Clear();

  //87
  
  //Lead
  
  Ca0->cd();
  theFile= TFile::Open("ggh_m70_8TeV/output.root");binomialEfficiency1D(theFile,2,true,"70",leg,"8","7","Lead");
  theFile= TFile::Open("ggh_m90_8TeV/output.root");    binomialEfficiency1D(theFile,4,false,"90",leg,"8","7","Lead");
  theFile= TFile::Open("ggh_m110_8TeV/output.root");   binomialEfficiency1D(theFile,5,false,"110",leg,"8","7","Lead");
  theFile= TFile::Open("ggh_m130_8TeV/output.root");   binomialEfficiency1D(theFile,6,false,"130",leg,"8","7","Lead");
  theFile= TFile::Open("ggh_m150_8TeV/output.root");   binomialEfficiency1D(theFile,1,false,"150",leg,"8","7","Lead");
  leg->SetFillColor(0); leg->Draw("same"); Ca0->SaveAs(("ggh_matrix/gghLead87.png"));
  leg->Clear();
  Ca0->Clear();

  Ca0->cd();
  leg->Clear();
  Ca0->Clear();
  
  Ca0->cd();
  leg->Clear();
  Ca0->Clear();
  
  Ca0->cd();
  leg->Clear();
  Ca0->Clear();

  //Trail
  
  Ca0->cd();
  theFile= TFile::Open("ggh_m70_8TeV/output.root");    binomialEfficiency1D(theFile,2,true,"70",leg,"8","7","Trail");
  theFile= TFile::Open("ggh_m90_8TeV/output.root");    binomialEfficiency1D(theFile,4,false,"90",leg,"8","7","Trail");
  theFile= TFile::Open("ggh_m110_8TeV/output.root");   binomialEfficiency1D(theFile,5,false,"110",leg,"8","7","Trail");
  theFile= TFile::Open("ggh_m130_8TeV/output.root");   binomialEfficiency1D(theFile,6,false,"130",leg,"8","7","Trail");
  theFile= TFile::Open("ggh_m150_8TeV/output.root");   binomialEfficiency1D(theFile,1,false,"150",leg,"8","7","Trail");
  leg->SetFillColor(0); leg->Draw("same"); Ca0->SaveAs(("ggh_matrix/gghTrail87.png"));
  leg->Clear();
  Ca0->Clear();

  Ca0->cd();
  leg->Clear();
  Ca0->Clear();
  
  Ca0->cd();
  leg->Clear();
  Ca0->Clear();

  Ca0->cd();
  leg->Clear();
  Ca0->Clear();

  
  exit(0);
  
}

void binomialEfficiency1D(TFile * theFile,int color,bool first,string mass,TLegend * leg,string num,string den,string range){
  TH1F * numerator;
  TH1F * denominator; 
  numerator = (TH1F*) (theFile->Get(("pt"+range+"Norm_"+num).c_str()));
  denominator = (TH1F*) (theFile->Get(("pt"+range+"Norm_"+den).c_str()));

  TGraphAsymmErrors * efficiency =new TGraphAsymmErrors(numerator,denominator);
  efficiency->SetTitle(("Efficiency Vs pt"+range+"Norm").c_str());
  //efficiency->SetXaxis(("pt "+range+" / M_{#gamma #gamma}").c_str());
  //efficiency->SetYTitle("#epsilon");
  
  /*
    for(int j=0;j<=numerator->GetXaxis()->GetNbins() ;j++){
    if(denominator->GetBinContent(j)!=0){
      float eff = numerator->GetBinContent(j)/denominator->GetBinContent(j);
      float err = sqrt(eff*(1-eff)/denominator->GetBinContent(j));
      efficiency->SetBinContent(j,eff);
      efficiency->SetBinError(j,err);
    }
    }
  */



  if(first==true)efficiency->Draw("AP");
  else(first==true)efficiency->Draw("Psame");
  efficiency->SetMarkerColor(color);
  efficiency->SetMarkerStyle(23);
  efficiency->SetMarkerSize(2);
  //efficiency->SetMaximum(1.);
  leg->AddEntry(efficiency,("M_{H}:"+mass+" (GeV)").c_str(),"p");

  efficiency->GetXaxis()->SetLimits(0.,1.);
  efficiency->GetYaxis()->SetRangeUser(0.,1.);

}


