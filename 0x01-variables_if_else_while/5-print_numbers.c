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
printf("%i", numero);
numero++;
}
printf("\n");
return (0);
}
