#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to start of list.
 */

void free_list(list_t *head)
{
	list_t *then;

	while (head)
	{
		then = head->next;
		free(head->str);
		free(head);
		head = then;
	}
}
