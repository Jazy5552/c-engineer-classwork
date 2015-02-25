#!/bin/bash

gcc *.c
if [ $? == 0 ]; then
	gcc-mingw64 *.c
fi


