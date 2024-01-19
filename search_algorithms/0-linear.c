#include "search_algos.h"

/**
* linear_search - Searchers an array for a value. O(n).
* @array: The array to search in.
* @size: The size of the array.
* @value: The value to look for.
* Return: The index of the value or -1 if fail.
*/
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
