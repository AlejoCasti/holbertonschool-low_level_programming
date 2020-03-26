#include "holberton.h"
/**
 * print_binary - print a binary number
 * @n: number to convert to binary
 * Return: None
 */
void print_binary(unsigned long int n)
{
	int c, k, s = 0;

	for (c = 50; c >= 0; c--)
	{
		k = n >> c;
		if (k & 1)
			_putchar('1'), s = 1;
		else
			if (s == 1)
				_putchar('0');
		if (c == 0 && s == 0)
			_putchar('0');
	}
}
