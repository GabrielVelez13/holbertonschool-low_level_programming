#include "dog.h"


/**
* _strlen - gives the length of a string.
* @str: a string
* Return: the length of string
*/
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}

/**
* _strcpy - copies a string to a new destination.
* @dest: the destination
* @src: a string to copy
* Return: the copied string
*/
char *_strcpy(char *dest, char *src)
{
	while ((*dest++ = *src++))
	{}

	return (dest);
}

/**
* _strdup - copies a string to a new destination.
* @src: a string to duplicate
* Return: the value to duplicate the string
*/
char *_strdup(char *src)
{
	int len = _strlen(src) + 1;
	char *dup = malloc(len);

	if (dup != NULL)
	{
		_strcpy(dup, src);
	}
	return (dup);
}
