#include "main.h"
/**
 * main - print _putchar
 *
 * Return: 0
 *
 */
int main(void)
{
	char word[9] = "_putchar";
	int p;

	for (p = 0; p < 9; p++)
	{
		_putchar(word[p]);
	}

	_putchar('\n');

	return (0);
}

