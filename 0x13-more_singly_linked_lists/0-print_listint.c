#include "lists.h"

/**
 * print_listint - a function to print a listint structure
 * @h: pointer to the head  list.
 *
 * Return: returns the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int node_ct = 0;

	if (!h)
		return (node_ct);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_ct++;
	}
	return (node_ct);
}
