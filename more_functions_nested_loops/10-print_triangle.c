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
		for (h = 0; h < size - l - 1; h++)
		{
			_putchar(' ');
		}
		for (h = 0; h <= l; h++)
		{
			_putchar('#');
		}

	_putchar('\n');
	}
}
