#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - principal program
 * @ac: numbers of arguments
 * @ag: arguments
 * Return: 0
 */
int main(int ac, char *ag[])
{
	int num1, num2, (*operate)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*ag[2] != '+' && *ag[2] != '-' && *ag[2] != '*' &&
	    *ag[2] != '/' && *ag[2] != '%') || ag[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*ag[2] == '/' || *ag[2] == '%') && atoi(ag[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(ag[1]);
	num2 = atoi(ag[3]);
	operate = get_op_func(ag[2]);
	printf("%d\n", operate(num1, num2));
	return (0);
}
