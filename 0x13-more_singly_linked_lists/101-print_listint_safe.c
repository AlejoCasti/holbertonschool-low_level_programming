#include "lists.h"

/**
 * print_listint_safe - prints a list
 * @head: pointer to the list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, j;
	const listint_t *tmp, *tmp_t;

	tmp = head;
	for (i = 0; tmp; i++)
	{
		tmp_t = head;
		for (j = 0; i > j; j++, tmp_t = tmp_t->next)
			if (tmp == tmp_t)
				return (printf("-> [%p] %d\n", (void *)tmp, tmp->n), i);
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
	}
	return (i);
}
