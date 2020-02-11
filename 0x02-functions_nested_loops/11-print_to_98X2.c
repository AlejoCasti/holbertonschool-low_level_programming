#include "holberton.h"
/**
 * imprimir - check the code for Holberton School students.
 * @n: Number of value.
 * Return: Always 0.
 */
void imprimir(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		imprimir(n / 10);
	_putchar(n % 10 + '0');
}
/**
 * print_to_98X2 - Function to the task.
 * @n: Number of value
 * Return: Always 0.
 */
void print_to_98X2(int n)
{
	int b = 0;

	do {
		if (n <= 98)
		{
			imprimir(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				b = 1;
			n++;
		}
		else if (n >= 98)
		{
			imprimir(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				b = 1;
			n--;
		}
	} while (b == 0);
	_putchar('\n');
}
