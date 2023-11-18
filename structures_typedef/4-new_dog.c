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
* _strdup - copies a string to a new destination.
* @dest: new destination.
* @src: a string to duplicate
* Return: the value to duplicate the string
*/
char *_strdup(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
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
		return (NULL);
	}

	theOther->name = malloc(sizeof(theOther->name) * (_strlen(name) + 1));
	if (theOther->name == NULL)
	{
		free(theOther);
		return (NULL);
	}

	theOther->owner = malloc(sizeof(theOther->owner) * (_strlen(owner) + 1));
	if (theOther->owner == NULL)
	{
		free(theOther->name);
		free(theOther);
		return (NULL);
	}

	theOther->name = _strdup(theOther->name, name);
	theOther->age = age;
	theOther->owner = _strdup(theOther->owner, owner);

	return (theOther);
}
