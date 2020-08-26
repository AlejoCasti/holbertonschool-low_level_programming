#include <stdio.h>
/**
 * binary_search - binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index of founded value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, hi = size - 1, mid, i;
	int vmid;

	if (!array)
		return (-1);

	while (low <= hi)
	{
		printf("Searching in array: ");
		for (i = low; i < hi; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[hi]);

		mid = (hi + low) / 2;
		vmid = array[mid];

		if (vmid == value)
			return (mid);
		if (value > vmid)
			low = 1 + mid;
		if (value < vmid)
			hi = mid - 1;
	}


	return (-1);
}
