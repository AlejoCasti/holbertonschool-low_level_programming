#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	unsigned long n1 = 0, n2 = 1, temp;

	for (i = 0; i < 98; i++)
	{
		temp = n2;
		n2 = n1 + n2;
		n1 = temp;
		printf("%lu", n2);
		if (i != 97)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
