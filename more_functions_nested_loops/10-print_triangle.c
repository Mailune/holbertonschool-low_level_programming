#include "main.h"
/**
 * print_triangle - print a triangle
 *@size: triangle size
 *
 */
void print_triangle(int size)
{
	int l, h;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (l = 0; l < size; l++)
	{
		for (h = 0; h <= size; h++)
		{
			_putchar('#');
		}

	_putchar('\n');
	}
}
