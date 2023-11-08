#include "main.h"

/**
* _strdup - creates a new array that copies.
* @str: a string.
* Return: On success 0.
* On error, NULL
*/

char *_strdup(char *str)
{
	int len;
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		len++;
		str++;
	}

	newstr = malloc(len + 1);

	if (newstr != NULL)
	{
		*newstr = *str;
	}

	return (newstr);
}
