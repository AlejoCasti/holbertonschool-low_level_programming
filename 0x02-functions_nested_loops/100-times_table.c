#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void imprimir(int n)                                                                                                                                                    {

        if (n < 0) {
                _putchar('-');
                n = -n;
        }

        if (n/10)
                imprimir(n/10);

        _putchar(n%10 + '0');
}
void print_times_table(int n)
{
	int a, b, c;
	if (n <= 15 && n > 0)
	{
		for(a = 0; a <= n; a ++)
		{
			for(b = 0; b <= n; b++)
			{
				c = b*a;
				if (c > 9)
				{
					if (b != n+1 && b != 0)
					{
						if (c > 99)
						{
						_putchar(',');
						_putchar(' ');
						}
						else
						{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						}
					}
					imprimir(c);
				}
				else
				{
					if (b != n+1 && b != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + c);
				}

			}
			_putchar('\n');
		}
	}       
}
