#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return (NULL);

	dog_t *theOther = malloc(sizeof(theOther));
	if (theOther == NULL)
	{
		free(theOther);
		return (NULL);
	}
	
	
	return (theOther);
}