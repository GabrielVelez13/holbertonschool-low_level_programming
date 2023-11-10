#include "main.h"
/**
* _calloc - allocates memory and sets it to zero
* @nmemb: an unsigned int.
* @size: an unsigned int.
* Return: On success a concatenated string.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
	{
		return (NULL);
	}

	while (i < size * nmemb)
	{
		pointer[i] = 0;
		i++;
	}
	return (pointer);
}
