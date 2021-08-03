#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to start of a list.
 *
 * Return: pointer to first node of reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *t1, *t2;

	if (!head || !(*head))
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	t1 = NULL;
	while (*head)
	{
		t2 = (*head)->next;
		(*head)->next = t1;
		t1 = *head;
		*head = t2;
	}
	*head = t1;
	return (*head);
}
