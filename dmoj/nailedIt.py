N = int(input())

board = list(map(int, input().split()))
board.sort()

minBoard = board[0]
maxBoard = board[N - 1]

    