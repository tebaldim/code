#!/bin/bash

my_year=2012
my_month=2
firstday=1
lastday=29

for (( i=$firstday; i<=$lastday; i++ ))
do
	my_date=$(printf "%d-%02d-%02d" $my_year $my_month $i);
	echo "$my_date"
done
