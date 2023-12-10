#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: gives the size of the hash table
* Return: ht
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	if (size < 1)
	{
		return (NULL);
	}
	hash_table_t *ht;

	ht = malloc(sizeof(*ht));
	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = calloc(sizeof(hash_node_t *), ht->size);

	return (ht);
}
