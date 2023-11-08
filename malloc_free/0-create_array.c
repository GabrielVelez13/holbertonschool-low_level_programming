#include "main.h"

/**
* create_array - creates an array.
* @c: The character to input into array
* @size: the size of the array
* Return: On success 0.
* On error, NULL
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	array[size] = '\0';

	return (array);
}
