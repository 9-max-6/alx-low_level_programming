#include "lists.h"

/**
 * add_nodeint_end - a function to add a node to the end
 * of a list.
 *
 * @head: pointer to the pointer of the first node
 * @n: integer value of the new node
 *
 * Return: success ? pointer to new node : NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *h;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	h = *head;
	while (h)
	{
		if (h->next == NULL)
		{
			h->next = new_node;
			break;
		}
		h = h->next;
	}

	return (new_node);
}
