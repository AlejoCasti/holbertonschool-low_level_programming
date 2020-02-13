#include <stdio.h>
/**
 * primos - check the code for Holberton School students.
 * @a: Number of value
 * Return: If the number is prime return 1 if the number is not prime return 0.
 */
int primos(unsigned long a)
{
	unsigned long int b;

	for (b = 2; b != a; b++)
	{
		if (a % b == 0)
			return (0);
	}
	return (1);
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long size = 612852475143, cont, numA = size;

	for (cont = 2; cont != size - 1; cont++)
	{
		while (numA % cont == 0)
		{
			if (primos(cont) == 1)
			{
				numA = numA / cont;
				if (numA == 1)
				{
					printf("%lu", cont);
					putchar('\n');
					break;
				}
			}
		}
	}
	return (0);
}
