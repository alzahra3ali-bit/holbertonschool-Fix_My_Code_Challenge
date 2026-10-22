#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Double pointer to the head of the list
 * @index: Index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp;
dlistint_t *current;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

for (i = 0; current != NULL && i < index; i++)
{
current = current->next;
}

if (current == NULL)
return (-1);

tmp = current->next;
if (current->prev != NULL)
current->prev->next = tmp;
if (tmp != NULL)
tmp->prev = current->prev;

free(current);
return (1);
}