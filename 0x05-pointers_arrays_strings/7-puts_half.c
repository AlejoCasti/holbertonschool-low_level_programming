#include "holberton.h"
/**
 * puts_half - Print the length string.
 * @str: Variable to change.
 * Return: None;
 */
void puts_half(char *str)
{
	int contador = 0, n;

	while (str[contador] != '\0')
		contador++;
	n = (contador - 1) / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n+1]);
		n++;
	}
	_putchar('\n');
}
