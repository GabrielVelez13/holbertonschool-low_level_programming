#include <stdio.h>
#include "main.h"

/**
* times_table - prints a times table till 9x9.
*/

void times_table(void)
{
	int i;
	int j;
	int product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j == 9)
			{
				printf("%2d", product);
			}
			else if (j == 0) {
				printf("%d, ", product);
			}
			else
			{
				printf("%2d, ", product);
			}
		}
		printf("\n");
	}
}
