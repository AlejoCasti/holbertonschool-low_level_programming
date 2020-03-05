#include <stdlib.h>
/**
 * _calloc - Allocate memory for an array
 * @nmemb: number of the elements
 * @size: number of bytes
 * Return: Pointer to  new string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
