#include <stdio.h>
void constructor_fun(void) __attribute__ ((constructor));

/**
 * constructor_fun - function that execute before main
 */
void constructor_fun(void)
{
	printf("You're beat! and yet, you must allow,
\nI bore my house upon my back!\n");
}
