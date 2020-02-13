#!/usr/bin/env python3
from enum import Enum


class DFS():
    class Color(Enum):
        WHITE = 0
        GRAY = 1
        BLACK = 2

    def __init__(self, M, n, debug=False):
        self.M = M
        self.n = n
        self.color = [self.Color.WHITE for _ in range(self.n)]
        self.d, self.f = [-1] * self.n, [-1] * self.n
        self.tt = 0
        self.nt = [0] * self.n
        self.debug = debug

    def next(self, u: int):
        while self.nt[u] < self.n:
            v = self.nt[u]
            self.nt[u] = v + 1
            if self.M[u][v] != 0:
                return v
        return -1

    def dfs_visit(self, r: int):
        S = []                  # list をスタックとして使う
        S.append(r)
        self.color[r] = self.Color.GRAY
        self.tt += 1
        self.d[r] = self.tt
        self.debug_print(S)

        while len(S) > 0:
            # スタックの一番上（= listの末尾）の値を取得 ※ pop()するとlistからなくなるので[-1]でアクセス
            u = S[-1]
            v = self.next(u)
            if v != -1:
                if self.color[v] == self.Color.WHITE:
                    self.color[v] = self.Color.GRAY
                    self.tt += 1
                    self.d[v] = self.tt
                    S.append(v)
                    self.debug_print(S)
            else:
                S.pop()
                self.color[u] = self.Color.BLACK
                self.tt += 1
                self.f[u] = self.tt
                self.debug_print(S)

    def dfs(self):
        for u in range(self.n):
            if self.color[u] == self.Color.WHITE:
                self.dfs_visit(u)

        for i in range(self.n):
            print(f'{i+1} {self.d[i]} {self.f[i]}')

    def debug_print(self, S):
        if not self.debug:
            return
        print(f'[tt: {self.tt}] d: {self.d}')
        print(f'[tt: {self.tt}] f: {self.f}')
        print(f'[tt: {self.tt}] color: {self.color}')
        print(f'[tt: {self.tt}] S: {S}')
        print('-------------------------')


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

    DFS(M, n).dfs()


if __name__ == '__main__':
    main()
