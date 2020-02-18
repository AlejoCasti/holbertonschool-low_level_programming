#include "holberton.h"
/**
 * print_rev - Print the length string.
 * @s: Variable to print.
 * Return: None;
 */
void print_rev(char *s)
{
	int contador = _strlen(s);

	while (contador >= 0)
	{
		_putchar(s[contador]);
		contador--;
	}
	_putchar('\n');
}
