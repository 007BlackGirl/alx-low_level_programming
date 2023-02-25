#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: integer in question
 */

void print_diagonal(int n)
{
	int i, m;

	for (i = 1; i <= n; i++)
	{
		for (m = 1; m < i; m++)
			_putchar(' ');
			_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
