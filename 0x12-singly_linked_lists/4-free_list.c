#include "lists.h"
/**
 * free_list - print the list
 * @head: pointer to head
 * Return: number of nodes
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
