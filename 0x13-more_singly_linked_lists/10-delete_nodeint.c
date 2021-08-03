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
	listint_t *prev = *head, *curr, *next;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	while (prev)
	{
		curr = prev->next;
		if (!curr && prev->next == NULL)
		{
			free(prev);
			*head = NULL;
			return (1);
		}
		next = curr->next;
		if (index == 0 && !next && curr->next == NULL)
		{
			free(prev);
			*head = curr;
			return (1);
		}
		if (index == 0 && curr)
		{
			free(prev);
			*head = curr;
			return (1);
		}

		if (count == (index - 1))
		{
			free(curr);
			prev->next = next ? next : NULL;
			return (1);
		}
		prev = prev->next;
		count++;
	}

	return (-1);
}
