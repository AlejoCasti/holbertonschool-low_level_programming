#include "holberton.h"
/**
 * cap_string - check the code for Holberton School students.
 * @a: array pointer
 * Return: Always 0.
 */
char *cap_string(char *a)
{
	int i = 0, car = 0;

	while (a[i] != '\0')
	{
		if (a[i] == ',' || a[i] == ';' || a[i] == '.'
		    || a[i] == '!' || a[i] == '?' || a[i] == '"' ||
			a[i] == '(' || a[i] == ')' || a[i] == '{' ||
		    a[i] == '}')
			car = 1;
		if (car == 1)
		i++;
	}
	return (a);
}
