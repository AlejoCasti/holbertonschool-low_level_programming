#include "lists.h"
/**
 * pop_listint - add new node end
 * @head: pointer to list
 * Return: None
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int i;

	if (!*head)
		return (0);
	*head = (*head)->next;
	i = tmp->n;
	free(tmp);
	return (i);
}
