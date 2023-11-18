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

/**
* new_dog - creates a new dog (struct)
* @name: name of dog
* @age: age of dog
* @owner: name of owner
* Return: theOtherDog (struct)
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *theOther;

	if (name == NULL || owner == NULL)
		return (NULL);

	theOther = malloc(sizeof(theOther));

	if (theOther == NULL)
	{
		free(theOther->name);
		free(theOther->owner);
		free(theOther);
		return (NULL);
	}

	theOther->name = _strdup(name);
	if (theOther->name == NULL)
	{
		free(theOther);
		return (NULL);
	}

	theOther->owner = _strdup(owner);
	if (theOther->name == NULL)
	{
		free(theOther->name);
		free(theOther);
		return (NULL);
	}
	theOther->age = age;

	return (theOther);
}
