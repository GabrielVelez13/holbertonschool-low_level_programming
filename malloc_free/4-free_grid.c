#include "main.h"
/**
* free_grid - frees the grid of zeroes.
* @grid: an array.
* @height: an int.
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i <= height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}