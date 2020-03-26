#include "holberton.h"
/**
 * set_bit - set bit of a specific index
 * @n: pointer to number to convert to binary
 * @index: index founded
 * Return: 1 right return -1 wrong return
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int c = (sizeof(unsigned long int) * 8) - 1;
	int base = 1;

	if (index >= c)
		return (-1);
	while (index != 0)
		base *= 2, index--;
	*n += base;
	return (1);
}
