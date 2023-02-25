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
		while (m > 0)
		{
			_putchar(' ');
			m--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
		n--;
	}
	if (i < 1)
		_putchar('\n');
}
