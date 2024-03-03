#include "main.h"
#include <stdio.h>
/**
 *_strcpy - copy the string pointed,including terminating null byte, to buffer
 *@dest : a buffer for copying the string
 *@src : source string to copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	dest[index] = '\0';
	return (dest);
}
