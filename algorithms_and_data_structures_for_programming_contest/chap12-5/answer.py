#!/usr/bin/env python3

NIL: int = -1


class DFS():
    def __init__(self, n, G, debug=False):
        self.n = n
        self.G = G
        self.color = [NIL] * n

        self.debug = debug
        self._debug_print_G()
        self._debug_print_color()

    def assign_color(self):
        id = 1                  # color の id
        for u in range(self.n):
            if self.color[u] == NIL:
                self._dfs(u, id)
                id += 1
        self._debug_print_color()

    def can_reach(self, s, t) -> ():
        """boolを返すっぽいけど、yes / no を　print するメソッド"""
        if self.color[s] == self.color[t]:
            print('yes')
        else:
            print('no')

    def _dfs(self, r: int, c: int):
        S = []                  # list をスタックとして使う
        S.append(r)
        self.color[r] = c
        while len(S) > 0:
            u = S.pop()
            for v in self.G[u]:
                if self.color[v] == NIL:
                    self.color[v] = c
                    S.append(v)

    def _debug_print_G(self):
        if not self.debug:
            return
        for i in range(self.n):
            print(f'{i}: {self.G[i]}')

    def _debug_print_color(self):
        if not self.debug:
            return
        print(f'color: {self.color}')


def main():
    n, m = [int(char) for char in input().split()]

    G = [[] for _ in range(n)]  # n要素の配列の配列
    for _ in range(m):
        s, t = [int(char) for char in input().split()]
        G[s].append(t)
        G[t].append(s)
    dfs = DFS(n, G)
    dfs.assign_color()

    q = int(input())
    for _ in range(q):
        s, t = [int(char) for char in input().split()]
        dfs.can_reach(s, t)


if __name__ == '__main__':
    main()
