#include "holberton.h"
/**
 * puts2 - Print the length string.
 * @str: Variable to change.
 * Return: None;
 */
void puts2(char *str)
{
	int contador = 0;

	while (str[contador] != '\0')
	{
		if (contador % 2 == 0)
			_putchar(str[contador]);
		contador++;
	}
	_putchar('\n');
}
