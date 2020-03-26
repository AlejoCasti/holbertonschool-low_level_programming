#include "holberton.h"
#include <limits.h>
/**
 * get_bit - get bit of a specific index
 * @n: number to convert to binary
 * @index: index founded
 * Return: bit founded
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c = (sizeof(unsigned long int) * 8) - 1;

	if (index >= c)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
