#include "main.h"
/**
* _isalpha - check alphabetic character
* @c: is the character to be checked
*
* Return: 1 if its a letter lowercase uppercase or 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return 1;
	}

	return (0);
}
