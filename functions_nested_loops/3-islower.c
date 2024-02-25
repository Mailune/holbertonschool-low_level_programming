#include "main.h"
/**
* _islower - check lowercase character
* @c: is the character to be checked
*
* Return: 1 if its lowercase or 0 if its uppercase
*/
int _islower(int c)
{
	char letter;
	int lowercase = 0;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
			lowercase = 1;
	}
	return (lowercase);
}
