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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
