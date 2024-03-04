#include "main.h"
#include <stdio.h>
/**
 *_strspn - get the length of a prefix substring
 *@s: first string
 *@accept: second string
 * Return:number bytes in initial segment of s which cst only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int index;
	int accept_index;
	int bytes = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (accept_index = 0; accept[accept_index] != '\0'; accept_index++)

		if (s[index] == accept[accept_index])
		bytes++;
	}
	return (bytes);
}
