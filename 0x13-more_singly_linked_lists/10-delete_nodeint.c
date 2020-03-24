#include "lists.h"
/**
 * delete_nodeint_at_index - dele a node in specific index
 * @head: pointer to list
 * @index: index to delete node
 * Return: value of node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *tmp_T;
	unsigned int i;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		tmp_T = *head;
		(*head) = (*head)->next;
		free(tmp_T);
		return (1);
	}
	for (i = 0; tmp; i++)
	{
		if (i == index - 1)
		{
			tmp_T = tmp->next;
			tmp->next = tmp_T->next;
			free(tmp_T);
			return (1);
		}
		tmp = tmp->next;
	}
	return (-1);
}
