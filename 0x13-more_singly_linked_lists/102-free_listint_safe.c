#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the start of the list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *free_ptr;
	size_t nodes = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	slow = *h;
	fast = *h;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = *h;
			while (slow != fast)
			{
				free_ptr = slow;
				slow = slow->next;
				free(free_ptr);
				nodes++;
			}
			free_ptr = slow;
			slow = slow->next;
			free(free_ptr);
			nodes++;
			*h = NULL;
			return (nodes);
		}
	}

	slow = *h;
	while (slow != NULL)
	{
		free_ptr = slow;
		slow = slow->next;
		free(free_ptr);
		nodes++;
	}

	*h = NULL;

	return (nodes);
}
