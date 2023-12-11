#include "hash_tables.h"

/**
* key_index - gives the index of a given key.
* @key: a key to find.
* @size: size of array.
* Return: The index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
