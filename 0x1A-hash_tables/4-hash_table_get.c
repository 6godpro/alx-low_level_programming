#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key.
 *
 * Return: The value associated with key in ht.
 *         Otherwise, if the key is not found - NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	tmp = ht->array[idx];
	while (tmp && strcmp(key, tmp->key) != 0)
		tmp = tmp->next;

	if (tmp == NULL)
		return (NULL);

	return (tmp->value);
}
