#include "main.h"
/**
 * puts2 - print every other character of a string
 *@str : type argument
 *
 */
void puts2(char *str)
{
	int c = 0;

	for (; str[c] != '\0'; c += 2)
	{
		_putchar(str[c]);
	}
}
