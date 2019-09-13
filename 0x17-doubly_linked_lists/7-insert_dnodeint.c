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
	if (idx == 0)
		return(add_dnodeint(&head, n));
	els
}
