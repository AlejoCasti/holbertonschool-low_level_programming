#include "holberton.h"
/**
 * print_number - Checks for digit character.
 * @n: Number of value
 * Return: none.
 */
void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((n / 10) > 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
