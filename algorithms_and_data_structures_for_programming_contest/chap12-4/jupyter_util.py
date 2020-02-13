def prep_n_and_M_from_file(file_path: str) -> (int, [[int]]):
    with open(file_path) as f:
        lines = [line.rstrip() for line in f.readlines()]

    n = int(lines.pop(0))
    M = [[0] * n for _ in range(n)]

    for i in range(n):
        line = lines.pop(0)
        inputs = [int(x) for x in line.split(' ')]
        u = inputs.pop(0)
        u -= 1                  # 0 オリジンへ変換
        _ = inputs.pop(0)       # k （使わない...）
        for v in inputs:
            v -= 1              # 0 オリジンへ変換
            M[u][v] = 1

    return (n, M)


def make_graph(M):
    from graphviz import Digraph
    dot = Digraph()
    for j in range(len(M)):
        for i in range(len(M[j])):
            dot.node(str(i+1))
            if M[j][i] == 1:
                dot.edge(str(j+1), str(i+1))
    return dot
