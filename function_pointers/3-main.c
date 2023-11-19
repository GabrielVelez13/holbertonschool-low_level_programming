#include "3-calc.h"

/**
* main - Prints the result
* @argc: number of arguments
* @argv: array of inputs
* Return: Success 0.
*/
int main(int argc, char *argv[])
{
	int n1, n2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	op = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && n2 == 0) || (*op == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(n1, n2));

	return (0);
}
