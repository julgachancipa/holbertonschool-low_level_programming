#include "lists.h"
/**
 * print_dlistint - print double linked list
 * @h: header node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
