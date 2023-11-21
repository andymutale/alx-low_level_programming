#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the start of the list
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: data for the new node
 * 
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node;
    listint_t *current;
    unsigned int count = 0;

    if (head == NULL)
    {
        return (NULL);
    }

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        return (NULL);
    }
    new_node->n = n;

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    current = *head;
    while (current != NULL)
    {
        if (count == idx - 1)
        {
            new_node->next = current->next;
            current->next = new_node;
            return (new_node);
        }
        count++;
        current = current->next;
    }

    free(new_node);
    return (NULL);
}
