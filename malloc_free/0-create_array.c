#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - create an array oh chars
 * @size: the size of the array to create
 * @c: the char to initialize
 *
 * Return: a pointer to the array or null if fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{	return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
