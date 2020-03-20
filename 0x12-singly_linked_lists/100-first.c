#include <stdio.h>
/**
 * constructor_fun - function that execute before main
 */
void __attribute__ ((constructor)) constructor_fun(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
