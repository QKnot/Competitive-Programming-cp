def QKnot():
    n = int(input())
    s = input()
    
    data = [False] * 26
    count = 0
    for char in s:
        index = ord(char) - ord('a')
        if not data[index]:
            count += 1
            data[index] = True
    
    print(count)

def main():
    test = int(input())
    for _ in range(test):
        QKnot()

if __name__ == "__main__":
    main()
