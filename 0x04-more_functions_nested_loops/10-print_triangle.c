#include "holberton.h"
/**
 * print_triangle - Checks for digit character.
 * @size: Number of value
 * Return: none.
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				(size - b) - 1 <= a ? _putchar('#') : _putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
