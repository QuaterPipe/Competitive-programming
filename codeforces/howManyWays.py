
memo = {}
def solve(sum, coins):
    memo[0] = 1
    count = 0
    for i in range(1, sum + 1):
        memo[i] = 0
        for c in coins:
            subp = i - c
            if subp < 0:
                continue
            memo[i] = memo[i] + memo[subp]
    return memo[sum]

M = int(input())
coins = list(map(int, input().split()))
print(solve(M, coins))

