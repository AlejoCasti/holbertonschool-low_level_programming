#include <stdlib.h>
/**
 * malloc_checked -  allocates memory using
 * @b: size of the malloc
 * Return: a pointer.
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (!p)
		exit(98);
	return (p);
}
