

//_______________________________________________
void padDraw(TPad* pad)
{
 pad->Draw();
// pad->SetGrid();
 //pad->SetLogy();
 pad->GetFrame()->SetFillColor(1);
}

//_______________________________________________
void zone21()
{
  const double e_x = 0.01    ;  // edge
  const double e_y = 0.01    ;  // edge
  const double s = 0.995     ;  // length
  const double lm= 0.22;      // Left   Margin of pad
  const double bm= 0.22;      // Bottom Margin of pad
  const double rm= 0.05;      // Right  Margin of pad
  
  pad1 = new TPad("pad1","This is pad1",e_x          ,        e_y  ,0.5*s-e_x  ,    s-e_y    ,0);
  pad2 = new TPad("pad2","This is pad2",0.5*s-e_x    ,        e_y  ,    s-e_x  ,    s-e_y    ,0);
  padDraw(pad1);
  pad1->SetLeftMargin(lm);
  pad1->SetRightMargin(rm);
  pad1->SetBottomMargin(bm);
  padDraw(pad2);
  pad2->SetLeftMargin(lm);
  pad2->SetRightMargin(rm);
  pad2->SetBottomMargin(bm);
}  

//_______________________________________________
void zone12()
{
  const double e_x = 0.01    ;  // edge
  const double e_y = 0.01    ;  // edge
  const double s = 0.995     ;  // length
  const double lm= 0.22;      // Left   Margin of pad
  const double bm= 0.22;      // Bottom Margin of pad
  const double rm= 0.05;      // Right  Margin of pad
  
  pad1 = new TPad("pad1","This is pad1",e_x    ,  0.5*s+e_y  ,s-e_x  ,s-e_y    ,0);
  pad2 = new TPad("pad2","This is pad2",e_x    ,        e_y  ,s-e_x  ,0.5*s-e_y,0);
  padDraw(pad1);
  pad1->SetLeftMargin(lm);
  pad1->SetRightMargin(rm);
  pad1->SetBottomMargin(bm);
  padDraw(pad2);
  pad2->SetLeftMargin(lm);
  pad2->SetRightMargin(rm);
  pad2->SetBottomMargin(bm);
}  

//_______________________________________________
void zone22()
{
  const double e = 0.001    ;  // edge
  const double s = 0.5     ;  // length
  const double lm= 0.22;      // Left   Margin of pad
  const double bm= 0.22;      // Bottom Margin of pad
  const double rm= 0.05;      // Right  Margin of pad
  
  pad1 = new TPad("pad1","This is pad1",e    ,s+e  ,s-e  ,2*s-e,0);
  pad2 = new TPad("pad2","This is pad2",s+e  ,s+e  ,2*s-e,2*s-e,0);
  pad3 = new TPad("pad3","This is pad3",e    ,e    ,s-e  ,s-e  ,0);
  pad4 = new TPad("pad4","This is pad4",s+e  ,e    ,2*s-e,s-e  ,0);
  padDraw(pad1);
  pad1->SetLeftMargin(lm);
  pad1->SetRightMargin(rm);
  pad1->SetBottomMargin(bm);
  padDraw(pad2);
  pad2->SetLeftMargin(lm);
  pad2->SetRightMargin(rm);
  pad2->SetBottomMargin(bm);
  padDraw(pad3);
  pad3->SetLeftMargin(lm);
  pad3->SetRightMargin(rm);
  pad3->SetBottomMargin(bm);
  padDraw(pad4);
  pad4->SetLeftMargin(lm);
  pad4->SetRightMargin(rm);
  pad4->SetBottomMargin(bm);
}  

