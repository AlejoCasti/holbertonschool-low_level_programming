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

	for (i = 0; i < size; i += jump)
	{
		if (value <= array[i] || i + jump > size)
		{
			if (i + jump > size)
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			else
				i -= jump;
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
