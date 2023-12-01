tmp = input()
instructions: list = []
letters: str = ""
sign: str = ""
nums: str = ""
for i, char in enumerate(tmp):
    if char not in ("0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "-", "+"):
        letters = str(letters) + char
    if char == "+":
        sign = " tighten "
    if char == "-":
        sign = " loosen "
    if char in ("0", "1", "2", "3", "4", "5", "6", "7", "8", "9"):
        nums = nums + char
    print(char, nums != "", nums)
    if nums != "" and tmp[(i + 1) % len(tmp) - 1]:
        print(letters + sign + nums)
        letters = ""
        sign = ""
        nums = ""