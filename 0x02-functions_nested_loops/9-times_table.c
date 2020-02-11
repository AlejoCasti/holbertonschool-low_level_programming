#include "holberton.h"
/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = b * a;
			if (c > 9)
			{
				if (b != 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar('0' + c / 10);
				_putchar('0' + c % 10);

			}
			else
			{
				if (b != 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + c);
			}

		}
		_putchar('\n');
	}
}
