#!/bin/bash

for i in *.c; do
	#unix2dos "$i"
	gcc -s "$i" -lm -o "${i%.c}.out"
	x86_64-w64-mingw32-gcc -s "$i" -o "${i%.c}.exe" &> /dev/null
done

