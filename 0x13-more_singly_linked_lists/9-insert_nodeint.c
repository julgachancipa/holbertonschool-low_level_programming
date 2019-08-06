#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert node
 * of a listint_t linked list.
 * @head: head pointer.
 * @idx: position of the node that will be returned.
 * @n: data
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *new;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = current->next;
			current->next = new;
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
