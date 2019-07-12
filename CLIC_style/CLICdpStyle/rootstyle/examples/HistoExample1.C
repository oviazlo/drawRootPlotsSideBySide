int HistoExample1()
{
  //When not using .rootrc, please uncomment the following to get the proper style.
  gROOT->ProcessLine(".L ../CLICdpStyle.C");
  CLICdpStyle();

  // create the histograms such that the name and the title are relevant. The name can be set to "" i.e. empty
  TH1D*h1 = new TH1D("histo example","Some meaningful title",100,-5,5);
  // set relevant axis titles. Especially care about units
  h1->SetYTitle("Events #[]{##/unit}");
  h1->SetXTitle("parameter #[]{unit}");

  //fill in your data
  h1->FillRandom("gaus",100000);
  h1->Draw();
  return 0;

  c1->SaveAs("HistoExample1.pdf");

  
}
