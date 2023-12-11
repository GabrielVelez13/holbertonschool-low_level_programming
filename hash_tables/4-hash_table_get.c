#include "hash_tables.h"

/**
* hash_table_get - gets the value of a given key
* @ht: pointer to the hash table
* @key: key to add - cannot empty string
* Return: 0
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	temp = ht->array[index];
	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;
	return (temp == NULL) ? NULL : temp->value;
}
