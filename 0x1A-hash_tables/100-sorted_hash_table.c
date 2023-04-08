#include "hash_tables.h"


/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the hash table to create.
 * Return: If it fails - NULL
 *         Otherwise - A pointer to the newly created sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to the hash table or updates the value if
 *                   it already exist.
 * @ht: The sorted hash table to add/update the element to.
 * @key: The key to add or update.
 * @value: The value to be assigned to the key.
 * Return: If the function fails - 0.
 *         Otherwise - 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *tmp;
	char *value_cpy;
	unsigned int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (tmp = ht->array[idx]; tmp; tmp = tmp->next)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = value_cpy;
			return (1);
		}
	}
	node = malloc(sizeof(shash_node_t));
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

	sorted_insert(ht, node, key);
	return (1);
}
/**
 * sorted_insert - Inserts a node into a sorted doubly linked list.
 * @ht: A pointer to the head of the sorted hash table.
 * @node: The new node to insert into the linked list.
 * @key: The key to use to determine the position at which to insert
 *       the new node.
 */
void sorted_insert(shash_table_t *ht, shash_node_t *node, const char *key)
{
	shash_node_t *tmp;

	if (!ht || !node || !key || *key == '\0')
		return;

	if (ht->shead == NULL)
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		node->snext = ht->shead;
		node->sprev = NULL;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp && strcmp(tmp->key, key) < 0)
			tmp = tmp->snext;
		if (tmp)
		{
			node->sprev = tmp->sprev;
			node->snext = tmp;
			tmp->sprev->snext = node;
			tmp->sprev = node;
		}
		else
		{
			node->snext = NULL;
			node->sprev = ht->stail;
			ht->stail->snext = node;
			ht->stail = node;
		}
	}
}

/**
 * shash_table_get - Retrieves a value associated with the given key.
 * @ht: The hash table to search.
 * @key: The key whose value to return.
 * Return: If the key is not found - NULL.
 *         Otherwise - The value associated with the key.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	for (tmp = ht->array[idx]; tmp; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}
	return (NULL);
}



/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The hash table whose data is to be printed.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");
	for (tmp = ht->shead; tmp; tmp = tmp->snext)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		if (tmp->snext)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - Prints a sorted hash table in reverse.
 * @ht: The hash table whose data is to be printed.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");
	for (tmp = ht->stail; tmp; tmp = tmp->sprev)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		if (tmp->sprev)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;

	for (; ht->shead; ht->shead = tmp)
	{
		tmp = ht->shead->snext;
		free(ht->shead->key);
		free(ht->shead->value);
		free(ht->shead);
	}
	free(ht->array);
	free(ht);
}
