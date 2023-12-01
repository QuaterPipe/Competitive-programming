M = int(input())
N = int(input())
K = int(input())
lines = []
rows = [False for i in range(M + 1)]
columns = [False for i in range(N + 1)]
for i in range(K):
    lines.append(input().split())
    
for pair in lines:
    if pair[0] == "R":
        rows[int(pair[1])] = not rows[int(pair[1])]
    else:
        columns[int(pair[1])] = not columns[int(pair[1])]
sum = 0
for i in range(1, M + 1):
    for j in range(1, N + 1):
        if rows[i] ^ columns[j]:
            sum += 1

print(sum)