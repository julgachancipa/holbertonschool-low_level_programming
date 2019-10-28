#include "sort.h"
/**
 * insertion_sort_list -  sorts a doubly linked list of integers
 * @list: doubly linked list
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current_in, *current_out, *a, *b, *c, *d;

	if (list && (*list) && (*list)->next)
	{
		current_out = (*list)->next;
		while (current_out)
		{
			current_in = current_out;
			while (current_in->prev && (current_in->prev)->n > current_in->n)
			{
				if (current_in->prev->prev)
					a = current_in->prev->prev;
				else
					a = NULL;
				b = current_in->prev;
				c = current_in;
				if (current_in->next)
					d = current_in->next;
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
				current_in = c;
			}
			current_out = current_out->next;
		}
	}
}
