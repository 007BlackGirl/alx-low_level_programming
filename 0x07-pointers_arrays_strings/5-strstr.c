#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: pointer of substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, len;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (len = i; j = 0; needle[j] != '\0'; len++; j++)
		{
			if (needle[j] != haystack[len] || haystack[len] == '\0')
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
