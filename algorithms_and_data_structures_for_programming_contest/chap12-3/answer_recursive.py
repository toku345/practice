#!/usr/bin/env python3
from enum import Enum


class DFS():
    class Color(Enum):
        WHITE = 0
        GRAY = 1
        BLACK = 2

    def __init__(self, M, n):
        self.M = M
        self.n = n
        self.color = [self.Color.WHITE for _ in range(self.n)]
        self.tt = 0
        self.d, self.f = [-1] * self.n, [-1] * self.n

    def dfs_visit(self, u):
        self.color[u] = self.Color.GRAY
        self.tt += 1
        self.d[u] = self.tt     # 最初の訪問

        for v in range(self.n):
            if self.M[u][v] == 0:
                continue
            if self.color[v] == self.Color.WHITE:
                self.dfs_visit(v)

        self.color[u] = self.Color.BLACK
        self.tt += 1
        self.f[u] = self.tt

    def dfs(self):
        for u in range(self.n):
            if self.color[u] == self.Color.WHITE:
                self.dfs_visit(u)

        for u in range(self.n):
            print(f'{u+1} {self.d[u]} {self.f[u]}')


def main():
    n = int(input())
    M = [[0] * n for _ in range(n)]

    for i in range(n):
        line = input()
        inputs = [int(x) for x in line.split(' ')]
        u = inputs.pop(0)
        u -= 1                  # 0 オリジンへ変換
        _ = inputs.pop(0)       # k （使わない...）
        for v in inputs:
            v -= 1              # 0 オリジンへ変換
            M[u][v] = 1

    dfs = DFS(M, n)
    dfs.dfs()


if __name__ == '__main__':
    main()
