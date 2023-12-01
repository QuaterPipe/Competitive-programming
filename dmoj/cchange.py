x = int(input())
N = int(input())
coins = [int(input()) for i in range(N)]
dp = [0 for i in range(10001)]

for i in range(1, x + 1):
    for c in coins:
        if i - c >= 0:
            if dp[i] == 0:
                dp[i] = dp[i - c] + 1
                continue
            dp[i] = min(dp[i], dp[i - c] + 1)

print(dp[x])