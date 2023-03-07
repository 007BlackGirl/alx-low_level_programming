#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string
 * @accept: bytes
 * Return: number of bytes in the initial segment
 */

unsigned int _strrspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[i])
			{
				len++;
				break;
			}
		}
		if (s[i] != accept[i])
			break;
	}
	return (len);
}
