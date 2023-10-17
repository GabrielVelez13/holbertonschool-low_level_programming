#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
* _islower - checks if a word is lowercase or not.
*
* @c: is the input parameter of function.
*
* Return: 1 if lowercase, 0 if not.
*/
int _islower(int c)
{
	if (c == 0 || c == 20)
		{
			return (0);
		}
	else if (c < 65 || c > 90)
		{
			return (1);
		}
	else {
		return (0);
	}
}
