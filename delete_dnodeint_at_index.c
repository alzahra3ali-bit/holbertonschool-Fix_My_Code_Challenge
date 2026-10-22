#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *saved_head;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

saved_head = *head;

if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(saved_head);
return (1);
}

i = 0;
while (i < index && saved_head != NULL)
{
saved_head = saved_head->next;
i++;
}

if (saved_head == NULL)
return (-1);

if (saved_head->next != NULL)
saved_head->next->prev = saved_head->prev;

if (saved_head->prev != NULL)
saved_head->prev->next = saved_head->next;

free(saved_head);
return (1);
}