n, t, p = map(int, input().split())
arr = [tuple(map(int, input().split())) for i in range(n)]
sums = [0 for i in range(t)]
for j in range(n):
    for i in range(t):
        sums[i] += arr[j][i]
philipScore = sum([(n - sums[_]) for _ in range(t) if arr[p - 1][_]])
pplb4 = 0
for i in range(n):
    score = sum([(n - sums[_]) for _ in range(t) if arr[i][_]])
    if score > philipScore:
        pplb4 += 1
        continue
    elif score == philipScore and (p - 1) != i:
        if sum(arr[p - 1]) < sum(arr[i]):
            pplb4 += 1
            continue
        elif sum(arr[p - 1]) == sum(arr[i]):
            if i < p:
                pplb4 += 1

print(philipScore, pplb4 + 1)