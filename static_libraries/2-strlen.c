#include <stdio.h>
#include "main.h"

/**
* _strlen - counts the length of a string.
* @s: parameters for the function.
* Return: returns the count.
**/

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
