#include "main.h"
/**
* free_grid - frees the grid of zeroes.
* @grid: an array.
* @height: an int.
*/
void free_grid(int **grid, int height)
{
	if (grid != NULL)
	{
		int i;

		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}