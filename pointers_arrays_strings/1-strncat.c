#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strncat - concatinates two strings.
* @dest: parameters for the function.
* @src: parameters for the function.
* @n: parameters for the function.
* Return: dest
**/

char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (n--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}
