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
	char positive[] = "is positive\n";
	char zero[] = "is zero\n";
	char negative[] = "is negative\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d %s", n, positive);
	}
	if (n == 0)
	{
		printf("%d %s", n, zero);
	}
	if (n < 0)
	{
		printf("%d %s", n, negative);
	}

	return (0);
}
