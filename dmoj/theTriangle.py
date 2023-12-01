N = int(input())
T = [list(map(int, input().split())) for i in range(N)]
x = [0] * N
dp = [list(x) for i in range(N)]

def solve(y, x):
    if dp[y][x]:
        return dp[y][x]
    sum = T[y][x]
    if (y + 1 < N):
        sum += max(solve(y + 1, x), solve(y + 1, x + 1))
    dp[y][x] = sum
    return sum
print(solve(0, 0))