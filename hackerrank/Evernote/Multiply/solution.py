#!/usr/bin/python

import sys

test_cases = input()
num = []
mult = 1
for i in range(0,test_cases) :
	x = input()
	num.append(x)
	mult *= x

for i in range(0,test_cases) :
	print int(mult/num[i])

sys.exit(0)

