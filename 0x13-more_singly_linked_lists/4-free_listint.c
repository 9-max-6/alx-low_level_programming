#include "lists.h"

/**
 * free_listint - a function to free a list
 * @head: pointer to the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;


	while (head)
	{
		if (head)
		{
			temp = head->next;
			free(head);
		}
		head = temp;
	}
}

