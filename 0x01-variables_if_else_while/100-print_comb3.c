#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int i, j, a;
  for (i = 0; i < 10; i++)
    {
      a = i+1;
      for(j = 0; j <10; j++)
	{
	  if( j >= a)
	    {
	      putchar('0' + i);
	      putchar('0' + j);
	      if(i != 8 || j != 9)
		{
		  putchar(',');
		  putchar(' ');
}
	    }

	}
    }
  putchar('\n');
  return (0);
}
