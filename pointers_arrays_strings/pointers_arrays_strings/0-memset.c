#include "main.h"
/**
 *_memset - fill memorory with byte
 *@s: memory area
 *@b:constant byte
 *@n: nombre d'octets a remplir
 * Return: a pointer in memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}
