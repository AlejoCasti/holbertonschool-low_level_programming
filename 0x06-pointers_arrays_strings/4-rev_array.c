#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: array pointer
 * @n: lenght of the array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp, j = n - 1;

	while (j > n / 2)
	{
		temp = *(a + j);
		*(a + j) = *(a + i);
		*(a + i) = temp;
		j--;
		i++;
	}
}
