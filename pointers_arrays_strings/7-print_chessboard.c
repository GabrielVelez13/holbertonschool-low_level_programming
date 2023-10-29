#include "main.h"

/**
* print_chessboard - it prints a chess board.
* @a: parameters for the function.
**/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((a[i][j] >= 'a' && a[i][j] <= 'z') || (a[i][j] >= 'A' && a[i][j] <= 'Z'))
			{
				printf("%c", a[i][j]);
			}
		}
		putchar('\n');
	}
}
