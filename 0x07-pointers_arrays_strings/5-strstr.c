#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: pointer of substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, match;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == *needle)
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[i + j])
				{
					match = 0;
					break;
				}
			}
			if (match)
			return (haystack + i);
		}
	}
	return (NULL);
}
