#include "main.h"

/**
* _strspn - compares two strings.
* @s: parameters for the function.
* @accept: parameters for the function.
* Return: p
**/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	const char *p;

	for (n = 0; *s; s++, n++)
	{
		for (p = accept; *p && *p != *s; p++)
		;
		if (!*p)
			break;
	}
	return (n);
}
