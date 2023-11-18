#include "dog.h"

//Gonna copy it into every project's header

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return len;
}

char *_strcpy(char *dest, char *src)
{
	while ((*dest++ = *src++)) {}
	return dest;
}

char *_strdup(char *src)
{
	int len = my_strlen(src) + 1;
	char *dup = malloc(len);

	if (dup != NULL)
	{
		my_strcpy(dup, src);
	}
	return dup;
}