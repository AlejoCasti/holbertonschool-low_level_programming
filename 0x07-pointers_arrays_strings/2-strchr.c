#include <stdio.h>
#include "holberton.h"
/**
 * _strchr - prints buffer in hexa
 * @s: the address of memory to print
 * @c: the size of the memory to print
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
	while (s[0] != '\0')
	{
		if (s[0] == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	else
		return (NULL);
}
