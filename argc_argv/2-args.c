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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
