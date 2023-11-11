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

	array = malloc(sizeof(array) * height);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(array) * width);
		if (array[i] == NULL)
		{
			for (; i <= 0; i++)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
