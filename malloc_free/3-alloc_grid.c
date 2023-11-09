#include "main.h"
/**
* alloc_grid - creates a grid of zeroes.
* @width: an int.
* @height: an int.
* Return: On success an array of zeroes.
* On error, NULL
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(width * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		array[i] = malloc(height * sizeof(int *));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
