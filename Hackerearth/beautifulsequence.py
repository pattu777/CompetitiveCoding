#!/usr/bin/python

test_cases = input()
for i in range(1,test_cases+1):
	var = raw_input()
	words = var.split()
	for words in words:
		print words
