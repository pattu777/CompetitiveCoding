#!/usr/bin/python
import sys
import math

def is_pall(x):
	i = 0
	list1 = []
	list2 = []
	while x!=0 :
		list.append(x%10)
		x /= 10
	list2 = list1
	if list1 == list2.reverse() :
		return 1
	else:
		return 0

	
foo = open(sys.argv[1])
out = open("new.txt","w")
test_cases = input()
for i in range(1,test_cases+1):
	var = raw_input().rstrip().split()
	low = int(var[0])
	high = int(var[1])
	count = 0
	for j in range(math.sqrt(low),math.sqrt(high+1)+1):
		num = math.pow(j,2)
		if is_pall(num) and is_pall(j) and (num>=vec[0]) and (num<=vec[1]) :
			count += 1
	
	print count
	#out.write("Case #%d: %d" %d i,count)
sys.exit(0)
