#include "main.h"

/**
* _strchr - copies what is in src to dest.
* @s: parameters for the function.
* @c: parameters for the function.
* Return: p
**/

char *_strchr(char *s, char c)
{
	char *p = s;
	bool check = false;

	while (*s)
	{
		if (*s == c)
		{
			check = true;
			return (p);
		}
		s++;
	}

	if (check == false)
	{
		return (NULL);
	}

	return (p);
}
