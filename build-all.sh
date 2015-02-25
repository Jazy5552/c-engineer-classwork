#!/bin/bash
workspace="/home/vnc/cworkspace"
for j in ${workspace}/homework*; do
	ls ${j}/*.c &> /dev/null
	if [ $? == 0 ]; then
		for i in ${j}/*.c; do
			unix2dos "$i" &> /dev/null
			gcc -s "$i" -o "${i%.c}.out"
			x86_64-w64-mingw32-gcc -s "$i" -o "${i%.c}.exe" &> /dev/null
		done
		echo "Built $j"
		cd $j
		zip "${j##/*/}" *.c *.exe &> /dev/null
		if [ $? != 0 ]; then
			echo "Failed to package $j"
		fi
	else
		echo "Skipped $j"
	fi
done

