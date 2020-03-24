#include "lists.h"
/**
 * print_listint - print and count nodes
 * @h: pointer to list
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
