#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n < 10 && n >= 0)
				_putchar('0' + n);
			else if (n >= 10)
			{
				_putchar('0' + n/10);
				_putchar('0' + n%10);
			}
			if (n < 0)
			{
				if (n < 0 && n > -10)
				{
					_putchar('-');
					_putchar('0'+ (-n));
				}
				if (n <= -10)
				{
					_putchar('-');
					_putchar('0' + (-n)/10);
					_putchar('0' + (-n)%10);
				}
				else if (n <= -100)
				{
					_putchar('-');
					_putchar('0' + (-n)/10);
					_putchar('0' + (-n)%100);
					_putchar('0' + (-n)%10);
				}
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n < 100)
			{
				_putchar('0' + n/10);
				_putchar('0' + n%10);
			}
			else if (n >= 100)
			{
				_putchar('0' + n/100);
				_putchar('0' + ((n%100)/10));
				_putchar('0' + n%10);
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar('0' + 9);
		_putchar('0' + 8);
	}
	_putchar('\n');
}
