#include "lists.h"
/**
 * delete_dnodeint_at_index -  delete a node at a given position.
 * @head: header node.
 * @index: given position
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		if (current->next == NULL)
			*head = NULL;
		else
		{
			*head = current->next;
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (i == index)
			break;
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	if (current->next == NULL)
	{
		(current->prev)->next = NULL;
		free(current);
		return (1);
	}
	(current->prev)->next = current->next;
	(current->next)->prev = current->prev;
	free(current);
	return (1);
}
