#!/usr/bin/python

def solve(arr, n, loc, unit, d):
    if loc == n-1:
        if arr[loc]+unit >100:
            return arr[loc]/10
        else:
            return (arr[loc]+unit)/10
    else:
        val1 = (loc+1, unit)
        if unit >= 10-(arr[loc]%10):
            val2 = (loc+1, unit-(10-(arr[loc]%10)))
        else:
            val2 = (loc+1, unit)
        if val1 in d:
            first_val = d[val1]
        else:
            d[val1] = solve(arr, n, loc+1, unit, d)
            first_val = d[val1]

        if val2 in d:
            second_val = d[val2]
        else:
            d[val2] = solve(arr, n, loc+1, unit-(10-(arr[loc]%10)), d)
            second_val = d[val2]
        if(arr[loc]+(10-(arr[loc]%10))) > 100:
            third_val = arr[loc]
        else:
            third_val = arr[loc]+(10-(arr[loc]%10))

        return max(arr[loc]/10 + first_val, third_val/10 + second_val)

if __name__ == '__main__':
    arr1 = [int(x) for x in raw_input().strip().split(" ")]
    arr = [int(x) for x in raw_input().strip().split(" ")]
    n = arr1[0]
    unit = arr1[1]
    d = {}

    print solve(arr, n, 0, unit, d)
