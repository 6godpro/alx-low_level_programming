#include "hash_tables.h"

/**
 * key_index - Gives the index of a key.
 * @key: The key to be hashed.
 * @size: Size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key);

	return (idx % size);
}
