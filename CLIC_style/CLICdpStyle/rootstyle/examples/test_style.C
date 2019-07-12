#include "TROOT.h"
#include "TLorentzVector.h"
#include <TPad.h>
#include <TString.h>
#include <TCanvas.h>
#include <TAxis.h>
#include <TH1F.h>
#include <TLatex.h>
#include <TFile.h>
#include <TF1.h>
#include <TLegend.h>
#include <math.h> 
#include <vector>
#include <fstream>
#include <string>

#include "../CLICdpStyle.C" //include the path to your file

#include<iostream>
using namespace std;




void test_style(){

  CLICdpStyle();
  

  TCanvas* ct1 = new TCanvas("ct1","Test Plot");

  TLegend *leg = new TLegend();
  leg = new TLegend(0.68, 0.78, 0.85, 0.88);
  leg->SetTextSize(0.04);
 
 
  int nbins = 50; 
  TH1D* h_1 = new TH1D("h_1","h_1", nbins, -10., 8.);
  h_1->FillRandom("gaus",500);
  h_1->SetLineColor(color1);
  h_1->GetXaxis()->SetTitle("x title");
  h_1->GetYaxis()->SetTitle("y title");
  h_1->DrawCopy("hist");

  leg->AddEntry(h_1,"hist 1","l");

  ct1->Update();

  TH1D* h_2 = new TH1D("h_2","h_2", nbins, -10., 8.);
  h_2->FillRandom("gaus",500);

  int shift = 15;
  for (int i=1; i<=nbins; i++) {
    h_2->SetBinContent(i,h_2->GetBinContent(i+shift));
    h_2->Scale(0.99);
  }
  h_2->SetLineColor(color2);
  h_2->DrawCopy("histsame");

  leg->AddEntry(h_2,"hist 2","l");

  TH1D* h_3 = new TH1D("h_3","h_3", nbins, -10., 8.);
  h_3->FillRandom("gaus",500);

  shift = 11;
  for (int i=1; i<=nbins; i++) {
    h_3->SetBinContent(i,h_3->GetBinContent(i+shift));
    h_3->Scale(0.99);
  }
  h_3->SetLineColor(color3);
  h_3->DrawCopy("histsame");

  leg->AddEntry(h_3,"hist 3","l");

  TH1D* h_4 = new TH1D("h_4","h_4", nbins, -10., 8.);
  h_4->FillRandom("gaus",500);

  shift = 7;
  for (int i=1; i<=nbins; i++) {
    h_4->SetBinContent(i,h_4->GetBinContent(i+shift));
    h_4->Scale(0.995);
  }
  h_4->SetLineColor(color4);
  h_4->DrawCopy("histsame");

  leg->AddEntry(h_4,"hist 4","l");

  TH1D* h_5 = new TH1D("h_5","h_5", nbins, -10., 8.);
  h_5->FillRandom("gaus",500);

  shift = 3;
  for (int i=1; i<=nbins; i++) {
    h_5->SetBinContent(i,h_5->GetBinContent(i+shift));
    h_5->Scale(0.998);
  }
  h_5->SetLineColor(color5);
  h_5->DrawCopy("histsame");

  leg->AddEntry(h_5,"hist 5","l");

  TH1D* h_6 = new TH1D("h_6","h_6", nbins, -10., 8.);
  h_6->FillRandom("gaus",500);

  shift = -5;
  for (int i=nbins; i>=1; i--) {
    if(i+shift>0){
      h_6->SetBinContent(i,h_6->GetBinContent(i+shift));
    }
    h_6->Scale(1.);
  }
  h_6->SetLineColor(color6);
  h_6->DrawCopy("histsame");

  leg->AddEntry(h_6,"hist 6","l");

  TH1D* h_7 = new TH1D("h_7","h_7", nbins, -10., 8.);
  h_7->FillRandom("gaus",500);

  shift = -9;
  for (int i=nbins; i>=1; i--) {
    if(i+shift>0){
       h_7->SetBinContent(i,h_7->GetBinContent(i+shift));
    }
    h_7->Scale(0.995);
  }
  h_7->SetLineColor(color7);
  h_7->DrawCopy("histsame");

  leg->AddEntry(h_7,"hist 7","l");

  TH1D* h_8 = new TH1D("h_8","h_8", nbins, -10., 8.);
  h_8->FillRandom("gaus",500);

  shift = -13;
  for (int i=nbins; i>=1; i--) {
    if(i+shift>0){
       h_8->SetBinContent(i,h_8->GetBinContent(i+shift));
    }
    h_8->Scale(0.99);
  }
  h_8->SetLineColor(color8);
  h_8->DrawCopy("histsame");

  leg->AddEntry(h_8,"hist 8","l");


  leg->Draw("same");

  CLICdpLabel("work in progress");
  //CLICdpLabel("");
  //CLICdpLabel(0.20,0.935);
  //CLICdpLabel(0.20,0.935,"preliminary");
  //CLICdpLabel(0.20,0.935,"preliminary", kRed);

  ct1->Update();

  ct1->Print("plot_test.eps");
  
}

