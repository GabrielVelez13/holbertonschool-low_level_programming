#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height);

void print_grid(int **grid, int width, int height)
{
	int w;
	int h;
	
	h = 0;
	while (h < height)
		{
			w = 0;
			while (w < width)
				{
					printf("%d ", grid[h][w]);
					w++;
				}
			printf("\n");
			h++;
		}
}

int main(void)
{
	int **grid;
	
	grid = alloc_grid(3, 5);
	if (grid == NULL)
		{
			return (1);
		}
	print_grid(grid, 6, 4);
	free(grid);
	return (0);
}

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;
	
	if (width <=0 || height <= 0)
	{
		return (NULL);
	}

	array = (int **)malloc(width * sizeof(int *));

	if (array == NULL) 
		{
			return (NULL);
		}
	
	for (int i = 0; i < width; i++)
		{
			array[i] = (int *)malloc(height * sizeof(int));
			if (array[i] == NULL)
				{
					return (NULL);
				}
		}
	
	
	for (int i = 0; i < width; i++)
		{
			for (int j = 0; j < height; j++)
				{
					array[i][j] = 0; 
				}
		}
	
	return (array);
}