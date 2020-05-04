#include <stdio.h>
/**
 * _isdigit - Checks for digit character.
 * @c: Number of valor
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
