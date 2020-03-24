#include "lists.h"

/**
 * free_listint_safe - free a list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp = *h, *tmp_t;
	size_t i, j;

	for (i = 0; tmp; i++, tmp = tmp->next)
	{
		tmp_t = *h;
		for (j = 0; i > j; j++, tmp_t = tmp_t->next)
			if (tmp == tmp_t)
				break;
		if (tmp == tmp_t)
			break;
	}
	for (i = 0; *h != tmp_t; i++)
	{
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
	}
	tmp = *h;
	*h = (*h)->next;
	free(tmp);
	*h = NULL;
	return (i);
}
