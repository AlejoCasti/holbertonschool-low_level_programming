#include "lists.h"
/**
 * add_nodeint - add new node
 * @head: pointer to list
 * @n: new value of struct
 * Return: new struct
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
