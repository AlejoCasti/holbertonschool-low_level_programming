#include "lists.h"
/**
 * list_len - get the len of list
 * @h: list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
