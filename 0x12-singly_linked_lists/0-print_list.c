#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to start of linked list.
 *
 * Return: no. of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
		counter++;
	}

	return (counter);
}
