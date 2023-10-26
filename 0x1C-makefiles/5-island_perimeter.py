#!/usr/bin/python3
"""defines function to measure perimeter of island"""


def island_perimeter(grid):
    """returns perimeter of island in grid"""
    num = 0
    perim = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perim += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    num += 1
                    if (i > 0 and grid[i - 1][j] == 1):
                        num += 1
    return perim * 4 - num * 4
