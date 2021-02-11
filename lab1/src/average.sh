#!/bin/bash

echo "Input numbers, to exit input -1"
a=0
av=0
i=0
count=0
var=0
b=-1
while [ $var -ne $b ]
do
read var
av=$av+$var
count+=$1
done
av=$av/$count
echo "$count"




