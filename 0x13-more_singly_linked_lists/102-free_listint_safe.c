#include "lists.h"
#include <stdlib.h>

listint_t *move_pointers(listint_t *slow, listint_t *fast)
{
    slow = slow->next;
    fast = fast->next->next;
    return slow, fast;
}

listint_t *free_loop(listint_t *slow, listint_t *fast, listint_t **h, size_t *nodes)
{
    listint_t *free_ptr;

    slow = *h;
    while (slow != fast)
    {
        free_ptr = slow;
        slow = slow->next;
        free(free_ptr);
        (*nodes)++;
    }
    free_ptr = slow;
    slow = slow->next;
    free(free_ptr);
    (*nodes)++;
    *h = NULL;
    return slow;
}

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
        move_pointers(slow, fast);

        if (slow == fast)
        {
            slow = free_loop(slow, fast, h, &nodes);
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

