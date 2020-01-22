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


def tree_minimum(x: Node) -> Node:
    while x.left != nil:
        x = x.left
    return x


def tree_successor(x: Node) -> Node:
    if x.right != nil:
        return tree_minimum(x.right)
    y: Node = x.parent
    while y != nil and x == y.right:
        x = y
        y = y.parent
    return y


def tree_delete(z: Node, root: Node):
    y: Node                     # 削除する対象
    x: Node                     # y の子

    # 削除する節点を決める
    if z.left == nil or z.right == nil:
        y = z
    else:
        y = tree_successor(z)

    # x を決める
    if y.left != nil:
        x = y.left
    else:
        x = y.right

    if x != nil:
        x.parent = y.parent

    if y.parent == nil:
        root = x
    else:
        if y == y.parent.left:
            y.parent.left = x
        else:
            y.parent.right = x

    if y != z:
        z.key = y.key

    del y


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
        elif inputs[0] == 'delete':
            tree_delete(find(root, int(inputs[1])), root)


nil = Node()

if __name__ == '__main__':
    main()
