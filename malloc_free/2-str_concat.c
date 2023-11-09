#include "main.h"
/**
* str_concat - creates a new array that concatenates two strings.
* @s1: a string.
* @s2: a string.
* Return: On success the new string.
* On error, NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *strconcat;
	int len1 = 0, len2 = 0, i = 0, j = 0;

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
	strconcat = malloc((sizeof(char) * (len1 + len2)) + 1);
	if (strconcat == NULL)
		return (NULL);
	while (i < len1)
	{
		strconcat[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		strconcat[i + j] = s2[j];
		j++;
	}
	strconcat[len1 + len2] = '\0';
	return (strconcat);
}
