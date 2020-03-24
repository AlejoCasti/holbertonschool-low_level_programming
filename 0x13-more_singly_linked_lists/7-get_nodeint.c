#include "lists.h"
/**
 * get_nodeint_at_index - get node value
 * @head: pointer to list
 * @index: index to get value
 * Return: value's struct
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i;

	if (!head)
		return (0);
	for (i = 0; tmp; i++)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
