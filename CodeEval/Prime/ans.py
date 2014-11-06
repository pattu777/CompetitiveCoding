#!/usr/bin/python
import sys

def eratosthenes(n):
    multiples = []
    for i in xrange(2, n+1):
        if i not in multiples:
	    sys.stdout.softspace=0
            print "%d," % i,
            for j in xrange(i*i, n+1, i):
                multiples.append(j)

test_cases = open(sys.argv[1], 'r')
for test in test_cases:
	str = test.strip()
	if str:
		var = int (str)
		eratosthenes(var)
		print "\n",

test_cases.close()
sys.exit(0)
