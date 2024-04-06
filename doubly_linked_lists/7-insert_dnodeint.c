#include "lists.h"

/**
 *insert_dnodeint_at_index - Insert new node in dlistint_t
 *list at given position
 *@h: A pointer to the head of the dlistint_t list
 *@idx: The position to insert the new node
 *@n: The integer for the new node to contain
 *Return: If the function fails - NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *prev_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	prev_node = *h;
	for (i = 0; i < idx - 1 && prev_node != NULL; i++)
	prev_node = prev_node->next;

	if (prev_node == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	new_node->prev = prev_node;
	new_node->next = prev_node->next;

	if (prev_node->next != NULL)
	prev_node->next->prev = new_node;
	prev_node->next = new_node;

	return (new_node);
}
