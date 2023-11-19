#include "function_pointers.h"

/**
* print_name - print a name.
* @name: name of the person
* @f: pointing function that prints the name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
