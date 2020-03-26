#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: unsigned int converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int base = 1, size = 0;

	if (!b)
		return (0);
	while (b[size])
		size++;
	size--;
	while (size >= 0)
	{
		if (b[size] == 49 || b[size] == 48)
		{
			value += (b[size] - 48) * base;
			base *= 2;
			size--;
		}
		else
			return (0);
	}
	return (value);
}
