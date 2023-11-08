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
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	char *array = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
