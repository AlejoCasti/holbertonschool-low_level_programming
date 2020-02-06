#include <stdio.h>
#include <unistd.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int numero = 0;
  while (numero < 10){
    putchar('0'+numero);
    numero ++;
  }
  putchar('\n');
  return (0);
}
