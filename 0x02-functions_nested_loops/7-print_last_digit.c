#include "main.h"

/**
 * print_last_digit - Returns the absolute value of a number.
 * @n: THe number to be printed
 * Return: Returns the last digit of n
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n = -n;
	r = n % 10;
	if (r < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}
