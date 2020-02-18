#include "holberton.h"
/**
 * print_rev - Print the length string.
 * @s: Variable to print.
 * Return: None;
 */
void print_rev(char *s)
{
	int contador = 0;

	while (s[contador] != '\0')
		contador++;

	while (contador > 0)
	{
		_putchar(s[contador - 1]);
		contador--;
	}
	_putchar('\n');
}
