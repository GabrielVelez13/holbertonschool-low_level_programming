#include "main.h"

/**
* cap_string - uppercases the beginning of words.
* @s: parameters for the function.
* Return: s
**/

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			char before;

			before = s[i - 1];
			if (before == '\t' || before == '\n')
				s[i] = s[i] - 32;
			if (before == '{' || before == '}' || before == '(' || before == ')')
				s[i] = s[i] - 32;
			if (before == ',' || before == '.' || before == ';')
				s[i] = s[i] - 32;
			if (before == '?' || before == '!' || before == ' ' || before == '"')
				s[i] = s[i] - 32;
			if (i == 0)
				s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
