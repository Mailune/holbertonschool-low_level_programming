#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print alphabet
 *
 * Return: 0
 */

int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'q' && letter != 'e')
	{
		putchar(letter);
	}
	}
		putchar('\n');

	return (0);
}
