#include "hash_tables.h"

/**
* hash_table_get - gets the value of a given key
* @ht: pointer to the hash table
* @key: key to add - cannot empty string
* @value: value associated with key
* Return: 0
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp->next != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
