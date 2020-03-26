#include "holberton.h"
/**
 * flip_bits - flit a number
 * @n: Number to flit
 * @m: Number to flit
 * Return: number of bits that needs to flit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int a = n ^ m;

	while (a)
	{
		i += a & 1;
		a >>= 1;
	}
	return (i);
}
