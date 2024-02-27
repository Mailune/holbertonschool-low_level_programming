#include "main.h"
/**
 * print_diagonal - print diagonal line
 *@n: the number of times the character should be printed
 *
 */
void print_diagonal(int n)
{
	int d, spaces;

	if (n > 0)

	for (d = 0; d < n; d++)
	{
		for (spaces = 0; spaces < d; spaces++)
		{
			_putchar(' ');
		}

	_putchar('\\');
	_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
