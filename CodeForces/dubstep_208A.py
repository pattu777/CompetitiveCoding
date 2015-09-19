if __name__ == "__main__":
    line = raw_input()
    str = line.split("WUB")
    out = ""
    for x in str:
        if x is not '':
            out += (x + " ")

    print out