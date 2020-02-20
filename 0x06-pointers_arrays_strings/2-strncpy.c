#include "holberton.h"
/**
 * _strncpy - check the code for Holberton School students.
 * @dest: destination pointer
 * @src: Sources pointer
 * @n: size value
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (src[j] != '\0' && n >= 0)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
