#include "main.h"
/**
 * print_line - print straight line
 *@n: the number of times the character should be printed
 *
 */
void print_line(int n)
{
	int l;

	if (n > 0)

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
