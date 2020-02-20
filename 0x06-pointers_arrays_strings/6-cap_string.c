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
		if (a[i] >= 97 && a[i] <= 122)
		{
			if (car == 1)
			{
				a[i] -= 32;
				car = 0;
			}
			i++;
			continue;
		}
		if (a[i - 1] == ',' ||
		    a[i - 1] == ';' ||
		    a[i - 1] == '.' ||
		    a[i - 1] == '!' ||
		    a[i - 1] == '?' ||
		    a[i - 1] == '"' ||
		    a[i - 1] == '(' ||
		    a[i - 1] == ')' ||
		    a[i - 1] == '{' ||
		    a[i - 1] == '}')
			car = 1;
		i++;
	}
	return (a);
}
