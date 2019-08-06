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
	int i = -1;
	listint_t *current;
	listint_t *new;

	if (*head == NULL)
		return (NULL);
	current = *head;
	if (idx)
		i = 0;
	while (current != NULL)
	{
		if ((unsigned int)(i + 1)  == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			if (idx == 0)
			{
				new->next = *head;
				*head = new;
				return (*head);
			}
			else if (current->next == NULL)
				new->next = NULL;
			else
				new->next = current->next;
			current->next = new;
			return (new);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
