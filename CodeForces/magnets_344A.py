if __name__ == '__main__':
    num = int(raw_input())
    count = 1
    str = raw_input()
    for x in range(0, num-1):
        line = raw_input()
        if (str.endswith("1") and line.startswith("1")) or (str.endswith("0") and line.startswith("0")):
            count += 1
            str = line
        else:
            str = str + line

    print count
