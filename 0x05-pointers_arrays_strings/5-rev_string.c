#include "holberton.h"
/**
 * rev_string - Print the length string.
 * @s: Variable to change.
 * Return: None;
 */
void rev_string(char *s)
{
	int contador = 0, cont2 = 0;
	char temp;

	while (s[contador] != '\0')
		contador++;

	while (contador > cont2)
	{
		temp = s[contador - 1];
		s[contador - 1] = s[cont2];
		s[cont2] = temp;
		cont2++;
		contador--;
	}
}
