#include "holberton.h"
#include <ctype.h>
/**
 * _isalpha - check the code for Holberton School students.
 * @c: Number of value
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	else
		return (0);
}
