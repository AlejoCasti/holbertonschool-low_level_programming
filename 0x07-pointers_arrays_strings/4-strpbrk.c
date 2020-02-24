#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - prints buffer in hexa
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 * Return: Nothing.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int b;

	while (s[0] != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[0] == accept[b])
				return (s);
		}
		s++;
	}
	if (s[0] == '\0')
		return (NULL);
	else 
		return (s);
}
