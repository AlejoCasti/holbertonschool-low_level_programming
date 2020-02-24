#include "holberton.h"
/**
 * _strspn - prints buffer in hexa
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 * Return: Nothing.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, b;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[i] == accept[b])
				j = 1;
		}
		if (j == 0)
			return (i);
	}
	return (0);
}
