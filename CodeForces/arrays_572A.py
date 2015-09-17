#!/usr/bin/python -w

def arr_exists(arr1, cut_a, size_a, arr2, cut_b, size_b):
    pos1 = size_a - 1;
    pos2 = 0;
    while pos1>=0 and pos2<size_b:
        if arr1[pos1] > arr2[pos2]:
            break
        pos1 -= 1
        pos2 += 1

    if (pos1+1)>=cut_a and (size_b-pos2)>=cut_b:
        return True
    else:
        return False

if __name__ == '__main__':
    #line = raw_input()
    #size = [int(x) for x in line.split()]
    size_a = 3#size[0]
    size_b = 3#size[1]

    #line = raw_input()
    #cut = [int(x) for x in line.split()]
    cut_a = 2#size[0]
    cut_b = 1#size[1]

    #line = raw_input()
    arr1 = [1,2,3]#[int(x) for x in line.split()]

    #line = raw_input()
    arr2 = [3,4,5]#[int(x) for x in line.split()]

    #print arr1, "\t", size_a, "\t", cut_a
    #print arr2, "\t", size_b, "\t", cut_b

    if arr_exists(arr1, cut_a, size_a, arr2, cut_b, size_b):
        print "YES"
    else:
        print "NO"
