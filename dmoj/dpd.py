N, W = map(int, input().split())
w = []
v = []

tmp = [0 for i in range(10001)]
dp = [list(tmp) for i in range(102)]
for i in range(N):
    a, b = map(int, input().split())
    w.append(a)
    v.append(b)

for i in range(N):
    for j in range(W + 1):
        if j + w[i] <= W:
            dp[i + 1][j + w[i]] = max(dp[i + 1][j + w[i]], dp[i][j] + v[i])
        dp[i + 1][j] = max(dp[i + 1][j], dp[i][j])
print(dp[N][W])