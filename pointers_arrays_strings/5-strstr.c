#include "main.h"
#include <stdio.h>
/**
 *_strstr - locate a substring
 *@haystack: string
 *@needle: substring
 * Return: pointer to the beginning of located substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	int index;
	int needle_index;

		for (index = 0; haystack[index] != '\0'; index++)
		{
			if (haystack[index] == needle[0])
			{

				for (needle_index = 0; needle[needle_index] != '\0'; needle_index++)
				{
					if (haystack[index + needle_index] != needle[needle_index])
					{
						break;
					}
				}
				if (needle[needle_index] == '\0')
				{

				return (&haystack[index]);
				}
			}
		}
		return (NULL);
}
