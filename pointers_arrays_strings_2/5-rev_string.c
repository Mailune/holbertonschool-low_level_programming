#include "main.h"
/**
 * rev_string - reverse a string
 *@s : type argument
 *
 */
void rev_string(char *s)
{
	int c, x, length, temp;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	x = 0;
	length = c;
		c--;

	while (x < length / 2)
	{

	temp = s[x];
	s[x] = s[c];
	s[c] = temp;
	c--;
	x++;
	}
}
