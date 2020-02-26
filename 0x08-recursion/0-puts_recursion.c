#include "holberton.h"
/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: Pionter to the string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
