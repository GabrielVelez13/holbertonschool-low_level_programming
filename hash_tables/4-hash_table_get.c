#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i, index;
	
	if (ht == NULL || key == NULL )
		return (NULL);
	
	index = key_index((const unsigned char *)key, ht->size);
	/*if key exists then update value*/
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			return (ht->array[i]->value);
		}
	}
	/*create head for the array in the hash*/
	
	return (NULL);
}