//_______________________________________________
void zone32()
{
  const double e = 0.001    ;  // edge
  const double s1 = 0.333333; // length
  const double s2 = 0.5;      // length
  const double lm= 0.22;      // Left   Margin of pad
  const double bm= 0.22;      // Bottom Margin of pad
  const double rm= 0.05;      // Right  Margin of pad

  pad1 = new TPad("pad1","This is pad1",e    ,2*s1+e,s2-e  ,3*s1-e,0);
  pad2 = new TPad("pad2","This is pad2",s2+e ,2*s1+e,2*s2-e,3*s1-e,0);
  pad3 = new TPad("pad3","This is pad3",e    ,s1+e  ,s2-e  ,2*s1-e,0);
  pad4 = new TPad("pad4","This is pad4",s2+e ,s1+e  ,2*s2-e,2*s1-e,0);
  pad5 = new TPad("pad5","This is pad5",e    ,e     ,s2-e  ,s1-e  ,0);
  pad6 = new TPad("pad6","This is pad6",s2+e ,e     ,2*s2-e,s1-e  ,0);
  padDraw(pad1);
  pad1->SetLeftMargin(lm);
  pad1->SetRightMargin(rm);
  pad1->SetBottomMargin(bm);
  padDraw(pad2);
  pad2->SetLeftMargin(lm);
  pad2->SetRightMargin(rm);
  pad2->SetBottomMargin(bm);
  padDraw(pad3);
  pad3->SetLeftMargin(lm);
  pad3->SetRightMargin(rm);
  pad3->SetBottomMargin(bm);
  padDraw(pad4);
  pad4->SetLeftMargin(lm);
  pad4->SetRightMargin(rm);
  pad4->SetBottomMargin(bm);
  padDraw(pad5);
  pad5->SetLeftMargin(lm);
  pad5->SetRightMargin(rm);
  pad5->SetBottomMargin(bm);
  padDraw(pad6);
  pad6->SetLeftMargin(lm);
  pad6->SetRightMargin(rm);
  pad6->SetBottomMargin(bm);
}

//_______________________________________________
void zone33()
{
  const double e = 0.001    ; // edge
  const double s = 0.333333; // length
  const double lm= 0.22;      // Left   Margin of pad
  const double bm= 0.22;      // Bottom Margin of pad
  const double rm= 0.05;      // Right  Margin of pad

  pad1 = new TPad("pad1","This is pad1",e    ,2*s+e,s-e  ,3*s-e,0);
  pad2 = new TPad("pad2","This is pad2",s+e  ,2*s+e,2*s-e,3*s-e,0);
  pad3 = new TPad("pad3","This is pad3",2*s+e,2*s+e,3*s-e,3*s-e,0);
  pad4 = new TPad("pad4","This is pad4",e    ,s+e  ,s-e  ,2*s-e,0);
  pad5 = new TPad("pad5","This is pad5",s+e  ,s+e  ,2*s-e,2*s-e,0);
  pad6 = new TPad("pad6","This is pad6",2*s+e,s+e  ,3*s-e,2*s-e,0);
  pad7 = new TPad("pad7","This is pad7",e    ,e    ,s-e  ,s-e  ,0);
  pad8 = new TPad("pad8","This is pad8",s+e  ,e    ,2*s-e,s-e  ,0);
  pad9 = new TPad("pad9","This is pad9",2*s+e,e    ,3*s-e,s-e  ,0);
  padDraw(pad1);
  pad1->SetLeftMargin(lm);
  pad1->SetRightMargin(rm);
  pad1->SetBottomMargin(bm);
  padDraw(pad2);
  pad2->SetLeftMargin(lm);
  pad2->SetRightMargin(rm);
  pad2->SetBottomMargin(bm);
  padDraw(pad3);
  pad3->SetLeftMargin(lm);
  pad3->SetRightMargin(rm);
  pad3->SetBottomMargin(bm);
  padDraw(pad4);
  pad4->SetLeftMargin(lm);
  pad4->SetRightMargin(rm);
  pad4->SetBottomMargin(bm);
  padDraw(pad5);
  pad5->SetLeftMargin(lm);
  pad5->SetRightMargin(rm);
  pad5->SetBottomMargin(bm);
  padDraw(pad6);
  pad6->SetLeftMargin(lm);
  pad6->SetRightMargin(rm);
  pad6->SetBottomMargin(bm);
  padDraw(pad7);
  pad7->SetLeftMargin(lm);
  pad7->SetRightMargin(rm);
  pad7->SetBottomMargin(bm);
  padDraw(pad8);
  pad8->SetLeftMargin(lm);
  pad8->SetRightMargin(rm);
  pad8->SetBottomMargin(bm);
  padDraw(pad9);
  pad9->SetLeftMargin(lm);
  pad9->SetRightMargin(rm);
  pad9->SetBottomMargin(bm);
}

