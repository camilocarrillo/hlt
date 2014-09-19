for i in `cat $1`
do 
cd $i
hadd -f output.root outMini*
cd ../
done



