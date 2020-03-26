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
	int k, s = 0;
	unsigned int c = (sizeof(unsigned long int) * 8) - 1;

	while (c != 0)
	{
		k = n >> c;
		if (k & 1)
		{
			if (c == index)
				return (1);
			s = 1;
		}
		else
			if (s == 1)
				if (c == index)
					return (0);
		c--;
	}
	if (index == 0)
	{

		if ((n >> c) & 1)
			return (1);
		else
			return (0);
	}
	return (-1);
}
