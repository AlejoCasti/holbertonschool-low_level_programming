#include <stdio.h>
#include <stdlib.h>
/**
 * isdig - Validate a digit char
 * @c: Pointer to the char
 * Return: 1 if this is a digit 0 if is not.
 */
int isdig(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 48 && c[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}
/**
 * main - Adds numbers
 * @argc: Size of input array
 * @argv: Pointer to input array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, suma = 0;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdig(argv[i]) == 1)
				suma += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", suma);
	}
	else
		printf("0\n");
	return (0);
}
