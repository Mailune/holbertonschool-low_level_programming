#include "lists.h"

/**
 *delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *at a given index
 *@head: A pointer to the head of the dlistint_t
 *@index: The index of the node to delete
 *Return: Upon success - 1 Otherwise - -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temporary = *head;
	unsigned int index_node = 0;

	if (temporary == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temporary->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(temporary);
		return (1);
	}

	while (index_node < index && temporary != NULL)
	{
		temporary = temporary->next;
		index_node++;
	}

	if (temporary == NULL)
		return (-1);

	if (temporary->prev != NULL)
		temporary->prev->next = temporary->next;

	if (temporary->next != NULL)
		temporary->next->prev = temporary->prev;

	free(temporary);
	return (1);
}
