#!/usr/bin/python3
''' Perimeter function that return the perimeter of an island '''


def island_perimeter(grid):
    width = len(grid[0])
    height = len(grid)
    perimetro = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                if j + 1 == width or grid[i][j + 1] == 0:
                    perimetro += 1
                if i + 1 == height or grid[i + 1][j] == 0:
                    perimetro += 1
                if (j - 1 == -1) or grid[i][j - 1] == 0:
                    perimetro += 1
                if i - 1 == -1 or grid[i - 1][j] == 0:
                    perimetro += 1
    return (perimetro)
