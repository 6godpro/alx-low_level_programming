#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the head of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;

		tmp = ht->array[i];
		for (; tmp; tmp = tmp->next)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->next != NULL)
				printf(", ");
		}
		if (ht->array[i + 1] == NULL)
		{
			i++;
			while (i < ht->size - 1 && ht->array[i] == NULL)
				i++;
			if (i == ht->size - 1)
				break;
			i--;
		}
		printf(", ");
	}
	printf("}\n");
}
