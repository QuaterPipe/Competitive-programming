import sys
print = sys.stdout.write
n, x = map(int, input().split())

if not x % 2 == n % 2:
    print("-1\n")
elif n % 2 and x == 0:
    print("-1\n")
else:
    curr = 0
    ans = [""] * n
    ind = 0
    if n % 2 == 1:
        x -= 1
        curr = 1    
    for i in range(n):
        if x > 0 and curr == 0:
            ans[ind] = "1"
            ind += 1
            x -= 2
        else:
            ans[ind] = str(curr)
            ind += 1
        curr += 1
        curr %= 2
    print(" ".join(list(ans)))
    print("\n")