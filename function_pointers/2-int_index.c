#include "function_pointers.h"

/**
* int_index - gives the index of the array where the number is found
* @array: the array
* @size: the size of the array
* @cmp: a function to do in each element of the array
* Return: the ind if found, -1 if error.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, ind = 0;

	if (size <= 0 || !array || !size || !cmp)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 0)
		{
			ind++;
		}
		else
		{
			return (ind);
		}
	}
	return (-1);
}
