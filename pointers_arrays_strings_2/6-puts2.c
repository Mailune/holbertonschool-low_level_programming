#include "main.h"
/**
 *puts2 - print every other character of a string
 *@str : type argument
 *
 */
void puts2(char *str)
{
	int index = 0, length = 0;

	while (str[index++])
		length++;

	for (index = 0; index < length; index += 2)

		_putchar(str[index]);
	_putchar('\n');
}
