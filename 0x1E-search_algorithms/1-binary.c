#include <stdio.h>
/**
 * re_bi - recursive function to binary search algorithm
 * @Low: Lowest number
 * @Hi: Highest number
 * @array: array to search
 * @value: value to search
 * Return: index of founded value
 */
int re_bi(size_t Low, size_t Hi, int *array, int value)
{
	size_t mid, i;
	int vmid;

	printf("Searching in array: ");
	for (i = Low; i < Hi; i++)
		printf("%i, ", array[i]);
	printf("%i\n", array[Hi]);

	if (Low == Hi)
		return (-1);
	mid = ((Hi - Low) / 2) + Low;
	vmid = array[mid];

	if (vmid == value)
		return (mid);
	if (value > vmid)
		return (re_bi(mid + 1, Hi, array, value));
	if (value < vmid)
		return (re_bi(Low, mid - 1, array, value));
	return (-1);
}

/**
 * binary_search - binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index of founded value
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (re_bi(0, size - 1, array, value));
}
