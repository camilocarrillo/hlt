cat higgs_hlt10.C | sed -e "s|higgs_hlt10|higgs_hlt21|g" -e "s|summary10|summary21|g" -e "s|P_1|P_2|g" -e "s|P_0|P_1|g" -e "s|Eta_0|Eta_1|g" > higgs_hlt21.C
cat higgs_hlt10.C | sed -e "s|higgs_hlt10|higgs_hlt43|g" -e "s|summary10|summary43|g" -e "s|P_1|P_4|g" -e "s|P_0|P_3|g" -e "s|Eta_0|Eta_3|g" > higgs_hlt43.C
cat higgs_hlt10.C | sed -e "s|higgs_hlt10|higgs_hlt65|g" -e "s|summary10|summary65|g" -e "s|P_1|P_6|g" -e "s|P_0|P_5|g" -e "s|Eta_0|Eta_5|g" > higgs_hlt65.C
cat higgs_hlt10.C | sed -e "s|higgs_hlt10|higgs_hlt87|g" -e "s|summary10|summary87|g" -e "s|P_1|P_8|g" -e "s|P_0|P_7|g" -e "s|Eta_0|Eta_7|g" > higgs_hlt87.C
