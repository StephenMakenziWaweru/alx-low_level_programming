#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * linked list.
 * @head: double pointer to start of list.
 * @index: index to delete node.
 *
 * Return: 1 on success, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *now, *then;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		then = (*head)->next;
		free(*head);
		*head = then;
		return (1);
	}
	now = *head;
	while (count < (index - 1))
	{
		if (now->next == NULL)
			return (-1);
		now = now->next;
		count++;
	}
	then = now->next;
	now->next = then->next;
	free(then);
	return (1);
}
