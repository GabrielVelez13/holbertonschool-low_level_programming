#include "main.h"

/**
* _strchr - copies what is in src to dest.
* @s: parameters for the function.
* @c: parameters for the function.
* Return: p
**/

char *_strchr(char *s, char c)
{
	while (*s && *s != c)
	{
		s++;
	}

	return ((char *)(c == *s ? s : NULL));
}
