#include "main.h"
/**
* _strdup - creates a new array that copies.
* @str: a string.
* Return: On success 0.
* On error, NULL
*/
char *_strdup(char *str)
{
	int len = 1, i = 0;
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	newstr = malloc((sizeof(char) * len) + 1);

	if (newstr == NULL)
	{
		return (NULL);
	}

	while (i < len)
	{
		newstr[i] = str[i];
		i++;
	}

	newstr[len] = '\0';
	return (newstr);
}
