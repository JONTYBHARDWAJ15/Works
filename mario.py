from cs50 import get_int

def main():
    while True:
        print("Height: ", end = "")
        height = get_int()
        if height >= 0 and height <= 8:
            break
        return height

    for i in range(height):
        for j in range(height - i - 1):
            print(" ", end = "")
        for k in range(i+2):
            print("#", end = "")
        print("")

if __name__ == "__main__":
    main()
