#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at an index in a linked list.
 * @head: Pointer to the pointer to the head of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if successful, -1 if it fails.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current && i < index)
	{
		current = current->next;
		i++;
	}
	if (!current)
		return (-1);
	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
