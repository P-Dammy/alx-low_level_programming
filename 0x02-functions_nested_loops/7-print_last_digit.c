#include "main.h"

/**
 * print_last_digit - Returns the absolute value of a number.
 * @n: THe number to be printed
 * Return: Returns the last digit of n
 */

int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
		r *= -1;

	_putchar(r + '0');

	return (0);
}
