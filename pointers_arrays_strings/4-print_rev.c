#include "main.h"
/**
 * print_rev - prints a string in reverse
 *@s : the string to print
 *
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (length -= 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}

	_putchar('\n');
}
