#include "holberton.h"

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: Pionter to the string
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * getPal - check the code for Holberton School students.
 * @s: Pionter to the string
 * @size: size
 * Return: Always 0.
 */
int getPal(char *s, int size)
{
	if (*s != '\0')
	{
		if (*s == *(s + size))
		{
			getPal(s + 1, size - 1);
		}
		else
			return (0);
	}
	return (1);
}
/**
 * is_palindrome - check the code for Holberton School students.
 * @s: Pionter to the string
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s) - 1;

	if (i <= 0)
		return (1);
	else
		return (getPal(s, i));
}
