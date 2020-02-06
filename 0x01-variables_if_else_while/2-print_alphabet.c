B#include <stdio.h>
#include <unistd.h>
/* more headers goes there */

/* betty style doc for function main goes there */
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
