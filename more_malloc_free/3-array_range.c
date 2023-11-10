#include "main.h"
/**
* array_range - allocates memory and sets an array to an ammount.
* @min: an int.
* @max: an int.
* Return: On success an array.
*/
int *array_range(int min, int max)
{
	int *pointer;
	int i = 0, n = max - min;

	if (min > max)
	{
		return (NULL);
	}

	pointer = malloc(sizeof(pointer) * n);

	if (pointer == NULL)
	{
		return (NULL);
	}

	while (i < n)
	{
		pointer[i] = i + min;
		i++;
	}
	return (pointer);
}
