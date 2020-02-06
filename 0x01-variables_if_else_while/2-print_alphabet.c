#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char z;
  for (z = 'a'; z <= 'z'; z++)
  {
    putchar(z);
  }
  putchar('\n');
  return (0);
}
