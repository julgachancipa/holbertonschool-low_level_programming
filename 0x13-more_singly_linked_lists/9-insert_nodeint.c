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

	if (head == NULL)
		return (NULL);
	if (idx)
		i = 0;
	if (i != 0)
	{
		current = *head;
		while (current != NULL && i != 0)
		{
			if ((unsigned int)(i + 1)  == idx)
				break;
			current = current->next;
			i++;
		}
		if (current == 0)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
