#include "lists.h"
/**
 * add_nodeint_end - add new node end
 * @head: pointer to list
 * @n: new value of struct
 * Return: new struct
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t)), *tmp_T = *head;

	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (!*head)
		return (*head = tmp, tmp);
	while (tmp_T->next)
	{
		tmp_T = tmp_T->next;
	}
	tmp_T->next = tmp;
	return (tmp);
}
