#include "holberton.h"
/**
 * imprimir - check the code for Holberton School students.
 * @n: NUmber of value
 * Return: Always 0.
 */
void imprimir(long n)
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
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	long n1 = 0, n2 = 1, temp;

	for (i = 1; i <= 50; i++)
	{
		temp = n2;
		n2 = n1 + n2;
		n1 = temp;
		imprimir(n2);
		if (i != 50)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
