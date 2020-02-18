#include "holberton.h"
/**
 * puts_half - Print the length string.
 * @str: Variable to change.
 * Return: None;
 */
void puts_half(char *str)
{
	int contador = 0, cont2 = 0;

	while (str[contador] != '\0')
		contador++;
	
	while (str[cont2] != '\0')
	{
		if (contador / 2 <= cont2)
			_putchar(str[cont2]);
		cont2++;
	}
	_putchar('\n');
}
