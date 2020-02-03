#!/usr/bin/env python3


def main():
    n = int(input())
    M = [[0] * n for _ in range(n)]

    for i in range(n):
        line = input()
        inputs = [int(x) for x in line.split(' ')]
        u = inputs.pop(0)
        u -= 1                  # 0 オリジンへ変換
        _ = inputs.pop(0)
        for v in inputs:
            v -= 1              # 0 オリジンへ変換
            M[u][v] = 1

    for row in M:
        print(' '.join([str(x) for x in row]))


if __name__ == '__main__':
    main()
