#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: gives the size of the hash table
* Return: ht
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	int i;

	ht = malloc(sizeof(ht));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_table_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	for (i = 0; ht->array[i]; i++)
		ht->array[i] = NULL;

	return (ht);
}
