#include <stdlib.h>
/**
 * free_grid - check the code for Holberton School students.
 * @grid: grid
 * @height: pointer
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
