#!/usr/bin/python
import sys

if __name__ == '__main__':
    tcase = 10
    while tcase:
        x = int(raw_input())
        y = int(raw_input())
        diff = (x-y)/2
        print diff+y
        print diff
        tcase -= 1

    sys.exit(0)
