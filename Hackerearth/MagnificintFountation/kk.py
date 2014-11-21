#!/usr/bin/python
import sys
# Read input from stdin and provide input before running code

def gcd(a, b):
    """Return greatest common divisor using Euclid's Algorithm."""
    while b:      
        a, b = b, a % b
    return a

def lcm(a, b):
    """Return lowest common multiple."""
    return a * b // gcd(a, b)

test_cases = input()
for i in range(0,test_cases):
	
	no_of_fount = input()
	vec = raw_input().rstrip().split()
	arr = []

	for j in vec:
		arr.append(int(j))	
	l = 1

	for j in arr:
		l = lcm(l,j)
	
	print l%1000000007
			
sys.exit(0)
