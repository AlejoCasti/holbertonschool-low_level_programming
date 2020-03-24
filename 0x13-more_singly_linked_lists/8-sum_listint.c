#include "lists.h"
/**
 * sum_listint - plus all numbers
 * @head: pointer to list
 * Return: value plus
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	if (!head)
		return (0);
	while (tmp)
		sum += tmp->n, tmp = tmp->next;
	return (sum);
}
