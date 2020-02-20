#include "holberton.h"
/**
 * string_toupper - check the code for Holberton School students.
 * @a: array pointer
 * Return: Always 0.
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] -= 32;
		i++;
	}
	return (a);
}
