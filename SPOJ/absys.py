#!/usr/bin/python

import sys

if __name__ == '__main__':
    tcases = int(raw_input())
    while tcases:
        line = raw_input()
        line = raw_input().split("+= ")

        print line
        tcases -= 1

    sys.exit(0)


