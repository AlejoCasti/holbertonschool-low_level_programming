#include "lists.h"
/**
 * insert_dnodeint_at_index - add new node in specific index
 * @h: pointer of linked list head
 * @idx: index
 * @n: value of new node
 * Return: sum of all
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = NULL, *ptr = *h;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!*h)
		return (NULL);
	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	for (i = 0; ptr; i++)
	{
		if (idx == i)
		{
			tmp->prev = ptr->prev;
			tmp->next = ptr;
			ptr->prev = tmp;
			tmp->prev->next = tmp;
			return (tmp);
		}
		if (!ptr->next && idx == i + 1)
			return (free(tmp), add_dnodeint_end(h, n));
		ptr = ptr->next;
	}
	free(tmp);
	return (NULL);
}
