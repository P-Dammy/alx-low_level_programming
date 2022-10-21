#include "main.h"

/**
 * print_sign - Checks and prints the sign of number n.
 * @n: The number to be checked
 * Return: 1 if positive, 0 if zero and -1 if negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{	
		_putchar ('+');
		return (1);
	}	
	else if (n < 0)
	{	
		_putchar (-1);
		return (-1);
	}	
	else
	{	
		_putchar ('0');
		return (0);
	}
	_putchar('\n');
}
