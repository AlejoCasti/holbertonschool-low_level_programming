#include "holberton.h"
/**
 * swap_int - CHange the value of a variable.
 * @a: Variable to change the value.
 * @b: Variable to change the value.
 * Return: None;
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
