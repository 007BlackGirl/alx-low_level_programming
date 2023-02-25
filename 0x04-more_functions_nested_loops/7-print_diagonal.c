#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: integer in question
 */

void print_diagonal(int n)
{
	int i, m;

	i = 0;

	while (n > 0)
	{
		m = i;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
