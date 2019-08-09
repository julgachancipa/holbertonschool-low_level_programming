#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the idx node.
 * @head: pointer to the head pointer.
 * @index: idx node.
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *prev;

	if (!head || !*head)
		return (-1);
	prev = *head;
	current = prev->next;
	if (index != 0)
	{
		while (prev)
		{
			if (i == index - 1)
				break;
			i++;
			prev = current;
			current = prev->next;
		}
		if (!current)
			return (-1);
		prev->next = current->next;
		free(current);
	}
	else
	{
		free(prev);
		*head = current;
	}
	return (1);
}
