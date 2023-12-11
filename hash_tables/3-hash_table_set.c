#include "hash_tables.h"

/**
* hash_table_set - add or update an element in hash table
* @ht: pointer to the hash table
* @key: key to add - cannot empty string
* @value: value associated with key
* Return: 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *VCopy;
	hash_node_t *Chain; /*it never breaks*/
	unsigned long int i, index;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	VCopy = strdup(value);
	if (VCopy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	/*if key exists then update value*/
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = VCopy;
			return (1);
		}
	}
	/*create head for the array in the hash*/
	Chain = malloc(sizeof(hash_node_t));
	if (Chain == NULL)
	{
		free(VCopy);
		return (0);
	}
	/*key that head*/
	Chain->key = strdup(key);
	if (Chain->key == NULL)
	{
		free(VCopy);
		free(Chain);
		return (0);
	}
	/*link this struct to hash table*/
	Chain->value = VCopy;
	Chain->next = ht->array[index];
	ht->array[index] = Chain;

	return (1);
}
