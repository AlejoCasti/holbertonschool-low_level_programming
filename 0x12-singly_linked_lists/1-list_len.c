#include "lists.h"
/**
 * print_list - print the list
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
