#include "main.h"

/**
 * _islower - CHecks if character c is lower case
 * @c: THe character to be checked
 * Return: 1 if lower case otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
