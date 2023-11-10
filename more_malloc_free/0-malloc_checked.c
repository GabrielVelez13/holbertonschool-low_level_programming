#include "main.h"
/**
* malloc_checked - points to the memory address.
* @b: an unsigned int.
* Return: On success the memory address.
* On error, 98.
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
