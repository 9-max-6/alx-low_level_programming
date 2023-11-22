#include "lists.h"

/**
 * add_nodeint - a function to add a node in list.
 * @head: pointer to the first node
 * @n: value of the integer value for the list.
 *
 * Return: pointer to the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	temp = *head;
	*head = new_node;
	new_node->n = n;
	new_node->next = temp;

	return (new_node);
}
