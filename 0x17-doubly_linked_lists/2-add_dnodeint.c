#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t.
 * @head: past header node
 * @n: data
 * Return:  the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (!head)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	new->next = *head;
	*head = new;
	return (new);
}
