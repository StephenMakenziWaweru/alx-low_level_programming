#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to start of list.
 *
 * Return: number of elements in list.
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		counter++;
	}

	return (counter);
}

