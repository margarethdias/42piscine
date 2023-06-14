#!/bin/bash

cat /etc/passwd | awk -v FT_LINE2="$FT_LINE2" -v FT_LINE1="$FT_LINE1" -F: 'NR>1 && NR>=FT_LINE1 && NR<=FT_LINE2 {print $1}' | rev | sort -r | paste -sd, | sed 's/,/, /g' | sed 's/$/./g'
