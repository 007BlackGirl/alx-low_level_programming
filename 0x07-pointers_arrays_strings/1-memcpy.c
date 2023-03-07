#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: copy destination
 * @src: copy source
 * @n: bytes from memory are
 * Return: pointer to dest
 */

char *_memcpy(char *dest, *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
