#!/bin/bash

rm $1 -rf 
mkdir $1
cd $1
cp ~/hlt/macros/execute.C . 
cat ../template/head.txt ../template/cuts.txt ../template/tail.txt > ../template/READING_DIPHOTON_TREE.C

for file in `ls -1 /home/miloc/mini_trees_3/$1/datastore/Higgs8TeVForHLT/$1`
do
cat ~/hlt/macros/READING_DIPHOTON_TREE3.h | sed -e "s|-folder-|$1|g" -e "s|-file-|$file|g"> READING_DIPHOTON_TREE.h
cat ../template/READING_DIPHOTON_TREE.C | sed -e "s|-fileout-|outMini$file|g"> READING_DIPHOTON_TREE.C
root -b execute.C
done

cd ../



