#include "main.h"

/**
* _strcmp - compares two strings.
* @s1: parameters for the function.
* @s2: parameters for the function.
* Return: ccs
**/

int _strcmp(char *s1, char *s2)
{
	int ccs = 0;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	ccs = (*s1 == *s2) ? 0 : (*s1 > *s2) ? 1 : -1;
	return (ccs);
}
