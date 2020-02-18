#include "holberton.h"
/**
 * _strlen - Print the length string.
 * @s: Variable to change the value.
 * Return: None;
 */
int _strlen(char *s)
{
	int contador;

	while (s[contador] != '\0')
		contador++;
	return (contador);
}
