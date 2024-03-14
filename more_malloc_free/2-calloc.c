#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array
 * @nmemb: The number of elements
 * @size: byte size of each array element
 *
 * Return: If nmemb or size = 0 or if fails = NULL
 *	Otherwise pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < (size * nmemb); index++)
		ptr[index] = '\0';

	return (ptr);
}
