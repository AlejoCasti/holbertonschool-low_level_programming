#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - documentation
 * @size: size of the array
 * @c: char to fill the array
 * Return: the new pointer
 */
char *create_array(unsigned int size, char c)
{
	if (size != 0)
	{
		char *p = malloc(size * sizeof(char));
		unsigned int i;

		if (!p)
			return(NULL);
		for (i = 0; i < size; i++)
			p[i] = c;
		return (p);
	}
	else
		return (NULL);

}
