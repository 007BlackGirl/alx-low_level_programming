#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of array elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp, j;

	if (n % 2 == 0)
	{
		j = n;
	}
	else
	{
		j = n - 1;
	}

	for (i = 0; i < j / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
