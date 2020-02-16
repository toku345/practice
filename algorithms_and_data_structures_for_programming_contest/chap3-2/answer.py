#!/usr/bin/env python3


def trace(a: [int]):
    print(' '.join([str(i) for i in a]))


def insertionSort(a, n):
    for i in range(1, n):
        v = a[i]
        j = i - 1
        while j >= 0 and a[j] > v:
            a[j+1] = a[j]
            j -= 1

        a[j+1] = v
        trace(a)


if __name__ == '__main__':
    N = int(input())
    A = [int(i) for i in input().split()]

    trace(A)
    insertionSort(A, N)
