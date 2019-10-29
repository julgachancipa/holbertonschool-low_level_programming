#include "sort.h"
/**
 * last_element - return the tail node
 * @list: doubly linked list
 * Return: tail
 */
listint_t *last_element(listint_t **list)
{
	listint_t *crnt;

	crnt = *list;
	while (crnt->next)
		crnt = crnt->next;
	return (crnt);
}

/**
 * swap - swaps the actual node with the prev.
 * @list: doubly linked list
 * @actual: actual node
 * Return: Nothing
 */
void swap(listint_t **list, listint_t **actual)
{
	listint_t *current, *a, *b, *c, *d;

	current = *actual;
	if (current->prev->prev)
		a = current->prev->prev;
	else
		a = NULL;
	b = current->prev;
	c = current;
	if (current->next)
		d = current->next;
	else
		d = NULL;
	if (a)
		a->next = c;
	c->prev = a;
	c->next = b;
	b->prev = c;
	b->next = d;
	if (d)
		d->prev = b;
	if (!c->prev)
		*list = c;
	print_list(*list);
}
/**
 * cocktail_sort_list -  sorts a doubly linked list of integers
 * @list: doubly linked list
 * Return: Nothing
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *current_h, *current_t;
	int swapped;

	if (list && (*list) && (*list)->next)
	{
		do {
			current_h = (*list)->next;
			while (current_h)
			{
				if ((current_h->prev)->n > current_h->n)
				{
					swap(list, &current_h);
					swapped = 1;
				}
				current_h = current_h->next;
			}
			if (!swapped)
				break;
			swapped = 0;
			current_t = last_element(list);
			current_t = current_t->prev;
			while (current_t)
			{
				if (current_t->n > (current_t->next)->n)
				{
					swap(list, &(current_t->next));
					swapped = 1;
				}
				current_t = current_t->prev;
			}
		} while (swapped);
	}
}
