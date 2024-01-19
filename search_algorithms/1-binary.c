#include "search_algos.h"

/**
* binary_search - Searchers an array for a value.
* @array: The array to search in.
* @size: The size of the array.
* @value: The value to look for.
* Return: The index of the value or -1 if fail.
*/
int binary_search(int *array, size_t size, int value)
{
	int i = 0, first = 0, mid, last = (int)size;

	while (first <= last)
	{
		mid = (first + last) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			last = mid - 1;
		}
		else
		{
			first = mid + 1;
		}
	}
	return (-1);
}
