#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int primos(unsigned long a)
{
	unsigned long int b;
	for (b = 2; b != a; b--)
	{
		if (a % b == 0)
			return(0);
	}
	return(1);
}
int main(void)
{
	unsigned long size = 612852475143, a, b, primo;
	for (a = size-1; a != 0; a--)
	{
		if (primos(a) == 1)
		{
			printf("Es primo %lu", a);
			break;
		}
	}
}
