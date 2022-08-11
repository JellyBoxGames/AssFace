#!/bin/bash
for file in *
do 
	mv -v $file ${file%.c}.cpp
done;

