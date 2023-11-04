#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int countCents(int cents);

/**
* main - prints the minimum amount of coins given an amount.
* @argc: parameters for the function.
* @argv: parameters for the function.
* Return: 0 (success)
**/

int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", countCents(cents));
	return (0);
}

/**
* countCents - counts the minimum amount of coins given an amount.
* @cents: parameters for the function.
* Return: the count.
**/

int countCents(int cents)
{
	int count = 0;

	while (cents != 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else
		{
			cents -= 1;
		}
		count++;
	}
	return (count);
}
