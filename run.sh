#!/bin/bash

files=$(ls tests/)

for file in $files; do
	echo "===== $file ======"
	./monty "tests/""$file"""
	echo "===== $file ======"
	echo -e "\n\n"

done
