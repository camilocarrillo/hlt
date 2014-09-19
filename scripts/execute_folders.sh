
for i in `cat $1`
do 
echo "starting $i"
~/hlt/scripts/execute_folder.sh $i > output.$i.txt 
echo "finishing $i"
done
~/hlt/scripts/hadds.sh $1





