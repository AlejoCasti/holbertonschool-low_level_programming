#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, z, y;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (z = 0; z < 10; z++)
{
for (y = 0; y < 10; y++)
{
if (y >= j && z >= i)
{
if (i < z || (i == z && j < y))
{
putchar('0' + i);
putchar('0' + j);
putchar(' ');
putchar('0' + z);
putchar('0' + y);
if (i != 9 || j != 8 || z != 9 || y != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
}
putchar('\n');
return (0);
}
