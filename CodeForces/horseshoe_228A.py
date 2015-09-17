if __name__ == '__main__':
    num = [int(x) for x in raw_input().split(" ")]
    count = 0
    num.sort()

    for i in xrange(0, 3):
        if num[i] == num[i+1]:
            count += 1

    print count
