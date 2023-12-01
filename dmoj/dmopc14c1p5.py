import math
from collections import deque
R, C = map(int, input().split())
start = tuple(map(int, input().split()))
end = tuple(map(int, input().split()))
arr = [list(input()) for i in range(R)]
T = int(input())
tps = [tuple(map(int, input().split())) for i in range(T)]
b = [False for i in range(C)]
visited = [list(b) for i in range(R)]
minDis = math.inf
endDis = math.inf

for tp in tps:
    arr[tp[0]][tp[1]] = 'T'

def bfs(r, c):
    global endDis
    global minDis
    queue = deque([(r, c, 0)])
    while queue:
        r, c, lvl = queue.popleft()
        if r < 0 or c < 0 or r >= R or c >= C or visited[r][c] or arr[r][c] == "X":
            continue
        visited[r][c] = True
        if arr[r][c] == 'T':
            minDis = min(minDis, lvl)
        if (r, c) == end:
            endDis = min(endDis, lvl)
        queue.append((r - 1, c, lvl + 1))
        queue.append((r, c - 1, lvl + 1))
        queue.append((r + 1, c, lvl + 1))
        queue.append((r, c + 1, lvl + 1))

bfs(start[0], start[1])
if endDis >= minDis:
    print(endDis - minDis)
else:
    print(0)