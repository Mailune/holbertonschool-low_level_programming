#include "main.h"
/**
* _isupper - check uppercase character
* @c: is the character to be checked
*
* Return: 1 if its uppercase or 0 if its lowercase
*/
int _isupper(int c)
{
	char letter;
	int uppercase = 0;

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		if (letter == c)
			uppercase = 1;
	}
	return (uppercase);
}

