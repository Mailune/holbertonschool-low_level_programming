#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - execute a function as parameteron each elements of an array
 *@array: the array
 *@size: size of the array
 *@action: pointer to the fucntion
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
