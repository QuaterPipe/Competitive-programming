def main():
    num = int(input())
    ways: int = 0
    if num % 4 == 0:
        ways += 1
    if num % 5 == 0:
        ways += 1
    while num > 5:
        num -= 5
        if num % 4 == 0:
            ways += 1
    print(ways)

main()