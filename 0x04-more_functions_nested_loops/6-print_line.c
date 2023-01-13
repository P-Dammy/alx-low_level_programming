#include "main.h"

/**
 * print_line - Prints _ n times to form a line
 * @n : number of times to print _
 *
 * Returns - Always 0
 */

void print_line(int n)

{
	int a;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a > n; a++)
			_putchar('_');

	_putchar('\n');
	}
}
