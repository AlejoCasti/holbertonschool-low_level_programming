#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with key
 * @ht: hast table
 * @key: key to search
 * Return: value of key associated
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t **tmp = NULL, *ar;

	if (!ht || !key)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array;
	if (tmp[idx] == 0)
		return (NULL);
	if (strcmp(tmp[idx]->key, (void *)key) == 0)
		return (tmp[idx]->value);
	if (tmp[idx]->next)
	{
		ar = tmp[idx]->next;
		while (ar)
		{
			if (strcmp(ar->key, (void *)key) == 0)
				return (ar->value);
			ar = ar->next;
		}
	}
	return (NULL);
}
