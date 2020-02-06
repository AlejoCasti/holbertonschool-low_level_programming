#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char numero;
while (numero < 10)
{
putchar('0' + numero);
if (numero != 9)
{
putchar(',');
putchar(' ');
}
numero++;
}
putchar('\n');
return (0);
}
