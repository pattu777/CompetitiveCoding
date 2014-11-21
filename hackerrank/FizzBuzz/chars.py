#!/usr/bin/python
import sys
import os
from stat import *

def count_characters(line) :
	count=0
	for i in line:
		count += 1
	return count	

def count_words(line) :
	count = 0
	list = line.split()
	for i in list :
		count += 1
	return count

#str = raw_input()
count = 0
no_of_chars = 0
no_of_words = 0
for line in open(sys.argv[1]) :
	count += 1
	no_of_chars += count_characters(line)
	no_of_words += count_words(line)
	

#print count
print no_of_chars
#print no_of_words
#list = os.stat(sys.argv[1])
#print list[ST_UID]
#print list[ST_GID]
#print list[ST_MTIME]

exit(0)
