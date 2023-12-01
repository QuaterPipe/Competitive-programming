N, X = map(int, input().split())
if (N - X) % 2: print(-1)
else:
    string = ["1"] * N
    for i in range(int((N - X) / 2)):
        string[i * 2] = "0"
    print(" ".join(string))