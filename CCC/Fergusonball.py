N: int = int(input())
starCount: int = 0
for i in range(N):
    points: int = int(input())
    fouls: int = int(input())
    if (points * 5 - fouls * 3 > 40):
        starCount += 1
print(starCount, end='')
if starCount == N:
    print("+")
else:
    print("\n")