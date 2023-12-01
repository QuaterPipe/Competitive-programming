def posNeg(a, b, negative):
    if not negative:
        return a * b < 0
    else:
        return a < 0 and b < 0
    
N = int(input())
for i in range(N):
    a, b, n = map(int, input().split())
    print(posNeg(a, b, n))