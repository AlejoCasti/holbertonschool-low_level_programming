#include "holberton.h"
/**
 * getPrime - check the code for Holberton School students.
 * @n: Pionter to the string
 * @m: Number
 * Return: Always 0.
 */
int getPrime(int n, int m)
{
	if (n <= 1)
		return (0);
	else if (n == m)
		return (1);
	else if (n % m == 0)
		return (0);
	else
		return (getPrime(n, m + 1));
}
/**
 * is_prime_number - check the code for Holberton School students.
 * @n: Pionter to the string
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	return (getPrime(n, 2));
}
