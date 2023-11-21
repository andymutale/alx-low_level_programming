#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current = *h, *temp;
    size_t count = 0;

    while (current != NULL)
    {
        count++;
        temp = current;
        current = current->next;

        /* Set the current node's next to NULL to break the loop */
        temp->next = NULL;

        /* Free the current node */
        free(temp);

        /* Check if we have visited this node before */
        if (temp <= current)
            break;
    }

    /* Set the head to NULL */
    *h = NULL;

    return count;
}
