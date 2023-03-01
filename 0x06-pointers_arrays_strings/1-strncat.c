#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: string 1
 * @src: string 2
 * @n: bytes
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len, src_len;

	src_len = 0;
	for (i = 0; src[i] != '\0'; i++)
		src_len++;

	dest_len = 0;
	for (i = 0; dest[i] != '\0'; i++)
		dest_len++;

	if (n > src_len)
		n = src_len;

	for (i = 0; i < n; i++)
		dest[dest_len + i] = src[i];
		dest[dest_len + i] = '\0';

	return (dest);
}
