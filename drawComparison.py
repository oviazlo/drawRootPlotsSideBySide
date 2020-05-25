#  Compare different plots from the same
#  OR
#  compare the same plot from different files

#!/bin/python
import glob, os, ROOT, math, sys
from ROOT import TCanvas, TGraph, TLegend, TF1, TH1, TH1F, TLatex, TText
from ROOT import gROOT, gStyle
from array import array
from math import tan
ROOT.gROOT.LoadMacro(os.path.join(os.path.dirname(__file__), "CLIC_style/CLICdpStyle/rootstyle/CLICdpStyle.C+"))
ROOT.CLICdpStyle()

from classesForDrawComparison import helperClass, readYamlFile, notUsedAttribute

def main(yamlFile):

    print ("")
    gStyle.SetOptStat(0)

    globalCfg = readYamlFile(yamlFile)
    #  print(globalCfg)

    for cfgIterator in globalCfg:
        cfg = globalCfg[cfgIterator]
        print('\n[INFO]\tProcess plot: %s' % (cfgIterator))

        if ("silentMode" in cfg):
            gROOT.SetBatch(cfg['silentMode'])
            cfg.pop('silentMode')

        #********************************************************************************
        # create objects to draw
        #********************************************************************************
        classHelper = helperClass()
        hists, funcs = classHelper.getProcessedHists(cfg)
        leg = classHelper.getLegend(hists, cfg)
        canvas = classHelper.getCanvas(cfg)
        labels = classHelper.getTextLabels(hists,cfg)
        labels += classHelper.getLatexLabels(hists,cfg)
        funcs += classHelper.getTF1s(cfg)

        print("# of labels to be drawn: %d" % (len(labels)))

        #********************************************************************************
        # Draw Everything
        #********************************************************************************
        if ("drawOption" not in cfg):
            cfg['drawOption'] = ""
        if (("sameDrawOption" not in cfg) and ("drawOption" in cfg)):
            cfg['sameDrawOption'] = cfg['drawOption']

        hists[0].Draw(cfg['drawOption'])
        for i in range(1,len(hists)):
            hists[i].Draw(cfg['sameDrawOption']+"same")
        cfg.pop('drawOption')
        cfg.pop('sameDrawOption')

        if leg:
            leg.Draw("same")

        for iLabel in labels:
            iLabel.Draw("same")

        for iFunc in funcs:
            iFunc.Draw("same")

        #********************************************************************************
        # Save plots
        #********************************************************************************
        print ("")
        if not os.path.exists("pictures/"):
            os.makedirs("pictures/")
        outHistName = cfgIterator
        if ("histNamePrefix" in cfg):
            outHistName = cfg['histNamePrefix'] + outHistName
            cfg.pop('histNamePrefix')
        if ("savePictDir" in cfg):
            pythonFileDir = os.path.dirname(os.path.realpath(__file__))
            outHistName = cfg['savePictDir'] + '/' + outHistName
            if not os.path.exists("pictures/"+cfg['savePictDir']):
                os.makedirs("pictures/"+cfg['savePictDir'])
            cfg.pop('savePictDir')
        canvas.SaveAs("pictures/"+outHistName+".png")
        canvas.SaveAs("pictures/"+outHistName+".pdf")
        #  canvas.SaveAs("pictures/"+outHistName+".eps")
        #  canvas.SaveAs("pictures/"+outHistName+".C")

        #********************************************************************************
        # Check for typos in yaml files
        #********************************************************************************
        if (len(cfg)!=0):
            print("\nNot used attributes:")
            print(cfg)
            print("")
            raise notUsedAttribute("there are not used attributes in the yml file. See above!")


#********************************************************************************
#********************************************************************************
#********************************************************************************
if __name__ == "__main__":
    if len(sys.argv)==2:
        print ("\n[INFO]\tRead config from: {0}".format(sys.argv[1]))
        main(sys.argv[1])
    else:
        print ("\n[ERROR]\tPass config file to read!!! Terminating...")
        sys.exit()
