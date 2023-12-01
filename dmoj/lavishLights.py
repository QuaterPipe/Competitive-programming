N, Q = map(int, input().split(" "))
lights = map(int, input().split(" "))

for i in range(Q):
    t = int(input())
    ind = -1
    for i, l in enumerate(lights):
        if not (t % l == 0):
            ind = i + 1
            break
    print(ind)