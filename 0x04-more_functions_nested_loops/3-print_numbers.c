#include "main.h"

/**
 * print_numbers - Prints number 0 to 9
 *
 * Returns - Always 0
 */

void print_numbers(void)

{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}

	_putchar('\n');
}
