int HistoExample2()
{
  //If not using the .rootrc provided, please use the following to set the style:
  gROOT->ProcessLine(".L ../CLICdpStyle.C");
  CLICdpStyle();

  TCanvas*c1 = new TCanvas("c1","c1");

  // create the histograms such that the name and the title are relevant. The name can be set to "" i.e. empty
  // The title can also be put to "" if, and only if, the content of the axis labeling is clear enough
  TH1D*h1 = new TH1D("Signal","Some meaningful title",100,-5,5);
  TH1D*h2 = new TH1D("Background","Some meaningful title",100,-5,5);
  // set relevant axis titles. Especially care about units
  h1->SetYTitle("Events #[]{##/unit}");
  h1->SetXTitle("parameter #[]{unit}");
 
  //when dealing with 2 or more histograms, use colors that are separable, even in B&W: NO GREEN NOR YELLOW!
  h1->SetLineColor(kRed);
  

  // set relevant axis titles. Especially care about units
  h2->SetYTitle("Events #[]{##/unit}");
  h2->SetXTitle("parameter #[]{unit}");
  h2->SetLineColor(kBlue);

  //use different line styles for the different contribution as it helps when B&W print
  h2->SetLineStyle(2);
  


  // make the hitogram line visible: remember that people will print mostly in B&W, so make the line size 2
  //h1->SetLineWidth(2);
  TF1*g1 = new TF1("g1","gaus",-5,5);
  g1->SetParameter(0,10000);
  g1->SetParameter(1,-1);
  g1->SetParameter(2,1);
  TF1*g2 = new TF1("g2","gaus",-5,5);
  g2->SetParameter(0,10000);
  g2->SetParameter(1,1);
  g2->SetParameter(2,1);
  //fill in you data
  h1->FillRandom("g1",100000);
  h2->FillRandom("g2",100000);


  h1->Draw();
  //second histogram's stat box must also appear if a comparison is to be made: use sames instead of same.
  h2->Draw("sames");

  //Also useful to have a legend, because in picture caption, when written "signal in red and background in blue" 
  // but document is in B&W, there is no way to know which is which. Using Methods defined in CLICdpStyle.C or 
  //rootalias.C (Thanks Angela) 
  Draw2Legend(h1, h2, "Signal", "Background");

  //Make nice stat boxes that reflect the histo contents
  //  Draw2StatsBoxes(h1, h2);


  c1->Update();
  //show to screen modified version of canvas 
  c1->Modified();
  
  c1->SaveAs("HistoExample2.pdf");

  return 0;
  
}
