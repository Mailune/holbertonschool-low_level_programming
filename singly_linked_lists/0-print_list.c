#include "lists.h"

/**
 * print_list - Function to print all elements of a list
 * @h: pointer to the head of the list
 * Return: The number of elements in the list (of type size_t)
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)

			printf("[0] (nil)\n");

		else

			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;

	}

	return (count);
}
