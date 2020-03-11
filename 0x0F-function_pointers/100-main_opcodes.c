#include <stdio.h>
#include <stdlib.h>
/**
 * main - principal program
 * @ac: numbers of args
 * @ag: args
 * Return: 0
 */
int main(int ac, char *ag[])
{
	unsigned char *mainptr = (unsigned char *) main;
	int i;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(ag[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < atoi(ag[1]); i++)
		if (i < atoi(ag[1]) - 1)
			printf("%02x ", mainptr[i]);
		else
			printf("%02x\n", mainptr[i]);
	return (0);
}
