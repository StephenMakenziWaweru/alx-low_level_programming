#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to start of a list.
 *
 * Return: pointer to first node of reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *t1, *t2;
	
	if (*head == NULL)
		return (*head);
	t1 = head->next;
	if (!t1)
		return (*head);
	head->next = NULL;
	while (t1)
	{
		t2 = t1->next;
		if (!t2)
		{
			*head = t1;
			return (*head);
		}
		t1->next = *head;
		*head = t1;
		t1 = t2;
		t1 = t1->next;
	}
}
