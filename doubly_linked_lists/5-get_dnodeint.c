#include "lists.h"

/**
 *get_dnodeint_at_index - Locates a node in a dlistint_t list
 *@head: The head of the dlistint_t list
 *@index: The node to locate
 * Return: If the node does not exist - NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		if (count > index)
			return (NULL);
		head = head->next;
		count++;
	}
	return (NULL);
}
