#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main (
{
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