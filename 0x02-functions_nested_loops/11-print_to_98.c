#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints numbers form n to 98
 * @n: first number
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		while (n <= 98)
			printf("%d, ", n++);
		_putchar('\n');
	}
	else if (n > 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		while (n >= 98)
			printf("%d, ", n--)
	}
}
