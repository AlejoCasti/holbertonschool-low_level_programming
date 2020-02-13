#include "holberton.h"
/**
 * print_diagonal - Checks for digit character.
 * @n: Number of value
 * Return: none.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = a; b > 0; b--)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
