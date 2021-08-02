#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked
 * list.
 * @head: pointer to start of list.
 * @index: index of the node, starting at 0.
 *
 * Return: pointer to that node or NULL on failure.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	while (temp)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}

	return (NULL);
}
