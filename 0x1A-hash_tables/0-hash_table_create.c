#include "hash_tables.h"
/**
 * hash_table_create - create a has table
 * @size: size of table
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;

	new_hash = malloc(sizeof(hash_table_t));
	if (!new_hash)
		return (NULL);
	new_hash->array = calloc(size, sizeof(hash_node_t *));
	if (!new_hash->array)
		return (NULL);
	new_hash->size = size;
	return (new_hash);
}
