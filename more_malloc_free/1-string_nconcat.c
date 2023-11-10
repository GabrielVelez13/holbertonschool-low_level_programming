#include "main.h"
/**
* string_nconcat - concatenates two strings.
* @n: an unsigned int.
* @s1: a string.
* @s2: a string.
* Return: On success a concatenated string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strconcat;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 != NULL)
	{
		while (s1[len1])
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[len2])
		{
			len2++;
		}
	}

	if (n >= len2 || s2 == NULL)
	{
		n = len2;
	}
	
	strconcat = malloc((sizeof(*strconcat) * (len1 + n + 1)));

	if (strconcat == NULL)
		return (NULL);

	while (i < len1)
	{
		strconcat[i] = s1[i];
		i++;
	}
	while (j < n && s2[j])
	{
		strconcat[i + j] = s2[j];
		j++;
	}

	strconcat[i + j] = '\0';
	return (strconcat);
}
