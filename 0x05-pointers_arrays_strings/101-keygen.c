#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - creates a password of sum 2772
 *
 * Return:0;
 */

int main(void)
{
	int r, sum = 0;

	srand(time(NULL));
	while (sum < (2772 - 122))
	{
		r = rand() % (127 + 1 - 33) + 33;
		putchar(r);
		sum += r;
	}
	r = 2772 - sum;
	putchar(r);
	return (0);
}
