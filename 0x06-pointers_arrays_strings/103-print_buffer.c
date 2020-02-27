#include "holberton.h"
#include <stdio.h>
/**
 * print_number - Checks for digit character.
 * @n: Number of value
 * Return: none.
 */
void print_buffer(char *b, int size)#include <stdio.h>

void print_buffer(char *b, int size)
{
	int i = -1, j = -1, z;
	while (z < size)
	{
		for (i += 1; !((i+1) % 10 == 0); i++)
		{

			if (((i) % 10 == 0 && i != 0) || i == 0)
				printf("%.8x: ", i);
			printf("%.2x", b[i]);
			if ((i+1) % 2 == 0)
				putchar(' ');
		}
		for (j += 1; !((j+1) % 10 == 0); j++)
		{
			putchar(b[j]);
		}

		putchar('\n');
	}

}
int main(void)
{
	char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";
	print_buffer(buffer, sizeof(buffer));
	return (0);
}
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%c", b[i]);
		if (i % 10 == 0)
			putchar('\n');
	}
}
