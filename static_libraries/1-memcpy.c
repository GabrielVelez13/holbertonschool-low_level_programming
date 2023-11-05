#include "main.h"

/**
* _memcpy - copies what is in src to dest.
* @dest: parameters for the function.
* @src: parameters for the function.
* @n: parameters for the function.
* Return: p
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	for (; n > 0; n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (p);
}
