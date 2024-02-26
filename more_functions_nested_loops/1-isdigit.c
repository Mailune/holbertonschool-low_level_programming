#include "main.h"
/**
* _isdigit - check for a digit
* @c: is the character to be checked
*
* Return: 1 if its digit or 0 if its not
*/
int _isdigit(int c)
{
	char number;
	int digit = 0;

	for (number = '0'; number <= '9'; number++)
	{
		if (number == c)
			digit = 1;
	}
	return (digit);
}

