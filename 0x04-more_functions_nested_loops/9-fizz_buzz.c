#include "main.h"
#include <stdio.h>

/**
 * main - printsthe numbers from 0 to 100 with fizzbuzz inbetween
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("Buzz");
		else
		{
			if (i % 3 == 0 && i % 5 != 0)
				printf("Fizz ");
			else if (i % 3 != 0 && i % 5 == 0)
				printf("Buzz ");
			else if (i % 3 == 0 && i % 5 == 0)
				printf("FizzBuzz ");
			else
			{
				printf("%i", i);
				printf(" ");
			}
		}
	}
	printf('\n');

	return (0);
}
