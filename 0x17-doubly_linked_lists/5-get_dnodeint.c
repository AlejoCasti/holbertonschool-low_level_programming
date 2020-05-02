#include "lists.h"
/**
 * get_dnodeint_at_index - get node of specific index
 * @head: pointer of linked list head
 * @index: index of node to get
 * Return: Node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; tmp->next; i++)
	{
		if (index == i)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
