#!/usr/bin/python

import sys
from bisect import insort_left

def will_stop(num):
    arr = []
    while num > 1:
        if num in arr:
            print "NIE"
            return
        else:
            insort_left(arr, num)
            if num%2 == 0:
                num /= 2
            else:
                num = 3*(num+1)
    print "TAK"

if __name__ == '__main__':
    num = int(raw_input())
    will_stop(num)
    sys.exit()

