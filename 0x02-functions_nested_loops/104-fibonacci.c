#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	unsigned long n1 = 0, n2 = 1, temp, suma = 0;

	for (i = 0; i < 98; i++)
	{
		temp = n2;
		n2 = n1 + n2;
		n1 = temp;
		if (i != 0 && i != 97)
		{
			_putchar(',');
			_putchar(' ');
		}
		printf("%lu\n", n2);
	}
	_putchar('\n');
	return (0);
}
