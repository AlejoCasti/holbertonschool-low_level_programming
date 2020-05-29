#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: poiunter to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **tmp = NULL, *ar;
	unsigned long int i, z = 0;

	tmp = ht->array;
	printf("{");
	for (i = 0; i != ht->size; i++)
	{
		if (tmp[i] != 0 && tmp[i])
		{
			if (z != 0)
				printf(", '%s': '%s'", tmp[i]->key, tmp[i]->value);
			else
				printf("'%s': '%s'", tmp[i]->key, tmp[i]->value);
			ar = tmp[i]->next;
			while (ar)
				printf(", '%s': '%s'", ar->key, ar->value), ar = ar->next;
			z++;
		}
	}
	printf("}\n");
}
