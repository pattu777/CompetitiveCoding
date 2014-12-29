#!/usr/bin/python

import sys

fib_cache = {}

def fib_twist_recur(num):
    if num < 2:
        return num
    else:
        return num*factorial(num-1)

def fib_twist(num):
    global fib_cache
    if num < 2:
        return num
    elif num in fib_cache:
        return fib_cache[num]

    ret = fib_twist(num - 1) + fib_twist(num - 2) + (num-1)
    fib_cache[num] = ret
    return ret

def dp_fib_twist(num):
    arr = [0, 1]
    while len(arr) <= num:
        arr.append(arr[-1] + arr[-2] + len(arr)-1)
    return arr[num]

if __name__ == '__main__':
    tcase = int(raw_input())
    while tcase:
        nums = [int(x) for x in raw_input().split()]
        print dp_fib_twist(nums[0]) % nums[1]
        tcase -= 1

    sys.exit(0)

