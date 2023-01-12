include "main.h"

/**
 * print_numbers - Prints number 0 to 9
 *
 * Returns - Always 0
 */

void print_numbers(void)

{
	int a = 0;

	for (a; a <= 9; a++)
	{
		_putchar(a);
		_putchar(\n);
	}
}
