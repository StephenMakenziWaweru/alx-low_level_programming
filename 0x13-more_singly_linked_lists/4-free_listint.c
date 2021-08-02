#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: double pointer to start of list.
 */

void free_listint(listint_t *head)
{
	listint_t *now = head, *then;

	while (now)
	{
		then = now->next;
		free(now);
		now = then;
	}
}
