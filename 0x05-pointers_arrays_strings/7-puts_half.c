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
	if (contador % 2 == 0)
	{
		n = (contador - 1) / 2;
		while (n >= 0)
		{
			_putchar(str[(contador - 1) - n]);
			n--;
		}
		_putchar('\n');
	}
}
