#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - concatenate two strings
 *@s1: first string to concatenate
 *@s2: second string to concatenate
 * Return: the string after concatenate
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int index, index_concat = 0, length = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (index = 0; s1[index] || s2[index]; index++)
	{
		length++;
	}
	concat = malloc(sizeof(char) * length);

	if (concat == NULL)
	{
		return (NULL);
	}

	for (index = 0; s1[index]; index++)
	{
		concat[index_concat++] = s1[index];
	}

	for (index = 0; s2[index]; index++)
	{
		concat[index_concat++] = s2[index];
	}
	return (concat);
}
