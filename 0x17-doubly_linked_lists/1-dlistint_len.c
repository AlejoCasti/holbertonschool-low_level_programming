#include "lists.h"
/**
 * dlistint_len - get length of linked list
 * @h: pointer of linked list head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int i;

	if (!h)
		return (0);
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
}
