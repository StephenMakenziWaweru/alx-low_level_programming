#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL.
 * @head: double pointer to start of list.
 */

void free_listint2(listint_t **head)
{
	listint_t *then;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		then = (*head)->next;
		free(*head);
		*head = then;
	}
}
