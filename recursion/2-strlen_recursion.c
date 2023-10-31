#include "main.h"

/**
* _strlen_recursion - prints the length of a string.
* @s: parameter of the function.
* Return: ends the recursion.
**/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s));
}
