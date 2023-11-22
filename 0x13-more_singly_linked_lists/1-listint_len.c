#include "lists.h"

/**
 * listint_len - a function to return the length of a list.
 * @h: listint structure
 * Return: length of the structure
 */
size_t listint_len(const listint_t *h)
{
	unsigned int n = 0;

	if (!h)
		return (n);
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
