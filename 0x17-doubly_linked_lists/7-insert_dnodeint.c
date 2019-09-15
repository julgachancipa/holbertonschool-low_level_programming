#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: header node.
 * @idx: given position
 * @n: new value of the node
 * Return:  the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	while (current != NULL)
	{
		if (i == idx - 1)
			break;
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (NULL);
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = current;
	new->next = current->next;
	(current->next)->prev = new;
	current->next = new;
	return (new);
}
