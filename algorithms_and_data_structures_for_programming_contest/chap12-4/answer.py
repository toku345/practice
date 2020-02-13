#!/usr/bin/env python3

import sys
# SimpleQueue でOKなのだが AOJ の環境では Python3.7 が使えない
from queue import Queue


class BFS():
    INFTY = sys.maxsize

    def __init__(self, M, n, debug=False):
        self.M = M
        self.n = n
        # 距離で訪問状態(color)を管理する
        self.d = [self.INFTY] * n
        self.debug = debug

    def bfs(self, s):
        q = Queue()
        q.put(s)
        self.d[s] = 0
        self.debug_print(q)

        while not q.empty():
            u = q.get()
            for v in range(self.n):
                if self.M[u][v] == 0:
                    continue
                if self.d[v] != self.INFTY:
                    continue
                self.d[v] = self.d[u] + 1
                q.put(v)
                self.debug_print(q)

        for i in range(self.n):
            if self.d[i] == self.INFTY:
                d = -1
            else:
                d = self.d[i]
            print(f'{i+1} {d}')

    def debug_print(self, q):
        if not self.debug:
            return
        print('d: ', self.d)
        print('q: ', q.queue)
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

    BFS(M, n).bfs(0)


if __name__ == '__main__':
    main()
