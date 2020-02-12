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
	unsigned long n11, n22, temp1, temp2;

	for (i = 1; i <= 91; i++)
	{
		temp = n1 + n2;
		n1 = n2;
		n2 = temp;
		printf("%lu, ", temp);
	}
	n11 = n1 % 1000;
	n1 = n1 / 1000;
	n22 = n2 % 1000;
	n2 = n2 / 1000;
	while (i <= 98)
	{
		temp2 = (n11 + n22) / 1000;
		temp1 = (n11 + n22) - temp2 * 1000;
		temp = (n1 + n2) + temp2;
		n11 = n22;
		n22 = temp1;
		n1 = n2;
		n2 = temp;
		if (temp1 >= 100)
			printf("%lu%lu", temp, temp1);
		else
			printf("%lu0%lu", temp, temp1);
		if (i != 98)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
