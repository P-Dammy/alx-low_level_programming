#include "main.h"

/**
 * times_table - Prints times table.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int r = i * j;

			if (j == 0)
			{
				_putchar('r' + 0);
				_putchar(',');
			}
			if ((j != 0) && (r <= 9))
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
				if (j < 9)
					_putchar(',');
			}

			if (r > 9)
			{
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				if (j < 9)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
}
