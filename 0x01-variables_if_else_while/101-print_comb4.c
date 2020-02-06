#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, z, a, b;
for (i = 0; i < 10; i++)
{
a = i + 1;
for (j = 0; j < 10; j++)
{
b = j + 1;
if (j >= a)
{
for (z = 0; z < 10; z++)
{
if (z >= b)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + z);
if (i != 7 || j != 8 || z != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
