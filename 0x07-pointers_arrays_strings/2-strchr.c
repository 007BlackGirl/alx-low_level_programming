#include "main.h"

/**
 * _strchr - locates character string.
 * @s: string
 * @c: first occurrence of character
 * Return: pointer to first occurrence of c if there is or NULL if otherwise
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (NULL);
}
