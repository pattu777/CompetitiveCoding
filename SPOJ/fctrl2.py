#!/usr/bin/python

import sys

def factorial(num):
    if num in [0, 1]:
        return 1
    else:
        return num*factorial(num-1)

if __name__ == '__main__':
    with open(sys.argv[1], 'r') as fw:
        testcases = int(fw.readline())
        while testcases:
            num = int(fw.readline())
            print factorial(num)
            testcases = testcases - 1

    sys.exit(0)

