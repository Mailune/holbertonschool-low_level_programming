#include "lists.h"
#include <stdio.h>

/**
 *print_dlistint - Function to print all elements of a list
 *@h: pointer to the head of the list
 *Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;

	}

	return (count);
}
