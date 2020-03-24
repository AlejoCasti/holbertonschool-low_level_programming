#include "lists.h"
/**
 * insert_nodeint_at_index - add new nodo in specific index
 * @head: pointer to list
 * @idx: index to add a new nodo
 * @n: value of new nodo
 * Return: struct added
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *ptr = malloc(sizeof(listint_t));
	unsigned int i;

	if (!ptr)
		return (NULL);
	if (!head)
		return (0);
	ptr->n = n;
	if (idx == 0)
	{
		return (ptr->next = *head, *head = ptr, ptr);
	}
	for (i = 0; tmp; i++)
	{
		if (i == idx - 1)
			return (ptr->next = tmp->next, tmp->next = ptr, ptr);
		tmp = tmp->next;
	}
	return (NULL);
}
