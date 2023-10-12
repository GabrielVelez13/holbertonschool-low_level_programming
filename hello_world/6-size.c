#include <stdio.h>

/**
* main - checks the size of various types in c
* Return: 0 to make sure its working
*/

int main(void)
{
	int intType;
	float floatType;
	long int longIntType;
	long long int doubleLongIntType;
	char charType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(doubleLongIntType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
