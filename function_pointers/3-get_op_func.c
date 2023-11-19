#include "3-calc.h"

/**
* get_op_func - looks for which funcs to use given an operation.
* @s: an operation simbol
* Return: the function pointing at the index of that operation.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}

	return (ops[i].f);
}
