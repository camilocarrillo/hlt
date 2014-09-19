for i in `cat $1`
do 
echo harvesting $i
cd $i
cp ~/hlt/macros/make_up.C . 
root -b make_up.C
cat ../../template/index.html | sed -e "s|-folder-|$i|g" > index.html
cd ../
done

~/hlt/scripts/higgs_hlt.sh

