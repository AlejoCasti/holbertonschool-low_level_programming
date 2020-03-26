#include "holberton.h"
/**
 * clear_bit - set bit of a specific index
 * @n: pointer to number to convert to binary
 * @index: index founded
 * Return: 1 right return -1 wrong return
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int c = (sizeof(unsigned long int) * 8) - 1;

	if (index >= c)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
