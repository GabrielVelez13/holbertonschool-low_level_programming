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
	int i = 0;
	int j = 0;

	while (j < n && src[i] != '\0')
	{
		dest[i++] = src[j++];
	}

	*dest = '\0';
	return (dest);
}
