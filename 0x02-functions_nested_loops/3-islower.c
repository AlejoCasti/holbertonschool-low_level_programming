#include "holberton.h"
#include <ctype.h>
/**
 * _islower - check the code for Holberton School students.
 * @c: number of value
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);
}
