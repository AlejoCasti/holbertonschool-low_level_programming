#include "lists.h"
/**
 * add_dnodeint - get length of linked list
 * @head: pointer of linked list head
 * @n: value to add
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL;

	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->next = *head;
	tmp->prev = NULL;
	tmp->n = n;
	*head = tmp;
	return (tmp);
}
