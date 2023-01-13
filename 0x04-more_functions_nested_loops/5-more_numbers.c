#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers 0 to 14
 *
 * Returns - Always 0
 */

void more_numbers(void)

{
	int a, b;

	for (b = 0; b < 3; b++)
	{
		for (a = 0; a < 10; a++)
		{
			_putchar(a + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
