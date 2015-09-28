#!/ur/bin/python

if __name__ == '__main__':
    line = raw_input().strip()
    op = ""
    for x in line:
        if (x > '4' or x is '0') and (x is not '9'):
            op += str(int('9') - int(x) + int('0'))
        else:
            op += x

    print op
