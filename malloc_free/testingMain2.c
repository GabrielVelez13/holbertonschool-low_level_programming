#include <stdio.h>
#include <stdlib.h>
/**
* main - check the code
*
* Return: Always 0.
*/
char *str_concat(char *s1, char *s2);

int main(int argc, char *argv[]) {
	char *s;
	
	s = str_concat("Best ", "School");
	if (s == NULL)
		{
			printf("failed\n");
			return (1);
		}
	printf("%s\n", s);
	free(s);
	return (0);
}

char *str_concat(char *s1, char *s2)
{
	char *strconcat;
	int len1 = 0, len2 = 0, i = 0, j = 0;
	
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1[len1])
		{
			len1++;
		}
	while (s2[len2])
		{
			len2++;
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
			if (s1 != NULL)
			{
				strconcat[i + j] = s2[j];
				j++;
			}
			else
			{
				strconcat[j] = s2[j];
				j++;
			}
		}
	strconcat[len1 + len2] = '\0';
	return (strconcat);
}
