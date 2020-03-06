#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * _isdigit - Checks for digit character.
 * @c: Number of valor
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isdigit(char *c)
{
	while (*c)
	{
		if (!(*c >= 48 && *c <= 57))
			return (0);
		c++;
	}
	return (1);
}

/**
 * str_len - documentation
 * @s: pointer
 * Return: the lenght of the array
 */
int str_len(char *s)
{
	if (*s)
		return (1 + str_len(s + 1));
	return (0);
}
/**
 * main - Programa that multiplies two integers
 * @argc: number of arguments
 * @argv: array with the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int size1, size2, cociente = 0, i, j, resul, tam;
	char *p;

	if (argc == 3)
	{
		size1 = str_len(argv[1]);
		size2 = str_len(argv[2]);
		tam = size2 + size1;
		p = malloc(sizeof(char) * (tam));
		if (!p)
			printf("Error");
		for (i = size1 - 1; i >= 0; i--)
		{
			for (j = size2 - 1; j >= 0; j--)
			{
				resul = ((argv[1][i] - 48) * (argv[2][j] - 48));
				cociente = resul / 10;
				p[i + j + 1] += (resul % 10);
				if (p[i + j + 1] > 9)
				{
					p[i + j] += p[i + j + 1] / 10;
					p[i + j + 1] = p[i + j + 1] % 10;
				}
				p[i + j] += cociente;
			}
		}
		i = 0;
		if (*p == 0)
			i = 1;
		for (; i <  tam; i++)
			printf("%d", p[i]);
		printf("\n");
	}
	else
		printf("Error\n");
	return (0);
}
