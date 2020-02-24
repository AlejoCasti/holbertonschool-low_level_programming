#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - prints buffer in hexa
 * @a: the address of memory to print
 * @size: as
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0, contador = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
				sum1 += a[contador];
			if (j + i == size - 1)
				sum2 += a[contador];
			contador++;
		}
	}
	printf("%d, ", sum1);
	printf("%d", sum2);
	putchar('\n');
}
