#!/bin/bash
echo "start" >> time.txt
date >>time.txt

for j in `ls -1 ~/hlt/scripts/ggh_xa*`
do
    echo "executing $j"
    for i in `cat $j`
    do 
	echo "starting $i in $j"
	~/hlt/scripts/execute_folder.sh $i > output.$i.txt &
	echo "finishing $i in $j"
    done
    echo "sleeping 30s"
    sleep 30s
done

sleep 15s
echo "all execute jobs are finished?"
ps aux | grep miloc | grep root | grep execute
export jobs=`ps aux | grep miloc | grep root | grep execute | wc -l`
echo "jobs running : $jobs"
echo "if not please cancel this script (ctrl+c)"
echo "and when finished continue from this line on"
sleep 30s

~/hlt/scripts/hadds.sh ~/hlt/scripts/ggh_Diphoton8TeVForHLT.txt
~/hlt/scripts/ggh_harvesting.sh ~/hlt/scripts/ggh_Diphoton8TeVForHLT.txt
rm matrix -rf
mv ggh_matrix matrix
echo "stop" >> time.txt
date >>time.txt

