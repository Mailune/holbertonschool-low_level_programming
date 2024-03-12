#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to new string which is dup of the string str
 *@str: string to copy
 * Return: pointer to the dup string or NULL:insufficient memory was available
 */
char *_strdup(char *str)
{
	char *dup;
	int index, length;

	if (str == NULL)
	{
		return (NULL);
	}

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	dup = (char *)malloc((length + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (index = 0; index <= length; index++)
	{
		dup[index] = str[index];
	}
	return (dup);
}
