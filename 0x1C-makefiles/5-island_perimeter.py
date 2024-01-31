#!/usr/bin/python3
def island_perimeter(grid):
    """
     returns the perimeter of the island described in grid
     args:
        _ grid is a list of list of integers:
            - 0 represents a water zone
            - 1 represents a land zone
            - One cell is a square with side length 1
            - Grid cells are connected horizontally/vertically (not diagonally)
            - Grid is rectangular, width and height don’t exceed 100
     """
    perimeter = 0
    row = len(grid)
    col = len(grid[0])

    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1

                if j == col - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1

                if i == row - 1 or grid[i + 1][j] == 0:
                    perimeter += 1

    return perimeter
