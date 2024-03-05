#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - search a string for any of a set of bytes
 *@s: string
 *@accept: string
 * Return: pointer to the byte in s that matches one of bytes in accept or null
 */
char *_strpbrk(char *s, char *accept)
{
	int index;
	int accept_index;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (accept_index = 0; accept[accept_index] != '\0'; accept_index++)
		{
		if (s[index] == accept[accept_index])
		return (&s[index]);
		}
	}
		return (NULL);
}
