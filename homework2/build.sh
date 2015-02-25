#!/bin/bash

for i in *.c; do
	gcc "$i" -o "${i%.c}.out"
	x86_64-w64-mingw32-gcc "$i" -o "${i%.c}.exe"
done

