#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - it hold the info of the dog
* @name: name of dog
* @age: age of dog
* @owner: name of owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
