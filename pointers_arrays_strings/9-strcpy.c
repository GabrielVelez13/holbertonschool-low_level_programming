#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strcpy - copies an array.
* @dest: parameters for the function.
* @src: parameters for the function.
* Return: dest
**/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] == '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
