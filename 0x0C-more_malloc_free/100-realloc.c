#include <stdlib.h>
/**
 * _realloc - create an array of integers
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: the pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
