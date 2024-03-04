#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an elements of an array of integer
 *@a: first argument
 *@n: second argument
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");

}
