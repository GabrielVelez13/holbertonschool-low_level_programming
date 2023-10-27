#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strcat - concatinates two strings.
* @dest: parameters for the function.
* @src: parameters for the function.
* Return: dest
**/

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*start != '\0')
	{
		start++;
	}

	while (*src != '\0')
	{
		*start++ = *src++;
	}

	*start = '\0';
	return (start);
}
