#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
			if (isdigit(*argv[i]))
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
