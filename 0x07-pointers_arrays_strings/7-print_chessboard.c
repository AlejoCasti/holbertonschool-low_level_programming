#include "holberton.h"
/**
 * print_chessboard - prints buffer in hexa
 * @a: fsdf
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i = 0, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar((a[i])[j]);
		}
		_putchar('\n');
	}
}