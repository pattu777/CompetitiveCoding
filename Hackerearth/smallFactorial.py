#!/usr/bin/python

def factorial(x):
	if x==1:
		return 1
	else:
		return x*factorial(x-1)

test_cases = input()
for i in range(1,test_cases+1):
	var = input()
	print factorial(var)

