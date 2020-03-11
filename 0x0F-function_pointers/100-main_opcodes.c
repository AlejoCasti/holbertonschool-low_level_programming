#include <stdio.h>
#include <stdlib.h>
/**
 * main - principal program
 * @argc: numbers of args
 * @argv: args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned char *mainptr = (unsigned char *) main;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < atoi(argv[1]); i++)
		if (i < atoi(argv[1]) - 1)
			printf("%02x ", mainptr[i]);
		else
			printf("%02x\n", mainptr[i]);
	return (0);
}
