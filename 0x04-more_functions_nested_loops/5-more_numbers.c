#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers 0 to 14
 *
 * Returns - Always 0
 */

void more_numbers(void)

{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a >= 10)
			{
				_putchar(a / 10 + '0');
			}
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
