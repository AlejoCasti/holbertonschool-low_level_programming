#include <stdlib.h>
/**
 * alloc_grid - documentation
 * @width: width
 * @height: height
 * Return: the new pointer
 */
int **alloc_grid(int width, int height)
{
	if (width > 0 && height > 0)
	{
		int *c = malloc(width * height * sizeof(int));
		int **p = malloc(sizeof(*p) * width);
		int i, j;

		if (!c)
		{
			free(c);
			return (NULL);
		}
		if (!p)
		{
			free(c);
			free(p);
			return (NULL);
		}
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
				c[i * height + j] = 0;
		}
		for (i = 0; i < width; i++)
			p[i] = c + i * height;
		return (p);
	}
	else
		return (NULL);
}
