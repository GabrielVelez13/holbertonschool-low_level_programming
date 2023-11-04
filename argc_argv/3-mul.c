#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - prints the name of the file.
* @argc: parameters for the function.
* @argv: parameters for the function.
* Return: 0 (success)
**/

int main(int argc, char *argv[])
{
	int x = argc;
	int product = atoi(argv[x - 1]) * atoi(argv[x - 2]);

	printf("%d\n", product);
	return (0);
}
