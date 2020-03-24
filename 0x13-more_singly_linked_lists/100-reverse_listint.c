#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: pointer to list
 * Return: firts node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL, *tmp_ = *head;

	if (!*head)
		return (*head);
	while (tmp_)
	{
		*head = (*head)->next;
		tmp_->next = tmp;
		tmp = tmp_;
		tmp_ = *head;
	}
	*head = tmp;
	return (tmp);
}
