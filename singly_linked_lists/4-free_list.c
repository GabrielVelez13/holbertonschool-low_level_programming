#include "lists.h"

/**
* free_list - Frees the whole linked list.
* @head: double pointer to the head of a linked list.
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		head->len = 0;
		free(head);
		head = temp;
	}
}
