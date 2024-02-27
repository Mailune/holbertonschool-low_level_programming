#include "main.h"
/**
 * print_square - prints square
 *@size: size of the square
 *
 */
void print_square(int size)
{
	int l, h;

	if (size <= 0)
		_putchar('\n');

	for (l = 0; l < size; l++)
	{
		for (h = 0; h < size; h++)
		{
			_putchar('#');
		}

	_putchar('\n');
	}
}
