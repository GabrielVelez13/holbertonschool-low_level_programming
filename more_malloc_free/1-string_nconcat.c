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
		while (s1[len1])
		{
			len1++;
		}
	if (s2 != NULL)
		while (s2[len2])
		{
			len2++;
		}
	strconcat = malloc((sizeof(*strconcat) * (len1 + len2)) + 1);
	if (strconcat == NULL)
		return (NULL);
	while (i < len1)
	{
		strconcat[i] = s1[i];
		i++;
	}
	if (n >= len2)
	{
		while (j < len2)
		{
			strconcat[i + j] = s2[j];
			j++;
		}
		strconcat[len1 + len2] = '\0';
	}
	else
	{
		while (j < len2 - n)
		{
			strconcat[i + j] = s2[j];
			j++;
		}
		strconcat[len1 + len2 - n] = '\0';
	}
	return (strconcat);
}
