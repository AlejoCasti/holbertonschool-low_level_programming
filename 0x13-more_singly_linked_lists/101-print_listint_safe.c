#include "lists.h"

/**
 * print_listint_safe - prints a list
 * @head: pointer to the list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp, *tmp_t;
	size_t i = 0, j = 0;

	tmp = head;
	for (i = 0; tmp; i++)
	{
		tmp_t = head;
		j = 0;
		while (i > j)
		{
			if (tmp == tmp_t)
				return (printf("-> [%p] %d\n", (void *)tmp, tmp->n), i);
			j++;
			tmp_t = tmp_t->next;
		}
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
	}
	return (i);
}
