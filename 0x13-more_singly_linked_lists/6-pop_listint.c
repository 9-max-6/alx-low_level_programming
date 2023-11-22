#include "lists.h"

/**
 * pop_listint - a function to delete a node and return n
 * @head: pointer to the list.
 *
 * Return: returns its value.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (!(*head))
		return (0);
	val = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (val);
}
