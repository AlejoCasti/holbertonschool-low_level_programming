#include <stdlib.h>
/**
 * print_name - Print an array
 * @name: array to print
 * @f: pointer to function
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
