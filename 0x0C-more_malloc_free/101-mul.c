#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
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
int main (int argc, char *argv[])
{
	int size1, size2;

	if (argc == 3)
	{
		size1 = str_len(argv[1]);
		size2 = str_len(argv[2]);
		printf("%d\n", (atoi(argv[1])) * (atoi(argv[1])));
	}
	else
		printf("Error\n");
	return (0);
}
