N = int(input())
mountains = [int(x) for x in input().split()]

tmp = [0 for x in range(5001)]
midpoints = [list(tmp) for x in range(5001)]
answers = []

for i in range(N + 1):
    for j in range(N):
        if i % 2 == 1:
            if j - i >= 0 and j + i < N:
                midpoints[j][i] += abs(mountains[j - i] - mountains[j + i])
            if i - 2 >= 0:
                midpoints[j][i] += midpoints[j][i - 2]
        else:
            if j - 1 >= 0 and j + i + 1 < N:
                midpoints[j][i] += abs(mountains[j - i] - mountains[j + i + 1])
            if i - 2 >= 0:
                midpoints[j][i] += midpoints[j][i - 2]
            elif j + 1 < N:
                midpoints[j][i] = abs(mountains[j] - mountains[j + 1])
    print(midpoints[i][:N])
