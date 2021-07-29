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
	char *s = strdup(str);
	list_t *tmp = malloc(sizeof(list_t));

	if (!tmp)
		return (NULL);
	while (*s++)
		len++;
	if (str == NULL)
		tmp->str = "(nil)";
	else
		tmp->str = strdup(str);
	tmp->len = len;

	tmp->next = *head;
	*head = tmp;

	return (tmp);
}


