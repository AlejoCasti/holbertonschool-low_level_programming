#include <stdio.h>
#include <unistd.h>
/* more headers goes there */

/* betty style doc for function main goes there */
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
