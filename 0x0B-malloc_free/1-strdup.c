#include "holberton.h"
#include <stdlib.h>
/**
 * str_len - documentation
 * @s: pointer
 * Return: the lenght of the array
 */
int str_len(char *s)
{
	if (s == NULL)
	{
		return (0);
	}
	else
	{
		if (*s)
			return (1 + str_len(s + 1));
	}
	return (0);
}
/**
 * _strdup - documentation
 * @str: size of the array
 * Return: the new pointer
 */
char *_strdup(char *str)
{
	int size = str_len(str);
	char *p = malloc(size + 1 * sizeof(char));
	int i;

	if (size == 0)
		return (NULL);
	if (!p)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}
