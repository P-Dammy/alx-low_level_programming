#include "main.h"

/**
 * print_alphabetx10 - prints all alphabets
 * Return: Always 0
 */

void print_alphabetx10(void)
{
	char letter;
	int i = 0;

	while (i++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
