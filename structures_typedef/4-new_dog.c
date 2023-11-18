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
		free_dog(theOther);
		return (NULL);
	}

	theOther->name = _strdup(name);
	theOther->age = age;
	theOther->owner = _strdup(owner);

	return (theOther);
}
