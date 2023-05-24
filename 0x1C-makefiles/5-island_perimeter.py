#!/usr/bin/python3
"""This module defines a function that calculates the perimeter of an island."""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.

       In this grid, water is represented as 0 and land as 1.

    Args:
        grid (list): A list of lists representing the grid.

    Return: The perimeter of the island."""

    perimeter = 0
    col = len(grid)
    row = len(grid[0])

    for i in range(col):
        for j in range(row):
            if grid[i][j] == 1:
                perimeter += 4

                if i != 0 and grid[i - 1][j] == 1:
                    perimeter -= 1

                if i < col - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1

                if j != 0 and grid[i][j - 1] == 1:
                    perimeter -= 1

                if j < row - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter
