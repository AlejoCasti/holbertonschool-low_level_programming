#include "holberton.h"
/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: Pionter to the string
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n % 2 == 0)
		return (1 + _sqrt_recursion(n % 2));
	else
		return((n % 2) + 1);
}
