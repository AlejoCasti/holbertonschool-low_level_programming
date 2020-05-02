#include "lists.h"
/**
 * add_dnodeint_end - get length of linked list
 * @head: pointer of linked list head
 * @n: value to add
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL, *ptr = *head;

	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	if (!*head)
	{
		tmp->next = NULL;
		tmp->prev = NULL;
		tmp->n = n;
		*head = tmp;
		return (tmp);
	}
	while (ptr->next)
		ptr = ptr->next;
	tmp->next = NULL;
	tmp->prev = ptr;
	tmp->n = n;
	ptr->next = tmp;
	return (tmp);
}
