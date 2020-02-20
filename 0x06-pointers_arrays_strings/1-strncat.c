#include "holberton.h"
/**
 * _strncat - check the code for Holberton School students.
 * @dest: destination pointer
 * @src: Sources pointer
 * @n: 
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		if (n > 0)
		{
			dest[i] = src[j];
			i++;
			n--;
		}
		j++;
	}
	return (dest);
}
