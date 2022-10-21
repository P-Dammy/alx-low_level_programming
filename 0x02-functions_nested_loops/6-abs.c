#include "main.h"

/**
 * _abs - Returns the absolute value of a number.
 * @n: THe number to be printed
 * @r: the absolute value of n if negative
 * Return: Returns the absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		int r;

		r = n * -1;
		return (r);
	}
	else
		return (n);
}
