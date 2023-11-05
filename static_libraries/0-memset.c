#include "main.h"

/**
* _memset - adds the constant be to
* @s: parameters for the function.
* @b: parameters for the function.
* @n: parameters for the function.
* Return: p
**/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (; n > 0; n--)
	{
		*s = b;
		s++;
	}
	return (p);
}
