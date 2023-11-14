#!/bin/bash

# FT_LINE1=7
# FT_LINE2=15

cat /etc/passwd | \
grep -v '^#' | \
sed -n '2~2p' | \
cut -d ':' -f 1 | \
rev | \
sort -r | \
awk -v start="$FT_LINE1" -v end="$FT_LINE2" 'NR>=start && NR<=end {printf $0", "}' | \
sed 's/, $/./'
