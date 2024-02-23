#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print last digit
*
* Return: 0
*/

int main(void)
{
	int digit;
	char letter;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
