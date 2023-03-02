#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string 1
 * @src:  string 2
 * @n: bytes
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];

	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
