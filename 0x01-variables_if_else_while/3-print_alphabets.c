#include <stdio.h>
#include <unistd.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  char s;
  for(s = 'a'; s <= 'z'; s++) {
    putchar(s);
  }
  for(s = 'A'; s <= 'Z'; s++) {
    putchar(s);
  }
  putchar('\n');
  return (0);
}
