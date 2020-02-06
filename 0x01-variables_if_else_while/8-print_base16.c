#include <stdio.h>
#include <unistd.h>
/* more headers goes there */

/* betty style doc for function main goes there */
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
