#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *current_in, *current_out, *c, *n;

	current_out = (*list)->next;
	while (current_out)
	{
		current_in = current_out;
		while (current_in && (current_in->prev)->n > current_in->n)
		{
		        c = current_in->prev;
			n = current_in;
			(current_in->prev->prev)->next = n;
			current_in->prev = c->next;
			current_in->next = n->prev;
			(current_in->prev)->prev = c->prev;
			(current_in->prev)->next = n->next;
			print_list(*list);
			current_in = current_in->prev;
		}
		current_out = current_out->next;
	}
}
