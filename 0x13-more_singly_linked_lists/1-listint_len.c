#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t
 * list.
 * @h: points to start of linked list.
 *
 * Return: number of elements in a linked list.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
