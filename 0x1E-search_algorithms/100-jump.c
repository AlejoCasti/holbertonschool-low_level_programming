#include "search_algos.h"
/**
 * jump_search - jum search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index of finded value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j;
	int jump = sqrt(size);

	if (!array || size == 0)
		return (-1);

	if (value < array[0])
		return (printf("Value found between indexes [0] and [0]\n"), -1);
	for (i = 0; i < size; i += jump)
	{
		if (value <= array[i] || i + jump > size)
		{
			if (value <= array[i])
				i -= jump;
			else
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			printf("Value found between indexes [%lu] and [%lu]\n", i, i + jump);
			for (j = i; j <= i + jump && j < size; j++)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	return (-1);
}
