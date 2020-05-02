#include "lists.h"
/**
 * delete_dnodeint_at_index - dele node in specific index
 * @head: pointer of linked list head
 * @index: index
 * Return: 1 success -1 wrong
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp; i++)
	{
		if (index == i)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
	}
	return (-1);
}
