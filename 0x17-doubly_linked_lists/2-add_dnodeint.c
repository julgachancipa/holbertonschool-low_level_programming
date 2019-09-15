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

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = *head;
		*head = new;
		return (*head);
	}
	new->n = n;
	(*head)->prev = new;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (*head);
}
