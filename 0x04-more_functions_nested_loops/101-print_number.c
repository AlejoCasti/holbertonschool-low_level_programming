#include "holberton.h"
/**
 * print_number - Checks for digit character.
 * @n: Number of value
 * Return: none.
 */
void print_number(int n)
{
	unsigned int nonum = n;

	if (nonum < 0)
	{
		_putchar('-');
		nonum = -nonum;
	}
	if ((nonum / 10) > 0)
		print_number(nonum / 10);
	_putchar((nonum % 10) + '0');
}
