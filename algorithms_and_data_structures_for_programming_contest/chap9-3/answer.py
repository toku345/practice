#!/usr/bin/env python3


class Node:
    def __init__(self):
        self.key: int = None
        self.right: Node = None
        self.left: Node = None
        self.parent: Node = None


def insert(k: int, root: Node) -> Node:
    y = nil
    x = root

    z = Node()
    z.key = k
    z.left = nil
    z.right = nil

    while x != nil:
        y = x
        if z.key < x.key:
            x = x.left
        else:
            x = x.right

    z.parent = y
    if y == nil:
        root = z
    else:
        if z.key < y.key:
            y.left = z
        else:
            if z.key < y.key:
                y.left = z
            else:
                y.right = z

    return root


def inorder(u: Node) -> None:
    if u == nil:
        return
    inorder(u.left)
    print(f' {u.key}', end='')
    inorder(u.right)


def preorder(u: Node) -> None:
    if u == nil:
        return
    print(f' {u.key}', end='')
    preorder(u.left)
    preorder(u.right)


def find(x, k) -> Node:
    while x != nil and k != x.key:
        if k < x.key:
            x = x.left
        else:
            x = x.right
    return x


def main() -> None:
    root = nil
    n = int(input())

    for _ in range(n):
        inputs = input().split(' ')
        if inputs[0] == 'find':
            t: Node = find(root, int(inputs[1]))
            if t != nil:
                print('yes')
            else:
                print('no')
        elif inputs[0] == 'insert':
            root = insert(int(inputs[1]), root)
        elif inputs[0] == 'print':
            inorder(root)
            print('')
            preorder(root)
            print('')


nil = Node()

if __name__ == '__main__':
    main()
