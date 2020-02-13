#include "holberton.h"
/**
 * print_numbers - Checks for digit character.
 *
 * Return: none.
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
		_putchar('0' + a);
	_putchar('\n');
}
