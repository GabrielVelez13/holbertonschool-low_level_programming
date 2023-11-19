#include "function_pointers.h"

/**
* array_iterator - it iterates through an array for an action.
* @array: the array
* @size: the size of the array
* @action: a function to do in each element of the array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !size || !action)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
