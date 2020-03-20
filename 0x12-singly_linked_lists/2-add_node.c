#include "lists.h"
/**
 * add_node - print the list
 * @head: pointer to head
 * @str:pointer to copy
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	int i;

	if (ptr)
	{
		for (i = 0; str[i]; i++)
		{};
		ptr->str = strdup(str);
		ptr->len = i;
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	return (NULL);
}
