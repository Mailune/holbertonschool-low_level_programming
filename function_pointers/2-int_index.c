#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - Search for an integer in an array of int
 * @array: array of int
 * @size: size of the array
 * @cmp: pointer to the function to use to compare values
 *
 * Return: if no element match or if size <= 0, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}
	return (-1);
}
