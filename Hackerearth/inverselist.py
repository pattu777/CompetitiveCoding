#!/usr/bin/python

def is_inverse(list):
	for i in range(len(list)):
		x = list[i]
		y = list[x-1]
		if list[y-1] != x :
			print "not inverse"
	print "inverse"	

test_cases = input()
for i in range(1,test_cases+1):
	size = input()
	str = raw_input()
	l = str.split()
	for i in range(len(l)):
		var = int (l[i])
		list[i] = var
	is_inverse(list)
