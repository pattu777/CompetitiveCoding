if __name__ == "__main__":
    line = raw_input()
    str = line.translate(None, "{ ,}")
    print set(str)
