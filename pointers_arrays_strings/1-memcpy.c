#include "main.h"
/**
 * _memcpy - copie memory area
 *@src: memory area
 *@dest: memory area who receive n
 *@n: byte
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
