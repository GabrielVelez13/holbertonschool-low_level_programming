#include "dog.h"

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
