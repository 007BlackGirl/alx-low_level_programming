#incluide "main.h"

/**
 * print_line - draws a straight line
 * @n: integer in question
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
