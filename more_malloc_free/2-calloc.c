#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
	{
		return (NULL);
	}

	return (pointer);
}