//_______________________________________________
void logy_zone22()
  {      
  pad1->SetLogy();
  pad2->SetLogy();
  pad3->SetLogy();
  pad4->SetLogy();
  }

//_______________________________________________
void logy_zone32()
  {      
  pad1->SetLogy();
  pad2->SetLogy();
  pad3->SetLogy();
  pad4->SetLogy();
  pad5->SetLogy();
  pad6->SetLogy();
  }

//_______________________________________________
void logy_zone33()
  {      
  pad1->SetLogy();
  pad2->SetLogy();
  pad3->SetLogy();
  pad4->SetLogy();
  pad5->SetLogy();
  pad6->SetLogy();
  pad7->SetLogy();
  pad8->SetLogy();
  pad9->SetLogy();
  }

//_______________________________________________
void ls(char *path=0)
{
 char s[256] = "ls ";
 if (path) strcat(s,path);
 gSystem->Exec(s);
}

//_______________________________________________
void dir(char *path=0)
{
 char s[256] = "ls -alt ";
 if (path) strcat(s,path);
 gSystem->Exec(s);
}

//_______________________________________________
void pwd()
{
   printf("%s\n",gSystem->WorkingDirectory());
}

//_______________________________________________
void up()
{
 gSystem->ChangeDirectory(".."); 
 pwd();
}

//_______________________________________________
void home()
{
  gSystem->ChangeDirectory(gSystem->HomeDirectory());
  pwd();
}

//_______________________________________________
void cd(char *path=0)
{
 if (path)
   gSystem->ChangeDirectory(path);
 pwd();
}

//_______________________________________________
void bexec(char *macro)
{
  if (gROOT->IsBatch()) printf("Processing benchmark: %s\n",macro);
  TPaveText *summary = (TPaveText*)bench->GetPrimitive("TPave");
  TText *tmacro = summary->GetLineWith(macro);
  if (tmacro) tmacro->SetTextColor(4);
  bench->Modified(); bench->Update();
  
  gROOT->Macro(macro);
  
  TPaveText *summary2 = (TPaveText*)bench->GetPrimitive("TPave");
  TText *tmacro2 = summary2->GetLineWith(macro);
  if (tmacro2) tmacro2->SetTextColor(2);
  bench->Modified(); bench->Update();
}
//__________________________________________________________________
void wait()
{
  char *l;
  l = (char*) calloc (5,sizeof(char));
  printf("Hit any case to continue OR \"q\" to quit: ");
  gets(l);
  if(strcmp(l,"q")==0) exit(0);
  free(l);
}
//__________________________________________________________________
void toto(char *ficname)
{
  toto = new TFile(ficname,"read");
  toto->cd();
  toto->ls();
}
//__________________________________________________________________
// Function    : 2tree()
// Description : Cree 2 fichiers d'identificateur f1 et f2
//               Cree 2 pointeurs sur tree T1 T2
// Modif       : 11/07/00
// ________________________________________________________________
void deuxtree(char *fname1,char *Tname1,char *fname2,char *Tname2)
{
  gROOT->Reset();
  cout <<"Cette fonction : * Cree 2 pointeurs sur fichiers f1 et f2 \n";
  cout <<"                 * Cree 2 pointeurs sur tree T1 T2 \n";
  f1 = new TFile(fname1,"read");
  T1 = new TTree();
  T1 = (TTree*) f1->Get(Tname1);
  T1->SetMarkerStyle(26);
  
  f2 = new TFile(fname2,"read");
  T2 = new TTree;
  T2 = (TTree*) f1->Get(Tname1);
  T2->SetMarkerStyle(26);

  gROOT->cd();
}
