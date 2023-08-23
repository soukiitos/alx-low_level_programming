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
    for row in range(r):
        for col in range(c):
            if grid[row][col] == 1:
                perm += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perm -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perm -= 2
    return perm
