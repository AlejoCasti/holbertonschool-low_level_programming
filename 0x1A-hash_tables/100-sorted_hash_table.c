#include "hash_tables.h"
/**
 * shash_table_create - create a has table php way
 * @size: size of hash table
 * Return: a pointer to new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *n_h = NULL;

	n_h = malloc(sizeof(shash_table_t));
	if (!n_h)
		return (NULL);
	n_h->array = calloc(size, sizeof(shash_node_t *));
	if (!n_h->array)
		return (NULL);
	n_h->size = size;
	n_h->shead = NULL;
	n_h->stail = NULL;
	return (n_h);
}
/* ---------------------- Set values -----------------*/
/**
 * search - search node
 * @ht: hash table
 * @i: index
 * @key: key of node
 * Return: pointer to node
 */
shash_node_t *search(shash_table_t *ht, unsigned long int i, const char *key)
{
	shash_node_t *h;

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
 * insert_sort_linked - sort linked list
 * @ht: hash table
 * @node: node to insert
 */
void insert_sort_linked(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp = ht->shead;

	if (!ht->shead)
	{
		ht->shead = node;
		ht->stail = node;
		node->snext = NULL;
		node->sprev = NULL;
		return;
	}
	while (tmp)
	{
		if (strcmp(tmp->key, node->key) > 0)
		{
			node->sprev = tmp->sprev;
			node->snext = tmp;
			tmp->sprev = node;
			if (node->sprev)
				node->sprev->snext = node;
			else
				ht->shead = node;
			return;
		}
		else if (!tmp->snext)
		{
			node->snext = NULL;
			node->sprev = tmp;
			tmp->snext = node;
			ht->stail = node;
			return;
		}
		tmp = tmp->snext;
	}
}

/**
 * shash_table_set - set a value into hash table
 * @ht: hash table
 * @key: key o value
 * @value: value of pair with key
 * Return: 1 success 0 failed
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t **tmp = NULL, *new_node = NULL;
	unsigned long int idx;

	if (!key || !ht || !value)
		return (0);
	tmp = ht->array;
	idx = key_index((unsigned char *)key, ht->size);
	new_node = search(ht, idx, key);
	if (new_node)
		return (free(new_node->value), new_node->value =
			(void *)strdup(value), 1);
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = (void *)strdup(key);
	new_node->value = (void *)strdup(value);
	new_node->next = NULL;
	if (tmp[idx] != 0)
		new_node->next = tmp[idx];
	tmp[idx] = new_node;
	insert_sort_linked(ht, new_node);
	return (1);
}

/*----------------------------- Get values ------------------*/
/**
 * shash_table_get - retrieves a value associated with key
 * @ht: hast table
 * @key: key to search
 * Return: value of key associated
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t **tmp = NULL, *ar;

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

/* -------------------------- print values ------------------------*/

/**
 * shash_table_print - print hash table
 * @ht: pointer to hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = ht->shead;
	int s = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	while (tmp)
	{
		if (s != 0)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
		s++;
	}
	printf("}\n");
}

/* ------------------ reverse function ---------------------*/

/**
 * shash_table_print_rev - reverse function
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int s = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	tmp = ht->stail;
	while (tmp != NULL)
	{
		if (s != 0)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
		s++;
	}
	printf("}\n");
}
/* -------------------------- Delete -------------------------*/
/**
 * clear_l - free linked list
 * @h: header
 */
void clear_l(shash_node_t *h)
{
	shash_node_t *tmp = NULL, *tm = NULL;

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
 * shash_table_delete - delete has table
 * @ht: pointer to has table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t **tmp = NULL;
	unsigned long int i;

	if (!ht || ht->size == 0)
		return;
	tmp = ht->array;
	for (i = 0; i < ht->size; i++)
		if (tmp[i] != 0)
			clear_l(tmp[i]);
	free(tmp);
	free(ht);
}
