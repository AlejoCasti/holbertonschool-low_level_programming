#include "hash_tables.h"
/**
 * search - search node
 * @ht: hash table
 * @key: key to found
 * Return: pointer to node
 */
hash_node_t *search(hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *h;

	i = key_index((unsigned char *)key, ht->size);
	if (ht->array[i] == 0)
		return (NULL);
	h = ht->array[i];
	while (h)
	{
		if (strcmp((void *)key, h->key) == 0)
			return (h);
		h = h->next;
	}
	return (NULL);
}

/**
 * hash_table_set - set a value into hash table
 * @ht: hash table
 * @key: key o value
 * @value: value of pair with key
 * Return: 1 success 0 failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **tmp = NULL, *new_node = NULL;
	unsigned long int idx;

	if (!key || !ht || !value)
		return (0);
	tmp = ht->array;
	idx = key_index((unsigned char *)key, ht->size);
	new_node = search(ht, key);
	if (new_node)
	{
		free(new_node->value);
		new_node->value = (void *)strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = (void *)strdup(key);
	new_node->value = (void *)strdup(value);
	new_node->next = NULL;
	if (tmp[idx] != 0)
		new_node->next = tmp[idx];
	tmp[idx] = new_node;
	return (1);
}
