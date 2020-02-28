#include <stdio.h>
/**
 * main - print the input array
 * @argc: Size of input array
 * @argv: Pointer to input array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(argc != 1 && *argv) ? printf("%d\n", argc - 1) : printf("0\n");
	return (0);
}
