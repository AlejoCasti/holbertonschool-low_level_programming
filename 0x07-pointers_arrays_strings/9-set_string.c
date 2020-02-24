#include "holberton.h"
/**
 * set_string - prints buffer in hexa
 * @s: the address of memory to print
 * @to: as
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	int i;

	for (i = 0; *s[i] != '\0'; i++)
	{
		to[i] = *s[i];
	}
}
