#include "main.h"

/**
 * _isalpha - Checks if character c is alphabet
 * @c: THe character to be checked
 * Return: 1 if lower case otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
