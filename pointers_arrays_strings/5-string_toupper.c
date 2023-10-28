#include "main.h"

/**
* string_toupper - uppercases an array.
* @s: parameters for the function.
* Return: s
**/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}

	return (s);
}
