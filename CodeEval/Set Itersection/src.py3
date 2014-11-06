#!/usr/bin/python3
import sys

foo = open(sys.argv[1])
for lines in foo :
	l = [];l1 = [];l2 = [];s1 = [];s2 = [];
	l = lines.rstrip().split(";")
	l1 = l[0].split(",")
	l2 = l[1].split(",")
	
	for i in l1 :
		s1.append(int(i))
	for i in l2 :
		s2.append(int(i))
	
	upp_limit = max(max(s1),max(s2))
	arr = [0]*(upp_limit+1)

	for i in s1:
		arr[i] += 1
	for j in s2:
		arr[j] += 1
	
	for i in range(0,len(arr)) :
		if arr[i] > 1 :
			print(i, end=","),
	print()
		
sys.exit(0)
