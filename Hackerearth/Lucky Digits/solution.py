#!/usr/bin/python

def is_lucky(num,arr):
	digits = []
	while num != 0 :
		digits.append(num%10)
		num /= 10
	digits = sorted(set(digits))
	if arr == digits :
		return 1
	return 0
	


test_cases = input()
arr = []
i=0
while i < test_cases:
	str = raw_input()
	arr = map(int, str.split())
	num = input()
	j=1
	while 1:
		x = num * j
		if is_lucky(x,arr) :
			print "%d = %d * %d" % x % num %j
			break
		j += 1
	i += 1

