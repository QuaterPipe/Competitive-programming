
def main():
    mustBe = [input().split(" ") for _ in range(int(input()))]
    mustNotBe = [input().split(" ") for _ in range(int(input()))]
    X = len(mustBe)
    Y = len(mustNotBe)
    G = int(input())
    names: list = []
    for i in range(G):
        names.append(input().split(" "))
    violations: int = 0
    for group in names:
        ind = 0
        for pair in mustBe:
            if pair[0] in group and pair[1] not in group:
                violations += 1
                del mustBe[i]
            ind += 1
        ind = 0
        for pair in mustNotBe:
            if pair[0] in group and pair[1] in group:
                violations += 1
                del mustNotBe[i]
    print(violations)
main()
