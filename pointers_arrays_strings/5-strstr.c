#include "main.h"

/**
* _strstr - find a needle in a haystack.
* @haystack: parameters for the function.
* @needle: parameters for the function.
* Return: haystack.
**/

char *_strstr(char *haystack, char *needle)
{
	int len = strlen(needle);

	for (; *haystack; haystack++)
	{
		if (strncmp(haystack, needle, len))
		{
			return (haystack);
		}
	}
	return (NULL);
}
