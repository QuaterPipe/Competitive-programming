N = int(input())
T = int(input())
if T == 1:
    R, C = input().split(" ")
    print(max([int(R), int(C)]) - 1)
    exit(0)
smallest: int = 0
rows: list = []
cols: list = []
rowsDiff: list = []
colsDiff: list = []
for i in range(T):
    R, C = input().split(" ")
    rows.append(int(R))
    cols.append(int(C))
minR = min(rows)
minC = min(cols)
for i in range(T):
    rowsDiff.append(rows[i] - minR)
    colsDiff.append(rows[i] - minC)
print(rowsDiff)
print(colsDiff)
closest: list = None
for row in rowsDiff:
    for col in colsDiff:
        if row > -1 and col > -1:
            if closest == None or row > closest[0] or col > closest[1]:
                closest = [row, col]
print(min(closest))