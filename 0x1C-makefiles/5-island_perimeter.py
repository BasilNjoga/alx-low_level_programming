#!/usr/bin/python3
""" This is a module that computes the perimeter of an island given a grid which is a list of integers"""


def island_perimeter(grid):
    """ This is the function that loops throught the matrix list """
    x = 0
    for i in range(grid):
        for j in range(grid[i]):
            x += grid[i][j]

    return x * 2
