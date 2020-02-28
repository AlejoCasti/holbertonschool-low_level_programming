#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Print the minimum coins to make change
 * @argc: Size of input array
 * @argv: Pointer to input array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int valor = atoi(argv[1]), res = 0, i;
		int coins[5] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			while (valor - coins[i] >= 0)
			{
				valor -= coins[i];
				res++;
			}
		}
		printf("%d\n", res);
	}
	else
		printf("Error\n");
	return (0);
}
