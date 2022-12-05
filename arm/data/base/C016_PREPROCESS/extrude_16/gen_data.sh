#!/usr/bin/env bash
#

mkdir -p $DEST/data/$1/$2
rm -Rf $DEST/data/$1/$2/*

cd $DATAROOT/BENCH_$2/DATA
$3 run

mv $DATAROOT/BENCH_$2/RESU/extrude_$4 $DEST/data/$1/$2
rm -Rf $DATAROOT/BENCH_$2/RESU

in=$(grep "Number of cells:" $DEST/data/$1/$2/extrude_$4/listing | grep -Eo '[+-]?[0-9]+([.][0-9]+)?' | head -n1)
out=$(grep "Number of cells:" $DEST/data/$1/$2/extrude_$4/listing | grep -Eo '[+-]?[0-9]+([.][0-9]+)?' | tail -n1)
printf "input cells: $in\noutput cells: $out\n\n" > $DEST/data/$1/$2/cells.info
