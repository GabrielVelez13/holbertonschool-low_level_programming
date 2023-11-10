#include "main.h"
/**
* malloc_checked - points to the memory address.
* @b: an unsigned int.
* Return: On success an array of zeroes.
* On error, NULL
*/
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
