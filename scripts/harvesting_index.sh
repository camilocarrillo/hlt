for i in `cat $1`
do 
echo harvesting $i
cd $i
cat ../../template/index.html | sed -e "s|-folder-|$i|g" > index.html
cd ../
done

