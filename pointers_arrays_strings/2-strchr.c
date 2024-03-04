#include "main.h"
#include <stdio.h>
/**
 *_strchr - locates a character in a string
 *@c: the character to find
 *@s: the string
 * Return: a pointer to the first occurence of c in s or NULL if not find
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (&s[index]);
	}
		return (NULL);
}
