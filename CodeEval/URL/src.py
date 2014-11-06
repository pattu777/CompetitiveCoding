#!/usr/bin/python
import urlparse
import sys
import urllib
from types import *

for line in open(sys.argv[1]) :

	o=line.rstrip().split(";")
	str1 = urlparse.urlparse(o[0])
	str2 = urlparse.urlparse(o[1])
	res = 0
	
	if (str1.scheme.lower() != str2.scheme.lower()) or (str1.hostname.lower() != str2.hostname.lower()) or (urllib.url2pathname(str1.path) != urllib.url2pathname(str2.path)) :
		print "False"
		break
		
	elif str2.port == None :
		if str1.port != 80 :
			print "False"
			break

	elif str1.port == None :
		if str2.port != 80 :
			print "False"
			break

	print "True"

sys.exit(0)

