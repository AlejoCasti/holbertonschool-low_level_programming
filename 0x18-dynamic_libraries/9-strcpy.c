#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - Print the length string.
 * @dest: Variable to change.
 * @src: Variable.
 * Return: None;
 */
char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src != '\0')
	{
		*a = *src;
		a += 1;
		src += 1;
	}
	*a = '\0';
	return (dest);
}
