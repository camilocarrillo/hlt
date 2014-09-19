//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Jan 21 10:45:29 2014 by ROOT version 5.34/09
// from TTree DiPhotonTree/Tree
// found on file: /sps/cms/jfan/ForHLT/Diphoton8TeVForHLT/ggh_m123_8TeV/MiniTreeOutput_0.root
//////////////////////////////////////////////////////////

#ifndef READING_DIPHOTON_TREE_h
#define READING_DIPHOTON_TREE_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

class READING_DIPHOTON_TREE {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain
   // Declaration of leaf types
   Int_t           event_hlt_n;
   vector<unsigned short> *event_hlt_bit;
   vector<string>  *event_hlt_path_names_HLT;
   Int_t           event_eventID;
   Int_t           event_RunID;
   Int_t           event_Nvtx;
   Float_t         event_weight;
   Float_t         event_PUweight;
   Float_t         event_XSweight;
   Float_t         event_rho;
   Int_t           event_nPU;
   Int_t           event_processid;
   Int_t           event_GenGaGaFlag;
   Int_t           event_DiPhotonCiC4Level;
   Int_t           event_DiPhotonPreselAll;
   Int_t           event_DiPhotonPreselNoIDMVA;
   Int_t           event_IfBothPFElectron;
   Int_t           event_IfBothElectronPre;
   Int_t           event_DiPhotonHggPreselKine;
   Int_t           event_DiPhotonHggPresel;
   Int_t           event_DiPhotonHggCiC4;
   Int_t           Diphoton_CiCCatInd;
   Int_t           Diphoton_MVACatInd;
   Float_t         Diphoton_Mass;
   Float_t         Diphoton_PT;
   Float_t         Diphoton_Eta;
   Float_t         Diphoton_Phi;
   Float_t         Diphoton_VtxProb;
   Float_t         Diphoton_dmom;
   Float_t         Diphoton_dmom_wrongvtx;
   Float_t         Diphoton_MCMassResWeight;
   Float_t         Diphoton_PhotonDeltaR;
   Float_t         Diphoton_PhotonDeltaPhi;
   Float_t         Diphoton_PhotonDeltaEta;
   Float_t         Diphoton_ETmaxOverMass;
   Float_t         Diphoton_ETminOverMass;
   Float_t         Diphoton_NormalizedPL;
   Float_t         Diphoton_CosThetaStar;
   Float_t         Diphoton_ThetaStarDg;
   Float_t         Diphoton_CosDeltaPhi;
   Float_t         Diphoton_MVAOutput;
   Float_t         Diphoton_MVAn;
   Float_t         Diphoton_SumPToverJetPT;
   Float_t         Diphoton_CloestDRJet;
   Float_t         Diphoton_CosHiggsJet;
   Float_t         Diphoton_AlphaT;
   Float_t         Diphoton_AlphaL;
   Float_t         Diphoton_DeltaETMass;
   Float_t         Diphoton_DeltaEToSumET;
   Int_t           Diphoton_LeadIsGenMatched;
   Int_t           Diphoton_SubLeadIsGenMatched;
   Int_t           Diphoton_LeadSCInd;
   Int_t           Diphoton_SubLeadSCInd;
   Float_t         Diphoton_LeadEt;
   Float_t         Diphoton_SubLeadEt;
   Float_t         Diphoton_LeadEta;
   Float_t         Diphoton_SubLeadEta;
   Float_t         Diphoton_LeadPhi;
   Float_t         Diphoton_SubLeadPhi;
   Float_t         Diphoton_LeadSigIeIe;
   Float_t         Diphoton_SubLeadSigIeIe;
   Float_t         Diphoton_LeadR9;
   Float_t         Diphoton_SubLeadR9;
   Int_t           Diphoton_LeadCiCLevel;
   Int_t           Diphoton_SubLeadCiCLevel;
   Int_t           Diphoton_LeadPFCiCLevel;
   Int_t           Diphoton_SubLeadPFCiCLevel;
   Float_t         Diphoton_LeadMVAOutput;
   Float_t         Diphoton_SubLeadMVAOutput;
   Float_t         Diphoton_LeadCorrMVAOutput;
   Float_t         Diphoton_SubLeadCorrMVAOutput;
   Float_t         Diphoton_LeadTaoMVAOutput;
   Float_t         Diphoton_SubLeadTaoMVAOutput;
   Int_t           Diphoton_LeadMITPre;
   Int_t           Diphoton_SubLeadMITPre;
   Int_t           Diphoton_LeadElectronPre;
   Int_t           Diphoton_SubLeadElectronPre;
   Int_t           Diphoton_LeadisPFElectron;
   Int_t           Diphoton_SubLeadisPFElectron;
   Int_t           Diphoton_LeadisPFPhoton;
   Int_t           Diphoton_SubLeadisPFPhoton;
   Float_t         Diphoton_LeadSCEta;
   Float_t         Diphoton_SubLeadSCEta;
   Int_t           Diphoton_PassXSPreSelection;
   Int_t           Diphoton_PassXSMITPreSelection;
   Float_t         Diphoton_LeadTrkIso03;
   Float_t         Diphoton_LeadEcalIso03;
   Float_t         Diphoton_LeadHcalIso03;
   Float_t         Diphoton_LeadHoE;
   Float_t         Diphoton_SubLeadTrkIso03;
   Float_t         Diphoton_SubLeadEcalIso03;
   Float_t         Diphoton_SubLeadHcalIso03;
   Float_t         Diphoton_SubLeadHoE;
   Int_t           Diphoton_LeadIsConv;
   Int_t           Diphoton_SubLeadIsConv;
   Int_t           Diphoton_LeadHasPixSeed;
   Int_t           Diphoton_SubLeadHasPixSeed;
   Float_t         Diphoton_Leadpfiso02;
   Float_t         Diphoton_SubLeadpfiso02;
   Int_t           Diphoton_Add_NPhotons;
   Float_t         Diphoton_Add_PT[8];   //[Diphoton_Add_NPhotons]
   Float_t         Diphoton_Add_Eta[8];   //[Diphoton_Add_NPhotons]
   Float_t         Diphoton_Add_Phi[8];   //[Diphoton_Add_NPhotons]
   Float_t         Diphoton_Add_SCEta[8];   //[Diphoton_Add_NPhotons]
   Int_t           Diphoton_Add_IsConv[8];   //[Diphoton_Add_NPhotons]
   Float_t         Diphoton_Add_MVAOutput[8];   //[Diphoton_Add_NPhotons]
   Float_t         Diphoton_Add_CorrMVAOutput[8];   //[Diphoton_Add_NPhotons]
   Float_t         Diphoton_Add_SumPFISO03[8];   //[Diphoton_Add_NPhotons]
   Int_t           Diphoton_Add_MITPre[8];   //[Diphoton_Add_NPhotons]
   Int_t           Diphoton_Add_CiCLevel[8];   //[Diphoton_Add_NPhotons]
   Int_t           Diphoton_Add_PFCiCLevel[8];   //[Diphoton_Add_NPhotons]
   Float_t         Diphoton_Add_Mass[8];   //[Diphoton_Add_NPhotons]
   Float_t         Diphoton_Add_TaoMVAOutput[8];   //[Diphoton_Add_NPhotons]
   Int_t           Diphoton_Add_XSSinglePre[8];   //[Diphoton_Add_NPhotons]
   Int_t           Diphoton_Add_IsAlsoJet[8];   //[Diphoton_Add_NPhotons]
   Int_t           Diphoton_NMuons;
   Int_t           Diphoton_Muon_MuType[8];   //[Diphoton_NMuons]
   Int_t           Diphoton_Muon_Charge[8];   //[Diphoton_NMuons]
   Float_t         Diphoton_Muon_PT[8];   //[Diphoton_NMuons]
   Float_t         Diphoton_Muon_Eta[8];   //[Diphoton_NMuons]
   Float_t         Diphoton_Muon_Phi[8];   //[Diphoton_NMuons]
   Float_t         Diphoton_Muon_Ch2OverNdof[8];   //[Diphoton_NMuons]
   Int_t           Diphoton_Muon_NPixelHits[8];   //[Diphoton_NMuons]
   Int_t           Diphoton_Muon_NValidHits[8];   //[Diphoton_NMuons]
   Int_t           Diphoton_Muon_NMatchedChambers[8];   //[Diphoton_NMuons]
   Int_t           Diphoton_Muon_NValidChamberHits[8];   //[Diphoton_NMuons]
   Float_t         Diphoton_Muon_trkiso03[8];   //[Diphoton_NMuons]
   Float_t         Diphoton_Muon_ecaliso03[8];   //[Diphoton_NMuons]
   Float_t         Diphoton_Muon_hcaliso03[8];   //[Diphoton_NMuons]
   Float_t         Diphoton_Muon_pfchhadiso04[8];   //[Diphoton_NMuons]
   Float_t         Diphoton_Muon_pfnehadiso04[8];   //[Diphoton_NMuons]
   Float_t         Diphoton_Muon_pfphotiso04[8];   //[Diphoton_NMuons]
   Float_t         Diphoton_Muon_dbCorr[8];   //[Diphoton_NMuons]
   Float_t         Diphoton_Muon_TrackPTErr[8];   //[Diphoton_NMuons]
   Float_t         Diphoton_Muon_dz[8];   //[Diphoton_NMuons]
   Float_t         Diphoton_Muon_D0Vtx[8];   //[Diphoton_NMuons]
   Float_t         Diphoton_Muon_DZVtx[8];   //[Diphoton_NMuons]
   Int_t           Diphoton_NElectrons;
   Int_t           Diphoton_Electron_Charge[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_PT[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_Eta[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_Phi[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_SCPT[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_SCEta[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_SCPhi[4];   //[Diphoton_NElectrons]
   Int_t           Diphoton_Electron_SCInd[4];   //[Diphoton_NElectrons]
   Int_t           Diphoton_Electron_TrackInd[4];   //[Diphoton_NElectrons]
   Int_t           Diphoton_Electron_NHitsInner[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_Sieie[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_SCSieie[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_hoe[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_detaVtx[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_dphiVtx[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_eopin[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_fbrem[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_dcot[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_dist[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_d0[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_dz[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_d0Vtx[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_dzVtx[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_ipdxy_ctf[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_ipdxy_gsf[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_tkiso03[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_ecaliso03[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_hcaliso03[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_ecaliso04[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_hcaliso04[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_pfisocharged[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_pfisophoton[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_pfisoneutral[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_MVAnontrig[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_MVAtrig[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_RegrEnergy[4];   //[Diphoton_NElectrons]
   Float_t         Diphoton_Electron_ConvVtxProb[4];   //[Diphoton_NElectrons]
   Int_t           Diphoton_Electron_PassConv[4];   //[Diphoton_NElectrons]
   Int_t           Diphoton_NJets;
   Float_t         Diphoton_Jet_PT[25];   //[Diphoton_NJets]
   Float_t         Diphoton_Jet_Eta[25];   //[Diphoton_NJets]
   Float_t         Diphoton_Jet_Phi[25];   //[Diphoton_NJets]
   Bool_t          Diphoton_Jet_pfloose[25];   //[Diphoton_NJets]
   Bool_t          Diphoton_Jet_sloose[25];   //[Diphoton_NJets]
   Bool_t          Diphoton_Jet_floose[25];   //[Diphoton_NJets]
   Bool_t          Diphoton_Jet_cmedium[25];   //[Diphoton_NJets]
   Bool_t          Diphoton_Jet_smedium[25];   //[Diphoton_NJets]
   Bool_t          Diphoton_Jet_fmedium[25];   //[Diphoton_NJets]
   Bool_t          Diphoton_Jet_isGenMatched[25];   //[Diphoton_NJets]
   Float_t         Diphoton_Jet_genPt[25];   //[Diphoton_NJets]
   Float_t         Diphoton_Jet_genDr[25];   //[Diphoton_NJets]
   Bool_t          Diphoton_Jet_IfvbfMatched[25];   //[Diphoton_NJets]
   Float_t         Diphoton_Jet_FullMVA[25];   //[Diphoton_NJets]
   Float_t         Diphoton_Jet_SimpleMVA[25];   //[Diphoton_NJets]
   Int_t           Diphoton_Jet_FullWPLevel[25];   //[Diphoton_NJets]
   Int_t           Diphoton_Jet_SimpleWPLevel[25];   //[Diphoton_NJets]
   Int_t           Diphoton_Jet_CutbasedWPLevel[25];   //[Diphoton_NJets]
   Float_t         Diphoton_Jet_area[25];   //[Diphoton_NJets]
   Int_t           Diphoton_Jet_nCharged[25];   //[Diphoton_NJets]
   Int_t           Diphoton_Jet_nNeutrals[25];   //[Diphoton_NJets]
   Float_t         Diphoton_Jet_dZ[25];   //[Diphoton_NJets]
   Float_t         Diphoton_Jet_dRMean[25];   //[Diphoton_NJets]
   Float_t         Diphoton_Jet_dR2Mean[25];   //[Diphoton_NJets]
   Float_t         Diphoton_Jet_csvBtag[25];   //[Diphoton_NJets]
   Float_t         Diphoton_Jet_csvMvaBtag[25];   //[Diphoton_NJets]
   Float_t         Diphoton_Jet_jetProbBtag[25];   //[Diphoton_NJets]
   Float_t         Diphoton_Jet_tcheBtag[25];   //[Diphoton_NJets]
   Float_t         Diphoton_pfmet;
   Float_t         Diphoton_pfmet_phi;
   Float_t         Diphoton_pfmet_sumet;
   Float_t         Diphoton_pfmet_mEtSig;
   Float_t         Diphoton_pfmet_significance;
   Float_t         Diphoton_corrMet;
   Float_t         Diphoton_corrMetPhi;

   // List of branches
   TBranch        *b_event_hlt_n;   //!
   TBranch        *b_event_hlt_bit;   //!
   TBranch        *b_event_hlt_path_names_HLT;   //!
   TBranch        *b_event_eventID;   //!
   TBranch        *b_event_RunID;   //!
   TBranch        *b_event_Nvtx;   //!
   TBranch        *b_event_weight;   //!
   TBranch        *b_event_PUweight;   //!
   TBranch        *b_event_XSweight;   //!
   TBranch        *b_event_rho;   //!
   TBranch        *b_event_nPU;   //!
   TBranch        *b_event_processid;   //!
   TBranch        *b_event_GenGaGaFlag;   //!
   TBranch        *b_event_DiPhotonCiC4Level;   //!
   TBranch        *b_event_DiPhotonPreselAll;   //!
   TBranch        *b_event_DiPhotonPreselNoIDMVA;   //!
   TBranch        *b_event_IfBothPFElectron;   //!
   TBranch        *b_event_IfBothElectronPre;   //!
   TBranch        *b_event_DiPhotonHggPreselKine;   //!
   TBranch        *b_event_DiPhotonHggPresel;   //!
   TBranch        *b_event_DiPhotonHggCiC4;   //!
   TBranch        *b_Diphoton_CiCCatInd;   //!
   TBranch        *b_Diphoton_MVACatInd;   //!
   TBranch        *b_Diphoton_Mass;   //!
   TBranch        *b_Diphoton_PT;   //!
   TBranch        *b_Diphoton_Eta;   //!
   TBranch        *b_Diphoton_Phi;   //!
   TBranch        *b_Diphoton_VtxProb;   //!
   TBranch        *b_Diphoton_dmom;   //!
   TBranch        *b_Diphoton_dmom_wrongvtx;   //!
   TBranch        *b_Diphoton_MCMassResWeight;   //!
   TBranch        *b_Diphoton_PhotonDeltaR;   //!
   TBranch        *b_Diphoton_PhotonDeltaPhi;   //!
   TBranch        *b_Diphoton_PhotonDeltaEta;   //!
   TBranch        *b_Diphoton_ETmaxOverMass;   //!
   TBranch        *b_Diphoton_ETminOverMass;   //!
   TBranch        *b_Diphoton_NormalizedPL;   //!
   TBranch        *b_Diphoton_CosThetaStar;   //!
   TBranch        *b_Diphoton_ThetaStarDg;   //!
   TBranch        *b_Diphoton_CosDeltaPhi;   //!
   TBranch        *b_Diphoton_MVAOutput;   //!
   TBranch        *b_Diphoton_MVAn;   //!
   TBranch        *b_Diphoton_SumPToverJetPT;   //!
   TBranch        *b_Diphoton_CloestDRJet;   //!
   TBranch        *b_Diphoton_CosHiggsJet;   //!
   TBranch        *b_Diphoton_AlphaT;   //!
   TBranch        *b_Diphoton_AlphaL;   //!
   TBranch        *b_Diphoton_DeltaETMass;   //!
   TBranch        *b_Diphoton_DeltaEToSumET;   //!
   TBranch        *b_Diphoton_LeadIsGenMatched;   //!
   TBranch        *b_Diphoton_SubLeadIsGenMatched;   //!
   TBranch        *b_Diphoton_LeadSCInd;   //!
   TBranch        *b_Diphoton_SubLeadSCInd;   //!
   TBranch        *b_Diphoton_LeadEt;   //!
   TBranch        *b_Diphoton_SubLeadEt;   //!
   TBranch        *b_Diphoton_LeadEta;   //!
   TBranch        *b_Diphoton_SubLeadEta;   //!
   TBranch        *b_Diphoton_LeadPhi;   //!
   TBranch        *b_Diphoton_SubLeadPhi;   //!
   TBranch        *b_Diphoton_LeadSigIeIe;   //!
   TBranch        *b_Diphoton_SubLeadSigIeIe;   //!
   TBranch        *b_Diphoton_LeadR9;   //!
   TBranch        *b_Diphoton_SubLeadR9;   //!
   TBranch        *b_Diphoton_LeadCiCLevel;   //!
   TBranch        *b_Diphoton_SubLeadCiCLevel;   //!
   TBranch        *b_Diphoton_LeadPFCiCLevel;   //!
   TBranch        *b_Diphoton_SubLeadPFCiCLevel;   //!
   TBranch        *b_Diphoton_LeadMVAOutput;   //!
   TBranch        *b_Diphoton_SubLeadMVAOutput;   //!
   TBranch        *b_Diphoton_LeadCorrMVAOutput;   //!
   TBranch        *b_Diphoton_SubLeadCorrMVAOutput;   //!
   TBranch        *b_Diphoton_LeadTaoMVAOutput;   //!
   TBranch        *b_Diphoton_SubLeadTaoMVAOutput;   //!
   TBranch        *b_Diphoton_LeadMITPre;   //!
   TBranch        *b_Diphoton_SubLeadMITPre;   //!
   TBranch        *b_Diphoton_LeadElectronPre;   //!
   TBranch        *b_Diphoton_SubLeadElectronPre;   //!
   TBranch        *b_Diphoton_LeadisPFElectron;   //!
   TBranch        *b_Diphoton_SubLeadisPFElectron;   //!
   TBranch        *b_Diphoton_LeadisPFPhoton;   //!
   TBranch        *b_Diphoton_SubLeadisPFPhoton;   //!
   TBranch        *b_Diphoton_LeadSCEta;   //!
   TBranch        *b_Diphoton_SubLeadSCEta;   //!
   TBranch        *b_Diphoton_PassXSPreSelection;   //!
   TBranch        *b_Diphoton_PassXSMITPreSelection;   //!
   TBranch        *b_Diphoton_LeadTrkIso03;   //!
   TBranch        *b_Diphoton_LeadEcalIso03;   //!
   TBranch        *b_Diphoton_LeadHcalIso03;   //!
   TBranch        *b_Diphoton_LeadHoE;   //!
   TBranch        *b_Diphoton_SubLeadTrkIso03;   //!
   TBranch        *b_Diphoton_SubLeadEcalIso03;   //!
   TBranch        *b_Diphoton_SubLeadHcalIso03;   //!
   TBranch        *b_Diphoton_SubLeadHoE;   //!
   TBranch        *b_Diphoton_LeadIsConv;   //!
   TBranch        *b_Diphoton_SubLeadIsConv;   //!
   TBranch        *b_Diphoton_LeadHasPixSeed;   //!
   TBranch        *b_Diphoton_SubLeadHasPixSeed;   //!
   TBranch        *b_Diphoton_Leadpfiso02;   //!
   TBranch        *b_Diphoton_SubLeadpfiso02;   //!
   TBranch        *b_Diphoton_Add_NPhotons;   //!
   TBranch        *b_Diphoton_Add_PT;   //!
   TBranch        *b_Diphoton_Add_Eta;   //!
   TBranch        *b_Diphoton_Add_Phi;   //!
   TBranch        *b_Diphoton_Add_SCEta;   //!
   TBranch        *b_Diphoton_Add_IsConv;   //!
   TBranch        *b_Diphoton_Add_MVAOutput;   //!
   TBranch        *b_Diphoton_Add_CorrMVAOutput;   //!
   TBranch        *b_Diphoton_Add_SumPFISO03;   //!
   TBranch        *b_Diphoton_Add_MITPre;   //!
   TBranch        *b_Diphoton_Add_CiCLevel;   //!
   TBranch        *b_Diphoton_Add_PFCiCLevel;   //!
   TBranch        *b_Diphoton_Add_Mass;   //!
   TBranch        *b_Diphoton_Add_TaoMVAOutput;   //!
   TBranch        *b_Diphoton_Add_XSSinglePre;   //!
   TBranch        *b_Diphoton_Add_IsAlsoJet;   //!
   TBranch        *b_Diphoton_NMuons;   //!
   TBranch        *b_Diphoton_Muon_MuType;   //!
   TBranch        *b_Diphoton_Muon_Charge;   //!
   TBranch        *b_Diphoton_Muon_PT;   //!
   TBranch        *b_Diphoton_Muon_Eta;   //!
   TBranch        *b_Diphoton_Muon_Phi;   //!
   TBranch        *b_Diphoton_Muon_Ch2OverNdof;   //!
   TBranch        *b_Diphoton_Muon_NPixelHits;   //!
   TBranch        *b_Diphoton_Muon_NValidHits;   //!
   TBranch        *b_Diphoton_Muon_NMatchedChambers;   //!
   TBranch        *b_Diphoton_Muon_NValidChamberHits;   //!
   TBranch        *b_Diphoton_Muon_trkiso03;   //!
   TBranch        *b_Diphoton_Muon_ecaliso03;   //!
   TBranch        *b_Diphoton_Muon_hcaliso03;   //!
   TBranch        *b_Diphoton_Muon_pfchhadiso04;   //!
   TBranch        *b_Diphoton_Muon_pfnehadiso04;   //!
   TBranch        *b_Diphoton_Muon_pfphotiso04;   //!
   TBranch        *b_Diphoton_Muon_dbCorr;   //!
   TBranch        *b_Diphoton_Muon_TrackPTErr;   //!
   TBranch        *b_Diphoton_Muon_dz;   //!
   TBranch        *b_Diphoton_Muon_D0Vtx;   //!
   TBranch        *b_Diphoton_Muon_DZVtx;   //!
   TBranch        *b_Diphoton_NElectrons;   //!
   TBranch        *b_Diphoton_Electron_Charge;   //!
   TBranch        *b_Diphoton_Electron_PT;   //!
   TBranch        *b_Diphoton_Electron_Eta;   //!
   TBranch        *b_Diphoton_Electron_Phi;   //!
   TBranch        *b_Diphoton_Electron_SCPT;   //!
   TBranch        *b_Diphoton_Electron_SCEta;   //!
   TBranch        *b_Diphoton_Electron_SCPhi;   //!
   TBranch        *b_Diphoton_Electron_SCInd;   //!
   TBranch        *b_Diphoton_Electron_TrackInd;   //!
   TBranch        *b_Diphoton_Electron_NHitsInner;   //!
   TBranch        *b_Diphoton_Electron_Sieie;   //!
   TBranch        *b_Diphoton_Electron_SCSieie;   //!
   TBranch        *b_Diphoton_Electron_hoe;   //!
   TBranch        *b_Diphoton_Electron_detaVtx;   //!
   TBranch        *b_Diphoton_Electron_dphiVtx;   //!
   TBranch        *b_Diphoton_Electron_eopin;   //!
   TBranch        *b_Diphoton_Electron_fbrem;   //!
   TBranch        *b_Diphoton_Electron_dcot;   //!
   TBranch        *b_Diphoton_Electron_dist;   //!
   TBranch        *b_Diphoton_Electron_d0;   //!
   TBranch        *b_Diphoton_Electron_dz;   //!
   TBranch        *b_Diphoton_Electron_d0Vtx;   //!
   TBranch        *b_Diphoton_Electron_dzVtx;   //!
   TBranch        *b_Diphoton_Electron_ipdxy_ctf;   //!
   TBranch        *b_Diphoton_Electron_ipdxy_gsf;   //!
   TBranch        *b_Diphoton_Electron_tkiso03;   //!
   TBranch        *b_Diphoton_Electron_ecaliso03;   //!
   TBranch        *b_Diphoton_Electron_hcaliso03;   //!
   TBranch        *b_Diphoton_Electron_ecaliso04;   //!
   TBranch        *b_Diphoton_Electron_hcaliso04;   //!
   TBranch        *b_Diphoton_Electron_pfisocharged;   //!
   TBranch        *b_Diphoton_Electron_pfisophoton;   //!
   TBranch        *b_Diphoton_Electron_pfisoneutral;   //!
   TBranch        *b_Diphoton_Electron_MVAnontrig;   //!
   TBranch        *b_Diphoton_Electron_MVAtrig;   //!
   TBranch        *b_Diphoton_Electron_RegrEnergy;   //!
   TBranch        *b_Diphoton_Electron_ConvVtxProb;   //!
   TBranch        *b_Diphoton_Electron_PassConv;   //!
   TBranch        *b_Diphoton_NJets;   //!
   TBranch        *b_Diphoton_Jet_PT;   //!
   TBranch        *b_Diphoton_Jet_Eta;   //!
   TBranch        *b_Diphoton_Jet_Phi;   //!
   TBranch        *b_Diphoton_Jet_pfloose;   //!
   TBranch        *b_Diphoton_Jet_sloose;   //!
   TBranch        *b_Diphoton_Jet_floose;   //!
   TBranch        *b_Diphoton_Jet_cmedium;   //!
   TBranch        *b_Diphoton_Jet_smedium;   //!
   TBranch        *b_Diphoton_Jet_fmedium;   //!
   TBranch        *b_Diphoton_Jet_isGenMatched;   //!
   TBranch        *b_Diphoton_Jet_genPt;   //!
   TBranch        *b_Diphoton_Jet_genDr;   //!
   TBranch        *b_Diphoton_Jet_IfvbfMatched;   //!
   TBranch        *b_Diphoton_Jet_FullMVA;   //!
   TBranch        *b_Diphoton_Jet_SimpleMVA;   //!
   TBranch        *b_Diphoton_Jet_FullWPLevel;   //!
   TBranch        *b_Diphoton_Jet_SimpleWPLevel;   //!
   TBranch        *b_Diphoton_Jet_CutbasedWPLevel;   //!
   TBranch        *b_Diphoton_Jet_area;   //!
   TBranch        *b_Diphoton_Jet_nCharged;   //!
   TBranch        *b_Diphoton_Jet_nNeutrals;   //!
   TBranch        *b_Diphoton_Jet_dZ;   //!
   TBranch        *b_Diphoton_Jet_dRMean;   //!
   TBranch        *b_Diphoton_Jet_dR2Mean;   //!
   TBranch        *b_Diphoton_Jet_csvBtag;   //!
   TBranch        *b_Diphoton_Jet_csvMvaBtag;   //!
   TBranch        *b_Diphoton_Jet_jetProbBtag;   //!
   TBranch        *b_Diphoton_Jet_tcheBtag;   //!
   TBranch        *b_Diphoton_pfmet;   //!
   TBranch        *b_Diphoton_pfmet_phi;   //!
   TBranch        *b_Diphoton_pfmet_sumet;   //!
   TBranch        *b_Diphoton_pfmet_mEtSig;   //!
   TBranch        *b_Diphoton_pfmet_significance;   //!
   TBranch        *b_Diphoton_corrMet;   //!
   TBranch        *b_Diphoton_corrMetPhi;   //!

   READING_DIPHOTON_TREE(TTree *tree=0);
   virtual ~READING_DIPHOTON_TREE();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);

};

#endif

#ifdef READING_DIPHOTON_TREE_cxx
READING_DIPHOTON_TREE::READING_DIPHOTON_TREE(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
  if (tree == 0) {
    TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/home/miloc/mini_trees/-folder-/-file-");
    if (!f || !f->IsOpen()) {
      f = new TFile("/home/miloc/mini_trees/-folder-/-file-");
    }
    f->GetObject("DiPhotonTree",tree);
    
  }
  Init(tree);
}

READING_DIPHOTON_TREE::~READING_DIPHOTON_TREE()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t READING_DIPHOTON_TREE::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t READING_DIPHOTON_TREE::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void READING_DIPHOTON_TREE::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   event_hlt_bit = 0;
   event_hlt_path_names_HLT = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("event_hlt_n", &event_hlt_n, &b_event_hlt_n);
   fChain->SetBranchAddress("event_hlt_bit", &event_hlt_bit, &b_event_hlt_bit);
   fChain->SetBranchAddress("event_hlt_path_names_HLT", &event_hlt_path_names_HLT, &b_event_hlt_path_names_HLT);
   fChain->SetBranchAddress("event_eventID", &event_eventID, &b_event_eventID);
   fChain->SetBranchAddress("event_RunID", &event_RunID, &b_event_RunID);
   fChain->SetBranchAddress("event_Nvtx", &event_Nvtx, &b_event_Nvtx);
   fChain->SetBranchAddress("event_weight", &event_weight, &b_event_weight);
   fChain->SetBranchAddress("event_PUweight", &event_PUweight, &b_event_PUweight);
   fChain->SetBranchAddress("event_XSweight", &event_XSweight, &b_event_XSweight);
   fChain->SetBranchAddress("event_rho", &event_rho, &b_event_rho);
   fChain->SetBranchAddress("event_nPU", &event_nPU, &b_event_nPU);
   fChain->SetBranchAddress("event_processid", &event_processid, &b_event_processid);
   fChain->SetBranchAddress("event_GenGaGaFlag", &event_GenGaGaFlag, &b_event_GenGaGaFlag);
   fChain->SetBranchAddress("event_DiPhotonCiC4Level", &event_DiPhotonCiC4Level, &b_event_DiPhotonCiC4Level);
   fChain->SetBranchAddress("event_DiPhotonPreselAll", &event_DiPhotonPreselAll, &b_event_DiPhotonPreselAll);
   fChain->SetBranchAddress("event_DiPhotonPreselNoIDMVA", &event_DiPhotonPreselNoIDMVA, &b_event_DiPhotonPreselNoIDMVA);
   fChain->SetBranchAddress("event_IfBothPFElectron", &event_IfBothPFElectron, &b_event_IfBothPFElectron);
   fChain->SetBranchAddress("event_IfBothElectronPre", &event_IfBothElectronPre, &b_event_IfBothElectronPre);
   fChain->SetBranchAddress("event_DiPhotonHggPreselKine", &event_DiPhotonHggPreselKine, &b_event_DiPhotonHggPreselKine);
   fChain->SetBranchAddress("event_DiPhotonHggPresel", &event_DiPhotonHggPresel, &b_event_DiPhotonHggPresel);
   fChain->SetBranchAddress("event_DiPhotonHggCiC4", &event_DiPhotonHggCiC4, &b_event_DiPhotonHggCiC4);
   fChain->SetBranchAddress("Diphoton_CiCCatInd", &Diphoton_CiCCatInd, &b_Diphoton_CiCCatInd);
   fChain->SetBranchAddress("Diphoton_MVACatInd", &Diphoton_MVACatInd, &b_Diphoton_MVACatInd);
   fChain->SetBranchAddress("Diphoton_Mass", &Diphoton_Mass, &b_Diphoton_Mass);
   fChain->SetBranchAddress("Diphoton_PT", &Diphoton_PT, &b_Diphoton_PT);
   fChain->SetBranchAddress("Diphoton_Eta", &Diphoton_Eta, &b_Diphoton_Eta);
   fChain->SetBranchAddress("Diphoton_Phi", &Diphoton_Phi, &b_Diphoton_Phi);
   fChain->SetBranchAddress("Diphoton_VtxProb", &Diphoton_VtxProb, &b_Diphoton_VtxProb);
   fChain->SetBranchAddress("Diphoton_dmom", &Diphoton_dmom, &b_Diphoton_dmom);
   fChain->SetBranchAddress("Diphoton_dmom_wrongvtx", &Diphoton_dmom_wrongvtx, &b_Diphoton_dmom_wrongvtx);
   fChain->SetBranchAddress("Diphoton_MCMassResWeight", &Diphoton_MCMassResWeight, &b_Diphoton_MCMassResWeight);
   fChain->SetBranchAddress("Diphoton_PhotonDeltaR", &Diphoton_PhotonDeltaR, &b_Diphoton_PhotonDeltaR);
   fChain->SetBranchAddress("Diphoton_PhotonDeltaPhi", &Diphoton_PhotonDeltaPhi, &b_Diphoton_PhotonDeltaPhi);
   fChain->SetBranchAddress("Diphoton_PhotonDeltaEta", &Diphoton_PhotonDeltaEta, &b_Diphoton_PhotonDeltaEta);
   fChain->SetBranchAddress("Diphoton_ETmaxOverMass", &Diphoton_ETmaxOverMass, &b_Diphoton_ETmaxOverMass);
   fChain->SetBranchAddress("Diphoton_ETminOverMass", &Diphoton_ETminOverMass, &b_Diphoton_ETminOverMass);
   fChain->SetBranchAddress("Diphoton_NormalizedPL", &Diphoton_NormalizedPL, &b_Diphoton_NormalizedPL);
   fChain->SetBranchAddress("Diphoton_CosThetaStar", &Diphoton_CosThetaStar, &b_Diphoton_CosThetaStar);
   fChain->SetBranchAddress("Diphoton_ThetaStarDg", &Diphoton_ThetaStarDg, &b_Diphoton_ThetaStarDg);
   fChain->SetBranchAddress("Diphoton_CosDeltaPhi", &Diphoton_CosDeltaPhi, &b_Diphoton_CosDeltaPhi);
   fChain->SetBranchAddress("Diphoton_MVAOutput", &Diphoton_MVAOutput, &b_Diphoton_MVAOutput);
   fChain->SetBranchAddress("Diphoton_MVAn", &Diphoton_MVAn, &b_Diphoton_MVAn);
   fChain->SetBranchAddress("Diphoton_SumPToverJetPT", &Diphoton_SumPToverJetPT, &b_Diphoton_SumPToverJetPT);
   fChain->SetBranchAddress("Diphoton_CloestDRJet", &Diphoton_CloestDRJet, &b_Diphoton_CloestDRJet);
   fChain->SetBranchAddress("Diphoton_CosHiggsJet", &Diphoton_CosHiggsJet, &b_Diphoton_CosHiggsJet);
   fChain->SetBranchAddress("Diphoton_AlphaT", &Diphoton_AlphaT, &b_Diphoton_AlphaT);
   fChain->SetBranchAddress("Diphoton_AlphaL", &Diphoton_AlphaL, &b_Diphoton_AlphaL);
   fChain->SetBranchAddress("Diphoton_DeltaETMass", &Diphoton_DeltaETMass, &b_Diphoton_DeltaETMass);
   fChain->SetBranchAddress("Diphoton_DeltaEToSumET", &Diphoton_DeltaEToSumET, &b_Diphoton_DeltaEToSumET);
   fChain->SetBranchAddress("Diphoton_LeadIsGenMatched", &Diphoton_LeadIsGenMatched, &b_Diphoton_LeadIsGenMatched);
   fChain->SetBranchAddress("Diphoton_SubLeadIsGenMatched", &Diphoton_SubLeadIsGenMatched, &b_Diphoton_SubLeadIsGenMatched);
   fChain->SetBranchAddress("Diphoton_LeadSCInd", &Diphoton_LeadSCInd, &b_Diphoton_LeadSCInd);
   fChain->SetBranchAddress("Diphoton_SubLeadSCInd", &Diphoton_SubLeadSCInd, &b_Diphoton_SubLeadSCInd);
   fChain->SetBranchAddress("Diphoton_LeadEt", &Diphoton_LeadEt, &b_Diphoton_LeadEt);
   fChain->SetBranchAddress("Diphoton_SubLeadEt", &Diphoton_SubLeadEt, &b_Diphoton_SubLeadEt);
   fChain->SetBranchAddress("Diphoton_LeadEta", &Diphoton_LeadEta, &b_Diphoton_LeadEta);
   fChain->SetBranchAddress("Diphoton_SubLeadEta", &Diphoton_SubLeadEta, &b_Diphoton_SubLeadEta);
   fChain->SetBranchAddress("Diphoton_LeadPhi", &Diphoton_LeadPhi, &b_Diphoton_LeadPhi);
   fChain->SetBranchAddress("Diphoton_SubLeadPhi", &Diphoton_SubLeadPhi, &b_Diphoton_SubLeadPhi);
   fChain->SetBranchAddress("Diphoton_LeadSigIeIe", &Diphoton_LeadSigIeIe, &b_Diphoton_LeadSigIeIe);
   fChain->SetBranchAddress("Diphoton_SubLeadSigIeIe", &Diphoton_SubLeadSigIeIe, &b_Diphoton_SubLeadSigIeIe);
   fChain->SetBranchAddress("Diphoton_LeadR9", &Diphoton_LeadR9, &b_Diphoton_LeadR9);
   fChain->SetBranchAddress("Diphoton_SubLeadR9", &Diphoton_SubLeadR9, &b_Diphoton_SubLeadR9);
   fChain->SetBranchAddress("Diphoton_LeadCiCLevel", &Diphoton_LeadCiCLevel, &b_Diphoton_LeadCiCLevel);
   fChain->SetBranchAddress("Diphoton_SubLeadCiCLevel", &Diphoton_SubLeadCiCLevel, &b_Diphoton_SubLeadCiCLevel);
   fChain->SetBranchAddress("Diphoton_LeadPFCiCLevel", &Diphoton_LeadPFCiCLevel, &b_Diphoton_LeadPFCiCLevel);
   fChain->SetBranchAddress("Diphoton_SubLeadPFCiCLevel", &Diphoton_SubLeadPFCiCLevel, &b_Diphoton_SubLeadPFCiCLevel);
   fChain->SetBranchAddress("Diphoton_LeadMVAOutput", &Diphoton_LeadMVAOutput, &b_Diphoton_LeadMVAOutput);
   fChain->SetBranchAddress("Diphoton_SubLeadMVAOutput", &Diphoton_SubLeadMVAOutput, &b_Diphoton_SubLeadMVAOutput);
   fChain->SetBranchAddress("Diphoton_LeadCorrMVAOutput", &Diphoton_LeadCorrMVAOutput, &b_Diphoton_LeadCorrMVAOutput);
   fChain->SetBranchAddress("Diphoton_SubLeadCorrMVAOutput", &Diphoton_SubLeadCorrMVAOutput, &b_Diphoton_SubLeadCorrMVAOutput);
   fChain->SetBranchAddress("Diphoton_LeadTaoMVAOutput", &Diphoton_LeadTaoMVAOutput, &b_Diphoton_LeadTaoMVAOutput);
   fChain->SetBranchAddress("Diphoton_SubLeadTaoMVAOutput", &Diphoton_SubLeadTaoMVAOutput, &b_Diphoton_SubLeadTaoMVAOutput);
   fChain->SetBranchAddress("Diphoton_LeadMITPre", &Diphoton_LeadMITPre, &b_Diphoton_LeadMITPre);
   fChain->SetBranchAddress("Diphoton_SubLeadMITPre", &Diphoton_SubLeadMITPre, &b_Diphoton_SubLeadMITPre);
   fChain->SetBranchAddress("Diphoton_LeadElectronPre", &Diphoton_LeadElectronPre, &b_Diphoton_LeadElectronPre);
   fChain->SetBranchAddress("Diphoton_SubLeadElectronPre", &Diphoton_SubLeadElectronPre, &b_Diphoton_SubLeadElectronPre);
   fChain->SetBranchAddress("Diphoton_LeadisPFElectron", &Diphoton_LeadisPFElectron, &b_Diphoton_LeadisPFElectron);
   fChain->SetBranchAddress("Diphoton_SubLeadisPFElectron", &Diphoton_SubLeadisPFElectron, &b_Diphoton_SubLeadisPFElectron);
   fChain->SetBranchAddress("Diphoton_LeadisPFPhoton", &Diphoton_LeadisPFPhoton, &b_Diphoton_LeadisPFPhoton);
   fChain->SetBranchAddress("Diphoton_SubLeadisPFPhoton", &Diphoton_SubLeadisPFPhoton, &b_Diphoton_SubLeadisPFPhoton);
   fChain->SetBranchAddress("Diphoton_LeadSCEta", &Diphoton_LeadSCEta, &b_Diphoton_LeadSCEta);
   fChain->SetBranchAddress("Diphoton_SubLeadSCEta", &Diphoton_SubLeadSCEta, &b_Diphoton_SubLeadSCEta);
   fChain->SetBranchAddress("Diphoton_PassXSPreSelection", &Diphoton_PassXSPreSelection, &b_Diphoton_PassXSPreSelection);
   fChain->SetBranchAddress("Diphoton_PassXSMITPreSelection", &Diphoton_PassXSMITPreSelection, &b_Diphoton_PassXSMITPreSelection);
   fChain->SetBranchAddress("Diphoton_LeadTrkIso03", &Diphoton_LeadTrkIso03, &b_Diphoton_LeadTrkIso03);
   fChain->SetBranchAddress("Diphoton_LeadEcalIso03", &Diphoton_LeadEcalIso03, &b_Diphoton_LeadEcalIso03);
   fChain->SetBranchAddress("Diphoton_LeadHcalIso03", &Diphoton_LeadHcalIso03, &b_Diphoton_LeadHcalIso03);
   fChain->SetBranchAddress("Diphoton_LeadHoE", &Diphoton_LeadHoE, &b_Diphoton_LeadHoE);
   fChain->SetBranchAddress("Diphoton_SubLeadTrkIso03", &Diphoton_SubLeadTrkIso03, &b_Diphoton_SubLeadTrkIso03);
   fChain->SetBranchAddress("Diphoton_SubLeadEcalIso03", &Diphoton_SubLeadEcalIso03, &b_Diphoton_SubLeadEcalIso03);
   fChain->SetBranchAddress("Diphoton_SubLeadHcalIso03", &Diphoton_SubLeadHcalIso03, &b_Diphoton_SubLeadHcalIso03);
   fChain->SetBranchAddress("Diphoton_SubLeadHoE", &Diphoton_SubLeadHoE, &b_Diphoton_SubLeadHoE);
   fChain->SetBranchAddress("Diphoton_LeadIsConv", &Diphoton_LeadIsConv, &b_Diphoton_LeadIsConv);
   fChain->SetBranchAddress("Diphoton_SubLeadIsConv", &Diphoton_SubLeadIsConv, &b_Diphoton_SubLeadIsConv);
   fChain->SetBranchAddress("Diphoton_LeadHasPixSeed", &Diphoton_LeadHasPixSeed, &b_Diphoton_LeadHasPixSeed);
   fChain->SetBranchAddress("Diphoton_SubLeadHasPixSeed", &Diphoton_SubLeadHasPixSeed, &b_Diphoton_SubLeadHasPixSeed);
   fChain->SetBranchAddress("Diphoton_Leadpfiso02", &Diphoton_Leadpfiso02, &b_Diphoton_Leadpfiso02);
   fChain->SetBranchAddress("Diphoton_SubLeadpfiso02", &Diphoton_SubLeadpfiso02, &b_Diphoton_SubLeadpfiso02);
   fChain->SetBranchAddress("Diphoton_Add_NPhotons", &Diphoton_Add_NPhotons, &b_Diphoton_Add_NPhotons);
   fChain->SetBranchAddress("Diphoton_Add_PT", Diphoton_Add_PT, &b_Diphoton_Add_PT);
   fChain->SetBranchAddress("Diphoton_Add_Eta", Diphoton_Add_Eta, &b_Diphoton_Add_Eta);
   fChain->SetBranchAddress("Diphoton_Add_Phi", Diphoton_Add_Phi, &b_Diphoton_Add_Phi);
   fChain->SetBranchAddress("Diphoton_Add_SCEta", Diphoton_Add_SCEta, &b_Diphoton_Add_SCEta);
   fChain->SetBranchAddress("Diphoton_Add_IsConv", Diphoton_Add_IsConv, &b_Diphoton_Add_IsConv);
   fChain->SetBranchAddress("Diphoton_Add_MVAOutput", Diphoton_Add_MVAOutput, &b_Diphoton_Add_MVAOutput);
   fChain->SetBranchAddress("Diphoton_Add_CorrMVAOutput", Diphoton_Add_CorrMVAOutput, &b_Diphoton_Add_CorrMVAOutput);
   fChain->SetBranchAddress("Diphoton_Add_SumPFISO03", Diphoton_Add_SumPFISO03, &b_Diphoton_Add_SumPFISO03);
   fChain->SetBranchAddress("Diphoton_Add_MITPre", Diphoton_Add_MITPre, &b_Diphoton_Add_MITPre);
   fChain->SetBranchAddress("Diphoton_Add_CiCLevel", Diphoton_Add_CiCLevel, &b_Diphoton_Add_CiCLevel);
   fChain->SetBranchAddress("Diphoton_Add_PFCiCLevel", Diphoton_Add_PFCiCLevel, &b_Diphoton_Add_PFCiCLevel);
   fChain->SetBranchAddress("Diphoton_Add_Mass", Diphoton_Add_Mass, &b_Diphoton_Add_Mass);
   fChain->SetBranchAddress("Diphoton_Add_TaoMVAOutput", Diphoton_Add_TaoMVAOutput, &b_Diphoton_Add_TaoMVAOutput);
   fChain->SetBranchAddress("Diphoton_Add_XSSinglePre", Diphoton_Add_XSSinglePre, &b_Diphoton_Add_XSSinglePre);
   fChain->SetBranchAddress("Diphoton_Add_IsAlsoJet", Diphoton_Add_IsAlsoJet, &b_Diphoton_Add_IsAlsoJet);
   fChain->SetBranchAddress("Diphoton_NMuons", &Diphoton_NMuons, &b_Diphoton_NMuons);
   fChain->SetBranchAddress("Diphoton_Muon_MuType", Diphoton_Muon_MuType, &b_Diphoton_Muon_MuType);
   fChain->SetBranchAddress("Diphoton_Muon_Charge", Diphoton_Muon_Charge, &b_Diphoton_Muon_Charge);
   fChain->SetBranchAddress("Diphoton_Muon_PT", Diphoton_Muon_PT, &b_Diphoton_Muon_PT);
   fChain->SetBranchAddress("Diphoton_Muon_Eta", Diphoton_Muon_Eta, &b_Diphoton_Muon_Eta);
   fChain->SetBranchAddress("Diphoton_Muon_Phi", Diphoton_Muon_Phi, &b_Diphoton_Muon_Phi);
   fChain->SetBranchAddress("Diphoton_Muon_Ch2OverNdof", Diphoton_Muon_Ch2OverNdof, &b_Diphoton_Muon_Ch2OverNdof);
   fChain->SetBranchAddress("Diphoton_Muon_NPixelHits", Diphoton_Muon_NPixelHits, &b_Diphoton_Muon_NPixelHits);
   fChain->SetBranchAddress("Diphoton_Muon_NValidHits", Diphoton_Muon_NValidHits, &b_Diphoton_Muon_NValidHits);
   fChain->SetBranchAddress("Diphoton_Muon_NMatchedChambers", Diphoton_Muon_NMatchedChambers, &b_Diphoton_Muon_NMatchedChambers);
   fChain->SetBranchAddress("Diphoton_Muon_NValidChamberHits", Diphoton_Muon_NValidChamberHits, &b_Diphoton_Muon_NValidChamberHits);
   fChain->SetBranchAddress("Diphoton_Muon_trkiso03", Diphoton_Muon_trkiso03, &b_Diphoton_Muon_trkiso03);
   fChain->SetBranchAddress("Diphoton_Muon_ecaliso03", Diphoton_Muon_ecaliso03, &b_Diphoton_Muon_ecaliso03);
   fChain->SetBranchAddress("Diphoton_Muon_hcaliso03", Diphoton_Muon_hcaliso03, &b_Diphoton_Muon_hcaliso03);
   fChain->SetBranchAddress("Diphoton_Muon_pfchhadiso04", Diphoton_Muon_pfchhadiso04, &b_Diphoton_Muon_pfchhadiso04);
   fChain->SetBranchAddress("Diphoton_Muon_pfnehadiso04", Diphoton_Muon_pfnehadiso04, &b_Diphoton_Muon_pfnehadiso04);
   fChain->SetBranchAddress("Diphoton_Muon_pfphotiso04", Diphoton_Muon_pfphotiso04, &b_Diphoton_Muon_pfphotiso04);
   fChain->SetBranchAddress("Diphoton_Muon_dbCorr", Diphoton_Muon_dbCorr, &b_Diphoton_Muon_dbCorr);
   fChain->SetBranchAddress("Diphoton_Muon_TrackPTErr", Diphoton_Muon_TrackPTErr, &b_Diphoton_Muon_TrackPTErr);
   fChain->SetBranchAddress("Diphoton_Muon_dz", Diphoton_Muon_dz, &b_Diphoton_Muon_dz);
   fChain->SetBranchAddress("Diphoton_Muon_D0Vtx", Diphoton_Muon_D0Vtx, &b_Diphoton_Muon_D0Vtx);
   fChain->SetBranchAddress("Diphoton_Muon_DZVtx", Diphoton_Muon_DZVtx, &b_Diphoton_Muon_DZVtx);
   fChain->SetBranchAddress("Diphoton_NElectrons", &Diphoton_NElectrons, &b_Diphoton_NElectrons);
   fChain->SetBranchAddress("Diphoton_Electron_Charge", Diphoton_Electron_Charge, &b_Diphoton_Electron_Charge);
   fChain->SetBranchAddress("Diphoton_Electron_PT", Diphoton_Electron_PT, &b_Diphoton_Electron_PT);
   fChain->SetBranchAddress("Diphoton_Electron_Eta", Diphoton_Electron_Eta, &b_Diphoton_Electron_Eta);
   fChain->SetBranchAddress("Diphoton_Electron_Phi", Diphoton_Electron_Phi, &b_Diphoton_Electron_Phi);
   fChain->SetBranchAddress("Diphoton_Electron_SCPT", Diphoton_Electron_SCPT, &b_Diphoton_Electron_SCPT);
   fChain->SetBranchAddress("Diphoton_Electron_SCEta", Diphoton_Electron_SCEta, &b_Diphoton_Electron_SCEta);
   fChain->SetBranchAddress("Diphoton_Electron_SCPhi", Diphoton_Electron_SCPhi, &b_Diphoton_Electron_SCPhi);
   fChain->SetBranchAddress("Diphoton_Electron_SCInd", Diphoton_Electron_SCInd, &b_Diphoton_Electron_SCInd);
   fChain->SetBranchAddress("Diphoton_Electron_TrackInd", Diphoton_Electron_TrackInd, &b_Diphoton_Electron_TrackInd);
   fChain->SetBranchAddress("Diphoton_Electron_NHitsInner", Diphoton_Electron_NHitsInner, &b_Diphoton_Electron_NHitsInner);
   fChain->SetBranchAddress("Diphoton_Electron_Sieie", Diphoton_Electron_Sieie, &b_Diphoton_Electron_Sieie);
   fChain->SetBranchAddress("Diphoton_Electron_SCSieie", Diphoton_Electron_SCSieie, &b_Diphoton_Electron_SCSieie);
   fChain->SetBranchAddress("Diphoton_Electron_hoe", Diphoton_Electron_hoe, &b_Diphoton_Electron_hoe);
   fChain->SetBranchAddress("Diphoton_Electron_detaVtx", Diphoton_Electron_detaVtx, &b_Diphoton_Electron_detaVtx);
   fChain->SetBranchAddress("Diphoton_Electron_dphiVtx", Diphoton_Electron_dphiVtx, &b_Diphoton_Electron_dphiVtx);
   fChain->SetBranchAddress("Diphoton_Electron_eopin", Diphoton_Electron_eopin, &b_Diphoton_Electron_eopin);
   fChain->SetBranchAddress("Diphoton_Electron_fbrem", Diphoton_Electron_fbrem, &b_Diphoton_Electron_fbrem);
   fChain->SetBranchAddress("Diphoton_Electron_dcot", Diphoton_Electron_dcot, &b_Diphoton_Electron_dcot);
   fChain->SetBranchAddress("Diphoton_Electron_dist", Diphoton_Electron_dist, &b_Diphoton_Electron_dist);
   fChain->SetBranchAddress("Diphoton_Electron_d0", Diphoton_Electron_d0, &b_Diphoton_Electron_d0);
   fChain->SetBranchAddress("Diphoton_Electron_dz", Diphoton_Electron_dz, &b_Diphoton_Electron_dz);
   fChain->SetBranchAddress("Diphoton_Electron_d0Vtx", Diphoton_Electron_d0Vtx, &b_Diphoton_Electron_d0Vtx);
   fChain->SetBranchAddress("Diphoton_Electron_dzVtx", Diphoton_Electron_dzVtx, &b_Diphoton_Electron_dzVtx);
   fChain->SetBranchAddress("Diphoton_Electron_ipdxy_ctf", Diphoton_Electron_ipdxy_ctf, &b_Diphoton_Electron_ipdxy_ctf);
   fChain->SetBranchAddress("Diphoton_Electron_ipdxy_gsf", Diphoton_Electron_ipdxy_gsf, &b_Diphoton_Electron_ipdxy_gsf);
   fChain->SetBranchAddress("Diphoton_Electron_tkiso03", Diphoton_Electron_tkiso03, &b_Diphoton_Electron_tkiso03);
   fChain->SetBranchAddress("Diphoton_Electron_ecaliso03", Diphoton_Electron_ecaliso03, &b_Diphoton_Electron_ecaliso03);
   fChain->SetBranchAddress("Diphoton_Electron_hcaliso03", Diphoton_Electron_hcaliso03, &b_Diphoton_Electron_hcaliso03);
   fChain->SetBranchAddress("Diphoton_Electron_ecaliso04", Diphoton_Electron_ecaliso04, &b_Diphoton_Electron_ecaliso04);
   fChain->SetBranchAddress("Diphoton_Electron_hcaliso04", Diphoton_Electron_hcaliso04, &b_Diphoton_Electron_hcaliso04);
   fChain->SetBranchAddress("Diphoton_Electron_pfisocharged", Diphoton_Electron_pfisocharged, &b_Diphoton_Electron_pfisocharged);
   fChain->SetBranchAddress("Diphoton_Electron_pfisophoton", Diphoton_Electron_pfisophoton, &b_Diphoton_Electron_pfisophoton);
   fChain->SetBranchAddress("Diphoton_Electron_pfisoneutral", Diphoton_Electron_pfisoneutral, &b_Diphoton_Electron_pfisoneutral);
   fChain->SetBranchAddress("Diphoton_Electron_MVAnontrig", Diphoton_Electron_MVAnontrig, &b_Diphoton_Electron_MVAnontrig);
   fChain->SetBranchAddress("Diphoton_Electron_MVAtrig", Diphoton_Electron_MVAtrig, &b_Diphoton_Electron_MVAtrig);
   fChain->SetBranchAddress("Diphoton_Electron_RegrEnergy", Diphoton_Electron_RegrEnergy, &b_Diphoton_Electron_RegrEnergy);
   fChain->SetBranchAddress("Diphoton_Electron_ConvVtxProb", Diphoton_Electron_ConvVtxProb, &b_Diphoton_Electron_ConvVtxProb);
   fChain->SetBranchAddress("Diphoton_Electron_PassConv", Diphoton_Electron_PassConv, &b_Diphoton_Electron_PassConv);
   fChain->SetBranchAddress("Diphoton_NJets", &Diphoton_NJets, &b_Diphoton_NJets);
   fChain->SetBranchAddress("Diphoton_Jet_PT", Diphoton_Jet_PT, &b_Diphoton_Jet_PT);
   fChain->SetBranchAddress("Diphoton_Jet_Eta", Diphoton_Jet_Eta, &b_Diphoton_Jet_Eta);
   fChain->SetBranchAddress("Diphoton_Jet_Phi", Diphoton_Jet_Phi, &b_Diphoton_Jet_Phi);
   fChain->SetBranchAddress("Diphoton_Jet_pfloose", Diphoton_Jet_pfloose, &b_Diphoton_Jet_pfloose);
   fChain->SetBranchAddress("Diphoton_Jet_sloose", Diphoton_Jet_sloose, &b_Diphoton_Jet_sloose);
   fChain->SetBranchAddress("Diphoton_Jet_floose", Diphoton_Jet_floose, &b_Diphoton_Jet_floose);
   fChain->SetBranchAddress("Diphoton_Jet_cmedium", Diphoton_Jet_cmedium, &b_Diphoton_Jet_cmedium);
   fChain->SetBranchAddress("Diphoton_Jet_smedium", Diphoton_Jet_smedium, &b_Diphoton_Jet_smedium);
   fChain->SetBranchAddress("Diphoton_Jet_fmedium", Diphoton_Jet_fmedium, &b_Diphoton_Jet_fmedium);
   fChain->SetBranchAddress("Diphoton_Jet_isGenMatched", Diphoton_Jet_isGenMatched, &b_Diphoton_Jet_isGenMatched);
   fChain->SetBranchAddress("Diphoton_Jet_genPt", Diphoton_Jet_genPt, &b_Diphoton_Jet_genPt);
   fChain->SetBranchAddress("Diphoton_Jet_genDr", Diphoton_Jet_genDr, &b_Diphoton_Jet_genDr);
   fChain->SetBranchAddress("Diphoton_Jet_IfvbfMatched", Diphoton_Jet_IfvbfMatched, &b_Diphoton_Jet_IfvbfMatched);
   fChain->SetBranchAddress("Diphoton_Jet_FullMVA", Diphoton_Jet_FullMVA, &b_Diphoton_Jet_FullMVA);
   fChain->SetBranchAddress("Diphoton_Jet_SimpleMVA", Diphoton_Jet_SimpleMVA, &b_Diphoton_Jet_SimpleMVA);
   fChain->SetBranchAddress("Diphoton_Jet_FullWPLevel", Diphoton_Jet_FullWPLevel, &b_Diphoton_Jet_FullWPLevel);
   fChain->SetBranchAddress("Diphoton_Jet_SimpleWPLevel", Diphoton_Jet_SimpleWPLevel, &b_Diphoton_Jet_SimpleWPLevel);
   fChain->SetBranchAddress("Diphoton_Jet_CutbasedWPLevel", Diphoton_Jet_CutbasedWPLevel, &b_Diphoton_Jet_CutbasedWPLevel);
   fChain->SetBranchAddress("Diphoton_Jet_area", Diphoton_Jet_area, &b_Diphoton_Jet_area);
   fChain->SetBranchAddress("Diphoton_Jet_nCharged", Diphoton_Jet_nCharged, &b_Diphoton_Jet_nCharged);
   fChain->SetBranchAddress("Diphoton_Jet_nNeutrals", Diphoton_Jet_nNeutrals, &b_Diphoton_Jet_nNeutrals);
   fChain->SetBranchAddress("Diphoton_Jet_dZ", Diphoton_Jet_dZ, &b_Diphoton_Jet_dZ);
   fChain->SetBranchAddress("Diphoton_Jet_dRMean", Diphoton_Jet_dRMean, &b_Diphoton_Jet_dRMean);
   fChain->SetBranchAddress("Diphoton_Jet_dR2Mean", Diphoton_Jet_dR2Mean, &b_Diphoton_Jet_dR2Mean);
   fChain->SetBranchAddress("Diphoton_Jet_csvBtag", Diphoton_Jet_csvBtag, &b_Diphoton_Jet_csvBtag);
   fChain->SetBranchAddress("Diphoton_Jet_csvMvaBtag", Diphoton_Jet_csvMvaBtag, &b_Diphoton_Jet_csvMvaBtag);
   fChain->SetBranchAddress("Diphoton_Jet_jetProbBtag", Diphoton_Jet_jetProbBtag, &b_Diphoton_Jet_jetProbBtag);
   fChain->SetBranchAddress("Diphoton_Jet_tcheBtag", Diphoton_Jet_tcheBtag, &b_Diphoton_Jet_tcheBtag);
   fChain->SetBranchAddress("Diphoton_pfmet", &Diphoton_pfmet, &b_Diphoton_pfmet);
   fChain->SetBranchAddress("Diphoton_pfmet_phi", &Diphoton_pfmet_phi, &b_Diphoton_pfmet_phi);
   fChain->SetBranchAddress("Diphoton_pfmet_sumet", &Diphoton_pfmet_sumet, &b_Diphoton_pfmet_sumet);
   fChain->SetBranchAddress("Diphoton_pfmet_mEtSig", &Diphoton_pfmet_mEtSig, &b_Diphoton_pfmet_mEtSig);
   fChain->SetBranchAddress("Diphoton_pfmet_significance", &Diphoton_pfmet_significance, &b_Diphoton_pfmet_significance);
   fChain->SetBranchAddress("Diphoton_corrMet", &Diphoton_corrMet, &b_Diphoton_corrMet);
   fChain->SetBranchAddress("Diphoton_corrMetPhi", &Diphoton_corrMetPhi, &b_Diphoton_corrMetPhi);
   Notify();
}

Bool_t READING_DIPHOTON_TREE::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void READING_DIPHOTON_TREE::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t READING_DIPHOTON_TREE::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef READING_DIPHOTON_TREE_cxx
