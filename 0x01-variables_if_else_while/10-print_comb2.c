#include <stdio.h>
#include <unistd.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int num1, num2;
  for (num1 = 0; num1 < 10; num1++)
    {
    for (num2 = 0; num2 < 10; num2++)
      {
      putchar('0' + num1);
      putchar('0' + num2);
	if (num1 != 9 || num2 != 9)
	{
	putchar(',');
	putchar(' ');
	}
      }
    }
  putchar('\n');
  return (0);
}
