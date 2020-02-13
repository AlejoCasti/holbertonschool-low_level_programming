#include "holberton.h"
/**
 * print_line - Checks for digit character.
 * @n: Number of value
 * Return: none.
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
