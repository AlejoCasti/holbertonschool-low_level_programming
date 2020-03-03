#include "holberton.h"
#include <stdlib.h>
/**
 * str_len - documentation
 * @s: pointer
 * Return: the lenght of the array
 */
int str_len(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * _strdup - documentation
 * @str: size of the array
 * Return: the new pointer
 */
char *_strdup(char *str)
{
	if (!str)
		return (NULL);
	int size = str_len(str);
	char *p = malloc(size * sizeof(char));
	int i;

       	if (!p)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}
