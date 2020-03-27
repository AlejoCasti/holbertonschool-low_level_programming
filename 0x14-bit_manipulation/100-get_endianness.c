#include <stdio.h>
/**
 * get_endianness - get endianness
 * Return: if is little 1 and 0 if is big
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c)
		return (1);
	else
		return (0);
}
