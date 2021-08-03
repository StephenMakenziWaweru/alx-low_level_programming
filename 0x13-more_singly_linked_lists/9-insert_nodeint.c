#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to start of list.
 * @idx: index of list where insertion is to be done.
 * @n: integer.
 *
 * Return: pointer to new node or NULL on failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev = *head, *next, *new;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (head == NULL)
		return (NULL);
	if (*head == NULL || idx == 0)
	{
		if (idx == 0 && *head)
			new->next = *head;
		else
			new->next = NULL;
		*head = new;
		return (new);
	}

	while (prev)
	{
		next = prev->next;
		if (count == (idx - 1))
		{
			prev->next = new;
			new->next = next;
			return (new);
		}
		count++;
		prev = prev->next;
	}

	return (NULL);
}
