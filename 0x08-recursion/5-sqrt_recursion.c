#include "holberton.h"
/**
 * getRoot - check the code for Holberton School students.
 * @n: Pionter to the string
 * @m: Number
 * Return: Always 0.
 */
int getRoot(int n, int m)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (m * m == n)
		return (m);
	else if (m * m > n)
		return (-1);
	else
		return (getRoot(n, m + 1));
}
/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: Pionter to the string
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (getRoot(n, 1));
}
