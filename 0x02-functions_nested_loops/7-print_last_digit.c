#include "holberton.h"
#include <inttypes.h>
#include <stdlib.h>
/**
 * print_last_digit - check the code for Holberton School students.
 *@a: Number of value
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	int b = a % 10;

	if (b >= 0)
		_putchar('0' + b);
	else
	{
		_putchar('0' + (-b));
		return (-b);
	}

	return (b);
}
