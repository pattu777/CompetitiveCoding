#!/usr/bin/python

if __name__ == '__main__':
    size = int(raw_input().strip())
    arr = [int(x) for x in raw_input().strip().split(" ")]
    max_num = -1
    op = []

    for i in reversed(arr):
        if i == max_num:
            op.append(1)
        elif i > max_num:
            op.append(0)
            max_num = i
        else:
            op.append(max_num-i+1)

    for x in reversed(op):
        print str(x),
