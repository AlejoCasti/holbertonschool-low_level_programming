#include "lists.h"
/**
 * listint_len - get size of a list
 * @h: pointer to list
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
