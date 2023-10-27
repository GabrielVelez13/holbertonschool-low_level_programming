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
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}

	while (j < n && src[i] != '\0')
	{
		dest[i++] = src[j++];
	}

	dest[i] = '\0';
	return (dest);
}
