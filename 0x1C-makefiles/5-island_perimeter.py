#!/usr/bin/python3
"""Defines a function that returns the perimiter of the island"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid."""
    height = len(grid)
    if grid[0]:
        width = len(grid[0])

    perimeter = 0
    for row_i, row in enumerate(grid):
        for col_i, col in enumerate(row):
            if col is 1:
                if row_i is 0:
                    perimeter = perimeter + 1
                else:
                    if grid[row_i - 1][col_i] is not 1:
                        perimeter = perimeter + 1

                if col_i is 0:
                    perimeter = perimeter + 1
                else:
                    if grid[row_i][col_i - 1] is not 1:
                        perimeter = perimeter + 1

                if col_i is (width - 1):
                    perimeter = perimeter + 1
                else:
                    if grid[row_i][col_i + 1] is not 1:
                        perimeter = perimeter + 1

                if row_i is (height - 1):
                    perimeter = perimeter + 1
                else:
                    if grid[row_i + 1][col_i] is not 1:
                        perimeter = perimeter + 1

    return perimeter
