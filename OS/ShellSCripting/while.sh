#!/bin/bash
i=1
read -p "enter the number" n
while [ $i -le $n ]
do
	echo "Welcome $i times."
	i=$((i+1)) 	 
done
