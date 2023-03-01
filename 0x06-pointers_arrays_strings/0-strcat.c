#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int i, dest_len, src_len;

	src_len = 0;
	for (i = 0; src[i] != '\0'; i++)
		src_len++;

	dest_len = 0;
	for (i = 0; dest[i] != '\0'; i++)
		dest_len++;

	for (i = 0; i <= src_len; i++)
		dest[dest_len + i] = src[i];

	return (dest);
}
