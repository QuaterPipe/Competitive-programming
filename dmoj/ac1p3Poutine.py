N, T = map(int, input().split())
orders = [0 for i in range(100001)]
poutines = [tuple(map(int, input().split())) for i in range(N)]
for i in range(N):
    orders[i] = poutines[i][0]
sum = 0
for i in range(T):
    maxInd = 0
    mx = 0
    for ind, j in enumerate(orders):
        if orders[ind] > mx:
            mx = j
            maxInd = ind
    sum = (sum + mx) % 998244353
    orders[maxInd] = max(0, orders[maxInd] - poutines[maxInd][1])
print(sum)
    