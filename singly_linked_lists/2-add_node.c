#include "lists.h"

/**
* add_node - returns a new link added to list
* @head: double pointer to the head of a linked list.
* @str: a string
* Return: new link
*/
list_t *add_node(list_t **head, const char *str)
{
	char *copy;
	int len = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	copy = strdup(str);
	if (copy == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (len = 0; str[len];)
	{
		len++;
	}

	temp->str = copy;
	temp->len = len;
	temp->next = *head;

	*head = temp;

	return (temp);
}
