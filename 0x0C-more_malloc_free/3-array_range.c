#include <stdlib.h>
/**
 * array-range - create an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: 
 */
int *array_range(int min, int max)
{
	int *p, i;
	
	if (min > max)
		return (NULL);
	
	p = malloc(sizeof(int) * (max - min + 1));
	if (!p)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		p[i] = min + i;
	return (p);
}
