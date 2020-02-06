#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char numero, z = 'a';
while (numero < 16)
{
if (numero < 10)
putchar('0' + numero);
else
{
putchar(z);
z++;
}
numero++;
}
putchar('\n');
return (0);
}
