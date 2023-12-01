N, L, S = map(int, input().split())
ranges = []
for i in range(N):
    a, b, s = map(int, input().split())
    for j in ranges:
        if j[0] <= a <= j[1]:
            