#include "lists.h"
/**
 * print_dlistint - print linked list
 * @h: pointer of linked list head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int i;

	if (!h)
		return (0);
	for (i = 0; tmp; i++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (i);
}
