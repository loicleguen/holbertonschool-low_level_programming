#include "lists.h"

/**
 * free_dlistint - Frees a list.
 * @head: Pointer to the head of the list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
