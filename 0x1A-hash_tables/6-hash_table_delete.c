#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
		free_node(ht->array[i]);

	free(ht->array);
	free(ht);
}

/**
 * free_node - Deletes a hash node.
 * @node: A pointer to the node to be deleted.
 */
void free_node(hash_node_t *node)
{
	hash_node_t *tmp = node;

	while (node)
	{
		tmp = node->next;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}
}
