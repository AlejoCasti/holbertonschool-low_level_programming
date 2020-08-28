#include "search_algos.h"
/**
 * interpolation_search - interpolation_search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index of finded value
 */
int interpolation_search(int *array, size_t size, int value)
{
	int sta, end, pos, aux;

	sta = 0;
	end = (int) size - 1;

	while (sta <= end && value >= array[sta] && value <= array[end])
	{
		aux = (end - sta) / (array[end] - array[sta]);
		pos = sta + (aux * (value - array[sta]));
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (value > array[pos])
			sta = pos + 1;
		else
			end = pos - 1;
	}
	printf("Value checked array[%d] is out of range\n", pos);
	return (-1);
}
