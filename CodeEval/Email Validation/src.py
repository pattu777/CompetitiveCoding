#!/usr/bin/python
import sys
import re

foo = open(sys.argv[1]) 

for line in foo :
	str = line.strip()
	if str:
		is_match = re.match(r'\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\.[A-Z]{2,4}\b',str,re.I)
		#is_match = re.match( r'\w{1,}@\w{1,}.com' , str , re.I | re.M )
		if is_match :
			print "true"
		else :
			print "false"

foo.close()
exit(0)
