#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* main - prints the name of the file.
* @argc: parameters for the function.
* @argv: parameters for the function.
* Return: 0 (success)
**/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (j = 0; j < argc; j++)
	{
		if (!isdigit(*argv[j]))
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
