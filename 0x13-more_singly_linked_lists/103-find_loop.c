#include "lists.h"
/**
 * find_listint_loop - find loop
 * @head: pointer to the list
 * Return: node that start loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp = head->next, *tmp_t = head->next->next;

	if (!head || !tmp || tmp_t)
		return (NULL);
	while (tmp && tmp_t && tmp_t->next)
	{
		if (tmp == tmp_t)
		{
			tmp = head;
			while (tmp != tmp_t)
			{
				tmp = tmp->next;
				tmp_t = tmp_t->next;
			}
			return (tmp);
		}
		tmp = tmp->next;
		tmp_t = tmp_t->next->next;
	}
	return (NULL);
}
