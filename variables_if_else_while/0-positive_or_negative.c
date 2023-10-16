#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
* main - It gives random numbers and compares them to one another
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	char positive[] = "is greater";
	char zero[] = "is zero";
	char negative[] = "is negative";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%s", positive);
	}
	if (n == 0)
	{
		printf("%s", zero);
	}
	if (n < 0)
	{
		printf("%s", negative);
	}

	return (0);
}
