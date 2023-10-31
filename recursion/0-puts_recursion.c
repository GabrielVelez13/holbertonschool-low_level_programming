#include "main.h"

/**
* _puts_recursion - prints a string through recursion.
* @s: parameter of the function.
* Return: ends the recursion.
**/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
