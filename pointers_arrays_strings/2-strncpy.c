#include "main.h"

/**
* _strncpy - concatinates two strings.
* @dest: parameters for the function.
* @src: parameters for the function.
* @n: parameters for the function.
* Return: dest
**/

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}
