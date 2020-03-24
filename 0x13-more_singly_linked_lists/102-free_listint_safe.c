#include "lists.h"
/**
 * aux - find loop
 * @h: pointer to the list
 * Return: number of nodes
 */
int aux(listint_t *h)
{
	listint_t *tmp = h, *tmp_t;
	int i, j, max = 0, bool = 0;

	for (i = 0; tmp; i++, tmp = tmp->next)
	{
		tmp_t = h;
		for (j = 0; i > j; j++, tmp_t = tmp_t->next)
		{
			if (tmp == tmp_t)
			{
				bool = 1;
				break;
			}
		}
		if (j > max)
			max = j;
		if (bool == 1)
			break;
	}
	return (max);
}
/**
 * free_listint_safe - free a list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t i, max;

	max = aux(*h);
	for (i = 0; i < max; i++)
	{
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
	}
	tmp = *h;
	*h = (*h)->next;
	free(tmp);
	*h = NULL;
	return (i + 1);
}
