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

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
char *_strdup(char *src);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
