#!/usr/bin/python3
"""Island perimeter"""


def island_perimeter(g):
    """island_perimeter"""
    w = len(g[0])
    h = len(g)
    e = 0
    s = 0

    for i in range(h):
        for j in range(w):
            if g[i][j] == 1:
                s += 1
                if (j > 0 and g[i][j - 1] == 1):
                    e += 1
                if (i > 0 and g[i - 1][j] == 1):
                    e += 1
    return s * 4 - e * 2
