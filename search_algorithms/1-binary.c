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
	int first = 0, mid, last = (int)size - 1;

	while (first <= last)
	{
		mid = (first + last) / 2;
		printBinaryArray(array, first, last);
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

/**
* printBinaryArray - Prints the part of the array thats being searched.
* @array: The array to search in.
* @first: The first element checked.
* @last: The last element checked.
*/
void printBinaryArray(int *array, int first, int last)
{
	bool comma = false;

	printf("Searching in array: ");
	while (array && first < last + 1)
	{
		if (comma)
			printf(", ");

		printf("%d", array[first]);
		++first;
		comma = true;
	}
	printf("\n");
}
