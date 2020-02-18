#include "holberton.h"
/**
 * _puts - Print the length string.
 * @str: Variable to print.
 * Return: None;
 */
void _puts(char *str)
{
	int contador;

	while (str[contador] != '\0')
	{
		_putchar(str[contador]);
		contador++;
	}
	_putchar('\n');
}
