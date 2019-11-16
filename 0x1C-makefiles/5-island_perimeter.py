#!/usr/bin/python3
"""
5-island perimeter
"""


def turn_grid(grid):
    """
    turn a grid
    """
    new_grid = []
    for n in range(0, len(grid[0])):
        new_row = []
        for row in grid:
            new_row.append(row[n])
        new_grid.append(new_row)
    return new_grid


def side_counter(grid):
    """
    count horizontal sides
    """
    count = 0
    for i in range(0, len(grid)):
        if i == 0 or i == len(grid) - 1:
            for k in range(0, len(grid[i])):
                if grid[i][k]:
                    count += 1
        for j in range(0, len(grid[i])):
            if i < len(grid) - 1 and grid[i][j] != grid[i + 1][j]:
                count += 1
    return count


def island_perimeter(grid):
    """
    return the add of all sides
    """
    turned_grid = turn_grid(grid)
    a = side_counter(grid)
    b = side_counter(turned_grid)
    r = a + b
    return r
