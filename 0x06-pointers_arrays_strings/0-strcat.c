#include "holberton.h"
/**
 * _strcat - check the code for Holberton School students.
 * @dest: destination pointer
 * @src: Sources pointer
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
