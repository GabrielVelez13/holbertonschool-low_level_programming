#include <stdio.h>

/**
* main - does the FizzBuzz test.
* Return: 0
*/

int main(void)
{
	int count = 1;

	while (count <= 100)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (count % 5 == 0)
		{
			if (count != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz\n");
			}
		}
		else
		{
			printf("%d ", count);
		}
		count++;
	}
	return (0);
}
