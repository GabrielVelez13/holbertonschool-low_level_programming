#include "main.h"

/**
* _strpbrk - locates the first occurance of accept in s.
* @s: parameters for the function.
* @accept: parameters for the function.
* Return: s
**/

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *p = accept;

		for (; *p; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
