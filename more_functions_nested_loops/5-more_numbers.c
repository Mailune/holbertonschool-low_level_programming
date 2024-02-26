#include "main.h"
/**
 * more_numbers - print series of numbers
 *
 * Return: 0
 */
void more_numbers(void)
{
	int num;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');

			_putchar((num % 10) + '0');
		}

		_putchar('\n');
	}
}
