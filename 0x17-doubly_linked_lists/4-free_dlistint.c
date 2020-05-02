#include "lists.h"
/**
 * free_dlistint - free linked list
 * @head: pointer of linked list head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (!head)
		return;
	while (tmp->next)
	{
		tmp = tmp->next;
		free(tmp->prev);
	}
	free(tmp);
}
