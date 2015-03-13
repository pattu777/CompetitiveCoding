#!/usr/bin/python

import sys

cache = {0:0, 1:1}

def fib(x):
    if x in cache:
        return cache[x]
    else:
        val = fib(x-1) + fib(x-2)
        cache[x] = val
    return cache[x]

def memoize(f):
    cache = {}
    return lambda *args: cache[args] if args in cache else cache.update({args: f(*args)}) or cache[args]

@memoize
def fib_decorator(n):
    return n if n < 2 else fib(n-2) + fib(n-1)

def get_fib_sum(a, b):
    fib1 = fib_decorator(a)
    fib2 = fib_decorator(a+1)
    val = ((b-a)*fib1) + ((b-a+1)*fib2)


    #for i in xrange(a, b+1):
     #   s += (fib_decorator(i)%1000000007)
    return val%1000000007

if __name__ == '__main__':
    tcase = int(raw_input())
    while tcase:
        num = [int(x) for x in raw_input().split()]
        print get_fib_sum(num[0], num[1])
        tcase -= 1
    sys.exit(0)

