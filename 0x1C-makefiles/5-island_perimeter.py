#!/usr/bin/python3
'''Return the perimeter of the island described in grid'''


def island_perimeter(grid):
    '''
    Calculte the perimeter of the island described in the grid
    grid is a list of list of integers
    '''
    perm = 0
    r = len(grid)
    c = len(grid[0])
    for r in range(r):
        for c in range(c):
            if grid[r][c] == 1:
                perm += 4
                if r > 0 and grid[r - 1][c] == 1:
                    perm -= 2
                if c > 0 and grid[r][c - 1] == 1:
                    perm -= 2
    return perm
