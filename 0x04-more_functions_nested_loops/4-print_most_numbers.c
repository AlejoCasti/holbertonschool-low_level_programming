#include "holberton.h"
/**
 * print_most_numbers - Checks for digit character.
 *
 * Return: none.
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 4 && a != 2)
			_putchar('0' + a);
	}
	_putchar('\n');
}
