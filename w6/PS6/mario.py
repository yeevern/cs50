def get_height():
    while True:
        try:
            n = int(input("Height: "))
            if n > 0 and n < 9:
                break
        except ValueError:
            print("It must be  positive integer between 1 and 8, inclusive")
    return n

def mario():
    n = get_height()
    for row in range(1,n+1):
        for space in range(n-row,0,-1):
            print(" ", end="")
        for hash in range(1,row+1):
            print("#", end="")
        print("  ", end="")
        for hash2 in range(1,row+1):
            print("#", end="")
        print()

mario()