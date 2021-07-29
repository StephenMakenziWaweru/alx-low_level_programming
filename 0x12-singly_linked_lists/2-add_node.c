#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: pointer to pointer to head of list;
 * @str: string to be duplicated.
 *
 * Return: pointer to new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *tmp;
	char *s = strdup(str);

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

	tmp->next = *head;
	*head = tmp;

	return (tmp);
}


