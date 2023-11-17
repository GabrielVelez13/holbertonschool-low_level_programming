#include "dog.h"

/**
* init_dog - it inputs data into the dog struct
* @d: d is the struct dog.
* @name: name of dog
* @age: age of dog
* @owner: name of owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
