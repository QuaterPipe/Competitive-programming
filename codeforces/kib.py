t: int = int(input())
for i in range(t):
    q: int = int(input())
    l: list = list(map(int, input().split(' ')))
    first: int = l[0]
    prev: int = first
    second: bool = False
    print(1, end='')
    for i in range(1, q):
        x = l[i]
        if prev > x and not second:
            if x > first:
                print(0, end='')
                continue
            second = True
            prev = x
            print(1, end='')
            continue
        if second:
            if prev > x and x != first:
                print(0, end='')
            elif (x > first):
                print(0, end='')
            else:
                print(1, end='')
                prev = x
            continue
        prev = x
        print(1, end='')
    print('')
                
