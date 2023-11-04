#include <stdio.h>
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

	x = x - argc;

	printf("%s\n", argv[x]);
	return (0);
}
