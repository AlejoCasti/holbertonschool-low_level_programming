#include "hash_tables.h"
/**
 * clear_l - free linked list
 * @h: header
 */
void clear_l(hash_node_t *h)
{
	hash_node_t *tmp = NULL, *tm = NULL;

	tmp = h;
	while (tmp)
	{
		tm = tmp->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
		tmp = tm;
	}
}

/**
 * hash_table_delete - delete has table
 * @ht: pointer to has table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **tmp = NULL;
	unsigned long int i;

	tmp = ht->array;
	for (i = 0; i < ht->size; i++)
		if (tmp[i] != 0)
			clear_l(tmp[i]);
	free(tmp);
	free(ht);
}
