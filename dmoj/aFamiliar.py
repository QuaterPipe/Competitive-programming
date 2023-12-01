N, M = map(int, input().split())
C = list(map(int, input().split()))
longest = 0
start = 0
end = 0
for i in range(N):
    print(start, end)
    if start + C[i] < M:
        end += 1
        start = start + C[i]
    elif start > 0:
        start = start - C[i - end] + C[i]
    longest = max(longest, end)
print(longest)