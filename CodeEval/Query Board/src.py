#!/usr/bin/python
import sys

def evaluate_Query(arr,list):
	if list[0] == "SetRow" :
		for i in range(0,256) :
			arr[int(list[1])][i] = int(list[2])

	elif list[0] == "SetCol" :
		for j in range(0,256) :
			arr[j][int(list[1])] = int(list[2])

	elif list[0] == "QueryRow" :
		sum = 0;
		for i in range(0,256) :
			sum += arr[int(list[1])][i]	
		print sum

	elif list[0] == "QueryCol" :
		sum = 0
		for j in range(0,256) :
			sum += arr[j][int(list[1])]
		print sum

arr = []
for i in range(0, 256):
	x = []
	for j in range(0, 256):
		x.append(0)
	arr.append(x)

file = open(sys.argv[1])

for line in file :
	list = line.rstrip().split()
	evaluate_Query(arr,list)

sys.exit(0)
