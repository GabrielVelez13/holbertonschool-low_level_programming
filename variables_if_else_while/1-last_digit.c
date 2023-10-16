#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - It gives random numbers and compares them to one another
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int lastDigit;
	char greater[] = "and is greater than 5\n";
	char zero[] = "and is 0\n";
	char lesser[] = "and is less than 6 and not 0\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit == 0)
	{
		printf("Last digit of %d is %d %s", n, lastDigit, zero);
	}
	else if (lastDigit > 5)
	{
		printf("Last digit of %d is %d %s", n, lastDigit, greater);
	}
	else if (lastDigit < 6)
	{
		printf("Last digit of %d is %d %s", n, lastDigit, lesser);
	}

	return (0);
}
