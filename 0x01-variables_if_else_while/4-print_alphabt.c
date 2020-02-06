#include <stdio.h>
#include <unistd.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  char c;
  for(c = 'a'; c <= 'z'; c++) {
    if (c != 'q' && c != 'e')
      putchar(c);
  }
  putchar('\n');
  return (0);
}
