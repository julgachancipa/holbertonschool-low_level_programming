#include "lists.h"
/**
 * dlistint_len - counts number of nodes
 * @h: header node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
