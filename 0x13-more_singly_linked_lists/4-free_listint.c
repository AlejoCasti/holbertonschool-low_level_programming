#include "lists.h"
/**
 * free_listint - add new node end
 * @head: pointer to list
 * Return: None
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
