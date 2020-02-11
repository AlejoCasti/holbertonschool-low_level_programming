#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void imprimir(int n)                                                                                                                                                   
{

        if (n < 0) {
                _putchar('-');
                n = -n;
        }

        if (n/10)
                imprimir(n/10);

        _putchar(n%10 + '0');
}
int main(void)
{
	int i, suma;

        for (i = 0; i < 1024; i++)
	{
		if (i%3 == 0 || i%5 == 0)
			suma += i;
	}
	imprimir(suma);
	_putchar('\n');
	return (0);
}
