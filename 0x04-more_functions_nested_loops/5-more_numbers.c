#include "holberton.h"
/**
 * imprimir - check the code for Holberton School students.
 * @n: NUmber of value
 * Return: Always 0.
 */
void imprimir(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		imprimir(n / 10);
	_putchar(n % 10 + '0');
}
/**
 * more_numbers - Checks for digit character.
 *
 * Return: none.
 */
void more_numbers(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a < 10)
				imprimir(a);
			else
				imprimir(a);
		}
		_putchar('\n');
	}
}
