#include "lists.h"

/**
 * free_listint2 - a function to free a list
 * @head: pointer to the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *h = *head;

	while (h)
	{
		if (h)
		{
			temp = h->next;
			free(h);
		}
		h = temp;
	}
	head = NULL;
}

