#include "lists.h"

/**
 *add_node - Adds a new node at the beginning of a list_t list
 *@head: Pointer to a pointer to the head of the list
 *@str: String to be added to the new node
 *Return: The address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temporary;
	int lenght = 0;

	temporary = malloc(sizeof(list_t));
	if (temporary == NULL)
	{
		return (NULL);
	}

	while (str[lenght])
		lenght++;

	temporary->len = lenght;
	temporary->str = strdup(str);
	temporary->next = *head;
	*head = temporary;

	return (temporary);
}
