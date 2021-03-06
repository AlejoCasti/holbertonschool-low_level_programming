#include "holberton.h"
#include <stdio.h>
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
 * message - print a pointer
 * @p: pointer to print
 * Return: none
 */
void message(char *p)
{
	int i;

	for (i = 0; p[i]; i++)
		_putchar(p[i]);
	_putchar('\n');
}
/**
 * message_res - print a pointer
 * @p: pointer to print
 * @tam: size of the arrays
 * Return: none
 */
void message_res(char *p, int tam)
{
	int i = 0;

	if (*p == 0)
		i++;
	if (p[i] == 0 && p[i + 1] == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}
	for (; i < tam; i++)
		_putchar(p[i] + '0');
	_putchar('\n');
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
	char *p, e[] = "Error";

	if (argc == 3 && _isdigit(argv[1]) == 1 && _isdigit(argv[2]) == 1)
	{
		size1 = str_len(argv[1]);
		size2 = str_len(argv[2]);
		tam = size2 + size1;
		p = malloc(sizeof(char) * tam);
		if (!p)
			message(e);
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
		message_res(p, tam);
		free(p);
	}
	else
	{
		message(e);
		exit(98);
	}
	return (0);
}
