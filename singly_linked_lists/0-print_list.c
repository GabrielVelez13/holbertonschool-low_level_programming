#include "lists.h"

/**
* print_list - prints all str elements of the linked list
* @h: pointer to the head of a linked list.
* Return: counts the amount of links
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (count);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			printf("[%d] (%s)\n", h->len, h->str);
			count++;
		}
		h = h->next;
	}
	return (count);
}
