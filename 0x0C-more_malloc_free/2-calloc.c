#include <stdlib.h>
/**
 * _calloc - Allocate memory for an array
 * @nmemb: number of the elements
 * @size: number of bytes
 * Return: Pointer to  new string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	return (p);
}
