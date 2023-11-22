#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index idx of a listint_t linked list
 * @head: double pointer to the start of the list
 * @idx: index of the node that should be deleted, index starts at 0
 * 
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *current;
	listint_t *next;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (idx == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	next = current->next->next;
	free(current->next);
	current->next = next;

	return (1);
}
