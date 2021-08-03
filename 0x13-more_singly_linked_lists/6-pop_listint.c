#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n).
 * @head: double pointer to start of list.
 *
 * Return: head node data or 0 if empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if ((*head)->n == NULL || head == NULL)
		return (0);
	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
