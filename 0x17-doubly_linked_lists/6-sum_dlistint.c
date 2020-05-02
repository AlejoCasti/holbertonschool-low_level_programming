#include "lists.h"
/**
 * sum_dlistint - sum all value of nodes
 * @head: pointer of linked list head
 * Return: sum of all
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (!head)
		return (0);
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
