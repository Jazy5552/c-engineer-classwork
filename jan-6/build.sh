#!/bin/bash

gcc *.c
if [ $? == 0 ]; then
	x86_64-w64-mingw32-gcc *.c
fi


