#include "lists.h"

/**
* print_list - prints all str elements of the linked list
* @h: pointer to the head of a linked list.
* Return: counts the amount of links
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			printf("[%d] (%s)\n", h->len ,h->str);
			count++;
		}
		h = h->next;
	}
	return (count);
}
