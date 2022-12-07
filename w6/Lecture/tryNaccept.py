def main():
    height = get_height()
    for i in range(height):
        print("#")

def get_height():
    while True:
        try:
            n = int(input("Height: "))
            if n > 0:
                break  # break out of loop (not break out of try)
        except ValueError:
            print("That's not an integer!")
    return n

main()
wget https://cdn.cs50.net/2021/fall/labs/6/world-cup.zip