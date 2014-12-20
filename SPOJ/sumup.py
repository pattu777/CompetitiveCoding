#!/usr/bin/python
import sys

if __name__ == '__main__':
    t = int(raw_input())
    while t:
        n = int(raw_input())
        s = 0
        for i in range(1, n+1):
            s += i/float((i**2 + i + 1) * (i**2 -i +1))
        print float("{0:.5f}".format(s))
        t -= 1
    sys.exit(0)
