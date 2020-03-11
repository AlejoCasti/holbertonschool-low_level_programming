#include <stdlib.h>
/**
 * int_index - Use the function that cmp point to
 * @array: array to compare
 * @size: size of array
 * @cmp: pointer to function
 * Return: 0 right return and -1 wrong return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	return (-1);
}
