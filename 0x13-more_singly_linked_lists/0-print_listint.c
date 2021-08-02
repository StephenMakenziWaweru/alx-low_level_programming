#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to start of linked list.
 *
 * Return: number of nodes printed.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
