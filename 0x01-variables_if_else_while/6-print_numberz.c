#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int numero = 0;
while (numero < 10)
{
putchar('0' + numero);
numero++;
}
putchar('\n');
return (0);
}
