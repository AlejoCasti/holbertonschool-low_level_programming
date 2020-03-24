#include "lists.h"
/**
 * free_listint2 - add new node end
 * @head: pointer to list
 * Return: None
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
