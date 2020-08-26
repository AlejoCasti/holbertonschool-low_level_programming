#include <stdio.h>
/**
 * linear_search - search value with linear search
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index of founded value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
