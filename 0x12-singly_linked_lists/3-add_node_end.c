#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list_t list.
 * @head: pointer to pointer to start of list.
 * @str: string to be duplicated.
 *
 * Return: pointer to new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	const char *s = str;
	list_t *tmp, *loop;
	size_t len = 0;

	if (!str)
		return (NULL);
	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);

	tmp->str = strdup(str);
	if (tmp->str == NULL)
		return (free(tmp), NULL);
	while (*s++)
		len++;
	tmp->len = len;

	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	loop = *head;
	while (loop->next != NULL)
		loop = loop->next;

	loop->next = tmp;

	return (tmp);
}

