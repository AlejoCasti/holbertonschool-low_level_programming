#include "lists.h"
/**
 * add_node_end - print the list
 * @head: pointer to head
 * @str:pointer to copy
 * Return: number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t)), *tmp = *head;
	int i;

	if (ptr)
	{
		for (i = 0; str[i]; i++)
		{};
		ptr->str = strdup(str);
		ptr->len = i;
		ptr->next = NULL;
		if (*head)
		{
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = ptr;
		}
		else
			*head = ptr;
		return (ptr);
	}
	return (NULL);
}
