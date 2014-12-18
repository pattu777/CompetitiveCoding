#!/usr/bin/python

import sys

if __name__ == '__main__':
    tcases = int(raw_input())
    while tcases:
        ip = [int(x) for x in raw_input().split()]
        print ip[0] * ip[1]
        tcases -= 1

    sys.exit(0)

