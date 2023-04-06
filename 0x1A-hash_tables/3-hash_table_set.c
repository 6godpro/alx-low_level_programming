#include "hash_tables.h"


/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key of the new element to add.
 * @value: The value of the new element to add.
 *
 * Return: If it fails - 0.
 *         Otherwise - 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node, *tmp;
	char *value_cpy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);

	tmp = ht->array[idx];
	for (; tmp; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_cpy;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_cpy);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(value_cpy);
		free(node);
		return (0);
	}
	node->value = value_cpy;
	node->next = ht->array[idx];
	ht->array[idx] = node;

	return (1);
}
