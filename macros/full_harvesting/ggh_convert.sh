cat full_harvesting/higgs_hlt10.C | grep -v "tth" | grep -v "wzh" | grep -v "vbf" | sed -e "s|higgs_hlt10|ggh_higgs_hlt10|g" > ggh_higgs_hlt10.C
cat full_harvesting/higgs_hlt21.C | grep -v "tth" | grep -v "wzh" | grep -v "vbf" | sed -e "s|higgs_hlt21|ggh_higgs_hlt21|g" > ggh_higgs_hlt21.C
cat full_harvesting/higgs_hlt43.C | grep -v "tth" | grep -v "wzh" | grep -v "vbf" | sed -e "s|higgs_hlt43|ggh_higgs_hlt43|g" > ggh_higgs_hlt43.C
cat full_harvesting/higgs_hlt65.C | grep -v "tth" | grep -v "wzh" | grep -v "vbf" | sed -e "s|higgs_hlt65|ggh_higgs_hlt65|g" > ggh_higgs_hlt65.C
cat full_harvesting/higgs_hlt87.C | grep -v "tth" | grep -v "wzh" | grep -v "vbf" | sed -e "s|higgs_hlt87|ggh_higgs_hlt87|g" > ggh_higgs_hlt87.C
cat full_harvesting/matrix.C | grep -v "tth" | grep -v "wzh" | grep -v "vbf" | sed -e "s|matrix|ggh_matrix|g" > ggh_matrix.C
